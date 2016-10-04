MazeGen: Maze.o MazeGen.cpp Runner.o
	g++ MazeGen.cpp Maze.o Runner.o -o MazeGen

Maze.o:  Maze.cpp Maze.h
	g++ -c Maze.cpp 

Runner.o: Runner.cpp Runner.h
	g++ -c Runner.cpp

install:
	sudo cp ./MazeGen /usr/local/bin

clean:
	rm -rf *.o
	rm MazeGen
