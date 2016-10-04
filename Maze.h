#ifndef MAZE_H_
#define MAZE_H_

//#include "MazePart.h"
#include <string>

using namespace std;

class Maze
{
 public:
  Maze(int newWidth,int newHeight);
  string Display();
  
 private:
  int width, height;
  char **map;
};

#endif
