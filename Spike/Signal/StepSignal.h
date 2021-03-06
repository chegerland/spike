#ifndef SPIKE_STEPSIGNAL_H
#define SPIKE_STEPSIGNAL_H

#include <string>

#include "Spike/Signal/Signal.h"

namespace Spike {

/**
 * @class StepSignal
 * @brief Implement a step get_value, i.e. alpha*Theta(t - t_0)
 */
class StepSignal : public Signal {
private:
  double alpha; ///< amplitude
  double t_0;   ///< start time

public:
  /**
   * @brief Construct StepSignal from parameters
   * @param alpha Amplitude
   * @param t_0 Start time
   * @param time_frame TimeFrame
   */
  StepSignal(double alpha, double t_0, const TimeFrame &time_frame);

  /**
   * @brief Construct StepSignal from input file
   * @param input_file Input file in .ini format
   * @param time_frame TimeFrame
   */
  StepSignal(const std::string &input_file, const TimeFrame &time_frame);

  /**
   * @brief Calculates the step get_value.
   */
  void calculate_signal();

  /**
   * @brief Returns get_value, i.e. alpha*Theta(t - t_0)
   * @param t Time
   * @return Signal, i.e. alpha*Theta(t - t_0)
   */
  [[nodiscard]] double signal(double t) const;

  void print(std::ostream &out) const override {
    out << "StepSignal(alpha: " << alpha << ", t_0: " << t_0 << ")";
  }
};

} // namespace Spike

#endif // SPIKE_STEPSIGNAL_H
