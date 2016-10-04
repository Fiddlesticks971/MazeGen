#include "Maze.h"
#include <iostream>
#include <time.h>

Maze::Maze(int newWidth, int newHeight, int newDifficulty)
{
  width = newWidth;
  height = newHeight;
  difficulty = newDifficulty;
  int randVal;
  srand(time(NULL));
  
  map = new char*[width+2];
  for(int x = 0; x < width+2; x++)
    map[x] = new char[height+2];
  
  for(int i = 0; i < width+2; i++){
    for(int j = 0; j < height+2; j++){
      if(i == 1 && j == 0)
	map[i][j] = ' ';
      else if(i == width && j == height+1)
	map[i][j]='$';
      else if( i == 0 || i == width+1)
	  map[i][j]='#';
      else if(j == 0 || j == height+1)
	    map[i][j]='#';
      else if (j%2 == 0 && i%2 == 0)
	map[i][j]='#';
      else if((j%2 == 0 && i%2 == 1)||(j%2 ==1 && i%2 == 0))
	{
	  randVal = rand() % difficulty;
	  if (randVal == 0)
	    map[i][j] = '#';
	  else 
	    map[i][j] =' ';
	}
      else
	map[i][j]=' ';
	  
    }
  }
}

string Maze::Display()
{
  string output="";
  for(int j = 0; j < height+2; j++)
    {
      for(int i = 0; i < width+2; i++)
	{
	  output = output + map[i][j];
	}
      output = output + "\n";
    }
  return output;
}

char** Maze::Output()
{
  return map;
}
