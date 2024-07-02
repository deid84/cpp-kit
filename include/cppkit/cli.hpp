#ifndef CLI_H_
#define CLI_H_

#include <string>
#include <vector>

using namespace std;

class Cli {
public:
  explicit Cli(vector<string>& args);
  [[nodiscard]] bool versionRequested() const;
  static void printVersion();
  
private:
  vector<string> arguments; 
  static string VERSION;
};

#endif  // CLI_H_