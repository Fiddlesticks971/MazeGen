#include "Runner.h"

Runner::Runner(char** newMap, int newHeight, int newWidth)
{
  map = newMap;
  height = newHeight;
  width = newWidth;
}

bool Runner::Run1(int X,int Y)
{

  if (map[X][Y] == '$')
    return true;
  map[X][Y]='.';
  
  if(map[X+1][Y] != '#' && map[X+1][Y] != '.' && map[X+1][Y] != 'x')
    if(Run1(X+1,Y))
      return true;
  if(map[X][Y+1] != '#' && map[X][Y+1] != '.' && map[X][Y+1] != 'x')
    if(Run1(X,Y+1))
      return true;
  if(map[X-1][Y] != '#' && map[X-1][Y] != '.' && map[X-1][Y] != 'x')
    if(Run1(X-1,Y))
      return true;
  if(map[X][Y-1] != '#' && map[X][Y-1] != '.' && map[X][Y-1] != 'x' )
    if(Run1(X,Y-1))
      return true;
  map[X][Y]='x';
  return false;
}
bool Runner::Run2(int X,int Y)
{

  if (map[X][Y] == '$')
    return true;
  map[X][Y]='*';
  
  if(map[X][Y+1] != '#' && map[X][Y+1] != '*' && map[X][Y+1] != 'x')
    if(Run2(X,Y+1))
      return true;
  if(map[X+1][Y] != '#' && map[X+1][Y] != '*' && map[X+1][Y] != 'x')
    if(Run2(X+1,Y))
      return true;
  if(map[X][Y-1] != '#' && map[X][Y-1] != '*' && map[X][Y-1] != 'x')
    if(Run2(X,Y-1))
      return true;
  if(map[X-1][Y] != '#' && map[X-1][Y] != '*' && map[X-1][Y] != 'x' )
    if(Run2(X-1,Y))
      return true;
  map[X][Y]='x';
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
