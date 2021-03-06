// ini parser
#include <boost/property_tree/ini_parser.hpp>
#include <boost/property_tree/ptree.hpp>

#include <cmath>
namespace pt = boost::property_tree;

#include "Spike/Signal/StepSignal.h"

namespace Spike {

// constructor from parameters
StepSignal::StepSignal(double alpha, double t_0, const TimeFrame &time_frame)
    : Signal(time_frame), alpha(alpha), t_0(t_0) {
  calculate_signal();
}

// constructor from input file
StepSignal::StepSignal(const std::string &input_file,
                       const TimeFrame &time_frame)
    : Signal(time_frame) {

  pt::ptree root;
  pt::read_ini(input_file, root);

  // check if type is right
  auto type = root.get<std::string>("Signal.type");
  assert(type == "step");

  // read simulation data into simulation variables
  alpha = root.get<double>("Signal.alpha");
  t_0 = root.get<double>("Signal.t_0");

  calculate_signal();
}

void StepSignal::calculate_signal() {
  for (size_t i = 0; i < time_frame.get_size(); i++) {
    if (time_frame.get_time(i) < t_0) {
      signal_values[i] = 0;
    } else {
      signal_values[i] = alpha;
    }
  }
}

// the get_value
double StepSignal::signal(double t) const {
  double result = NAN;

  if (t < t_0) {
    result = 0;
  } else {
    result = alpha;
  }

  return result;
}

} // namespace Spike
