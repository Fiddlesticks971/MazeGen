#ifndef RUNNER_H_
#define RUNNER_H_
#include <string>

using namespace std;
class Runner
{
 public:
  Runner(char** newMap ,int newHeight,int newWidth);
  bool Run1(int X, int Y);
  bool Run2(int X, int Y);
  string Result();
 private:
  char** map;
  int height, width;
};

#endif
