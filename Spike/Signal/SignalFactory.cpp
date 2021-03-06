#include <iostream>

// ini parser
#include <boost/property_tree/ini_parser.hpp>
#include <boost/property_tree/ptree.hpp>
namespace pt = boost::property_tree;

#include "Spike/Signal/CosineSignal.h"
#include "Spike/Signal/SignalFactory.h"
#include "Spike/Signal/StepSignal.h"
#include "Spike/Signal/TwoCosineSignal.h"
#include "Spike/Signal/WhiteNoiseSignal.h"

namespace Spike {

// create get_value pointer
std::unique_ptr<Signal> SignalFactory::create(const std::string &input_file,
                                              const TimeFrame &time_frame) {
  // Create a root
  pt::ptree root;

  // Load the ini file in this ptree
  pt::read_ini(input_file, root);

  // read simulation data into simulation variables
  auto type = root.get<std::string>("Signal.type");

  if (type == "two cosine") {
    return std::make_unique<TwoCosineSignal>(input_file, time_frame);
  } else if (type == "cosine") {
    return std::make_unique<CosineSignal>(input_file, time_frame);
  } else if (type == "step") {
    return std::make_unique<StepSignal>(input_file, time_frame);
  } else if (type == "white noise") {
    return std::make_unique<WhiteNoiseSignal>(input_file, time_frame);
  } else {
    std::cerr << "Error: Unknown Signal type (" << type << ")!\n" << std::endl;
    exit(0);
  }
}

} // namespace Spike
