#ifndef MAZE_H_
#define MAZE_H_

//#include "MazePart.h"
#include <string>

using namespace std;

class Maze
{
 public:
  Maze(int newWidth,int newHeight, int newDifficulty);
  string Display();
  char** Output();
  
 private:
  int width, height, difficulty;
  char **map;
};

#endif
