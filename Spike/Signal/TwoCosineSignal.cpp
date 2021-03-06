#include <cmath>

// ini parser
#include <boost/property_tree/ini_parser.hpp>
#include <boost/property_tree/ptree.hpp>
namespace pt = boost::property_tree;

#include "Spike/Signal/TwoCosineSignal.h"

namespace Spike {

// constructor from parameters
TwoCosineSignal::TwoCosineSignal(double alpha, double f1, double beta,
                                 double f2, double phi,
                                 const TimeFrame &time_frame)
    : Signal(time_frame), alpha(alpha), f1(f1), beta(beta), f2(f2), phi(phi) {
  calculate_signal();
}

// constructor from input file
TwoCosineSignal::TwoCosineSignal(const std::string &input_file,
                                 const TimeFrame &time_frame)
    : Signal(time_frame) {

  pt::ptree root;
  pt::read_ini(input_file, root);

  // check if type is right
  auto type = root.get<std::string>("Signal.type");
  assert(type == "two cosine");

  // read simulation data into simulation variables
  alpha = root.get<double>("Signal.alpha");
  f1 = root.get<double>("Signal.f1");
  beta = root.get<double>("Signal.beta");
  f2 = root.get<double>("Signal.f2");
  phi = root.get<double>("Signal.phi");

  // calculate the signal
  calculate_signal();
}

void TwoCosineSignal::calculate_signal() {
  for (size_t i = 0; i < time_frame.get_size(); i++) {
    signal_values[i] = alpha * cos(2.0 * M_PI * f1 * time_frame.get_time(i)) +
                       beta * cos(2.0 * M_PI * f2 * time_frame.get_time(i));
  }
}

// the signal
double TwoCosineSignal::signal(double t) const {
  return alpha * cos(2.0 * M_PI * f1 * t) +
         beta * cos(2.0 * M_PI * f2 * t + phi);
}

} // namespace Spike