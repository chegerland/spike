#ifndef SPIKE_WHITENOISESIGNAL_H
#define SPIKE_WHITENOISESIGNAL_H

#include <complex>
#include <random>
#include <string>
#include <vector>

#include "Spike/Signal/Signal.h"
#include "Spike/TimeFrame/TimeFrame.h"

namespace Spike {

/**
 * @class WhiteNoiseSignal
 * @brief Implements a band limited white gaussian noise get_value
 */
class WhiteNoiseSignal : public Signal {
private:
  double alpha;  ///< amplitude
  double f_low;  ///< lower cut-off frequency
  double f_high; ///< higher cut-off frequency

  std::random_device rd;                 ///< random device (seed)
  std::mt19937 generator;                ///< random number generator
  std::normal_distribution<double> dist; ///< normal distribution

  std::vector<std::complex<double>>
      frequencies; ///< white noise signal frequencies

public:
  /**
   * @brief Construct WhiteNoiseSignal from parameters
   * @param alpha Amplitude
   * @param f_low Lower cut-off frequency
   * @param f_high Higher cut-off frequency
   * @param time_frame time frame
   */
  WhiteNoiseSignal(double alpha, double f_low, double f_high,
                   const TimeFrame &time_frame);

  /**
   * @brief Construct WhiteNoiseSignal from input file
   * @param input_file Input file in .ini format
   * @param time_frame time frame
   */
  WhiteNoiseSignal(const std::string &input_file, const TimeFrame &time_frame);

  /**
   * @brief Generate the white noise, i.e. fill the signal_values
   */
  void calculate_signal();

  /**
   * @brief Return get_value, i.e. white noise at time t
   * @param t Time
   * @return Signal, i.e. white noise at time t
   */
  [[nodiscard]] double signal(double t) const;

  /**
   * @brief Sets the amplitude for the white noise signal.
   * @param alpha_new new amplitude
   */
  void set_alpha(double alpha_new) { alpha = alpha_new; };

  /**
   * @brief Returns the white noise signal vector.
   * @return white noise vector
   */
  [[nodiscard]] const std::vector<double> &get_values() const {
    return signal_values;
  };

  /**
   * @brief Returns the frequencies
   * @return white noise frequencies
   */
  [[nodiscard]] const std::vector<std::complex<double>> &
  get_frequencies() const {
    return frequencies;
  };

  /**
   * @brief Returns the amplitude
   * @return amplitude
   */
  [[nodiscard]] double get_alpha() const { return alpha; };

  /**
   * @brief Returns the variance.
   * @return variance
   */
  [[nodiscard]] double get_variance() const {
    return 2. * (f_high - f_low) * alpha;
  };

  /**
   * @brief Prints white noise signal to out stream.
   * @param out out stream
   */
  void print(std::ostream &out) const override {
    out << "WhiteNoiseSignal(alpha: " << alpha << ", f_low: " << f_low
        << ", f_high: " << f_high << ")";
  }
};

} // namespace Spike

#endif // SPIKE_WHITENOISESIGNAL_H
