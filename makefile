MazeGen: Maze.o MazeGen.cpp
	g++ MazeGen.cpp Maze.o -o MazeGen

Maze.o:  Maze.cpp Maze.h
	g++ -c Maze.cpp 

install:
	sudo cp ./MazeGen /usr/local/bin

clean:
	rm -rf *.o
	rm MazeGen
