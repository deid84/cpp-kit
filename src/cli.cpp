#include "cppkit/cli.hpp"
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

Cli::Cli(vector<string>& args) : arguments(args) {}

// Metodo versionRequested
[[nodiscard]] bool Cli::versionRequested() const {
    return any_of(arguments.begin(), arguments.end(),
                       [](const std::string& arg) {
                           return arg == "-v" || arg == "--version";
                       });
    return false;
}

// Metodo printVersion
void Cli::printVersion() {
    std::cout << "Version: " << "1.0.0" << std::endl;
}