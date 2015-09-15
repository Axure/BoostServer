#include <iostream>

#include <boost/log/trivial.hpp>

using namespace std;
int main(int argc, char *argv[]) {
  cout << "Hello, World!" << endl;

  try {
    if (argc != 2) {
      std::cerr << "Incorrect number of arguments. Expected 1, got " << argc - 1 << ".";
      BOOST_LOG_TRIVIAL(error) << "Incorrect number of arguments. Expected 1, got " << argc - 1 << ".";
      return 1;
    }
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << "\n";
  };

  return 0;
}