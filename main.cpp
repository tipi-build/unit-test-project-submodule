#include <submodule/print_to_console.hpp>
#include <print_to_console_from_2ndsubmodule.hpp>

int main(int argc, const char** argv) {
  
  submodule::print_to_console();
  a_2nd_submodule::print_to_console();

  return 0;
} 