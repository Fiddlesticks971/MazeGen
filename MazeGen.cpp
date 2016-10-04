#include "Maze.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

const string helpstring = "\n"
  "HELP:\n"
  "-w <int> Sets the width of the Maze\n"
  "-t <int> Sets the height of the Maze\n"
  "-h       Help display\n";

int main(int argc, char *argv[])
{
  int width = 0, height = 0;

  for(int i = 1; i < argc; i++)
    {
      if( (string)argv[i] == "-w")
	{
	  i++;
	  width =stoi((string)argv[i]); 
	}
      else if((string)argv[i] == "-t")
	{
	  i++;
	  height = stoi((string)argv[i]);
	}
      else if((string)argv[i] == "-h")
	{
	  cout << helpstring << endl;
	  return 1;
	}
    }
  if (width == 0 || height == 0)
    {
      cout << "\nINCORRECT INPUT!\n"
	"MUST HAVE WIDTH AND HEIGHT!\n";
      cout << helpstring << endl;
      return 1;
    }
  
  Maze DisplayMaze(width,height);
  cout << DisplayMaze.Display();
  return 0;
}
