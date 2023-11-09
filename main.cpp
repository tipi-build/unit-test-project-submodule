#include <submodule/print_to_console.hpp>
#include <submodule/version.hpp>

int main(int argc, const char** argv) {
  
  submodule::print_to_console();
  std::cout<<get_version()<<std::endl;

  return 0;
} 