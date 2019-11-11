#ifndef OPTIONS_H
#define OPTIONS_H

#include <string>

//! Class for command line options
/*!
* Defines a class to store the command line options.
*/
class Options
{
public:
  
  /*! Mode (0 = Simulation, 1 = Evaluation, others = unknown) */
  int mode;

  /*! path to input file containing parameters */
  std::string file;

  /*!
  * Reads options from the command line and stores them in an Options struct.
  * @param argc Number of arguments.
  * @param argv Character array containing command line options.
  */
  Options(int argc, char * argv[]);

  /*!
  * Checks the given command line options for consistency.
  */
  void check();

};

/*!
* Gets the extension of a given file.
* @param file_path Path to the file.
*/
std::string getFileExtension(std::string filePath);

/*!
* Checks if file exists.
* @params path File path
*/
bool exists (const std::string& path);

/*!
* Reads in a spike train ensemble from a file.
* @params name File path
*/
std::vector<std::vector<double> > file_to_vector(std::string name);

#endif // OPTIONS_H
