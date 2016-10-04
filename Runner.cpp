#include "Runner.h"

Runner::Runner(char** newMap, int newHeight, int newWidth)
{
  map = newMap;
  height = newHeight;
  width = newWidth;
}

bool Runner::Run(int X,int Y)
{
  map[X][Y]='.';
  if (map[X+1][Y] == '$')
    return true;
  if(map[X+1][Y] != '#')
    if(Run(X+1,Y))
      return true;
  if(map[X][Y+1] != '#')
    if(Run(X,Y+1))
      return true;
  if(map[X-1][Y] != '#')
    if(Run(X-1,Y))
      return true;
  if(map[X][Y-1] != '#')
    if(Run(X,Y-1))
      return true;
  return false;
}

string Runner::Result()
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
