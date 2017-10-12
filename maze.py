import numpy as np
import random as rand

def mazeGen(x,y,d):
    difficulty = 10 - d
    maze = []
    i=0
    j=0
    while i < x+x:
        mazeRow = []
        j = 0
        while j < y+y:
            if (i%2 == 0 and j %2 == 0):
                mazeRow.append(10)
            else:
                mazeRow.append(rand.random()*10% difficulty)
            j = j + 1
        maze.append(mazeRow)
        i = i + 1
        
    for row in maze:
        s= "|"
        for cell in row:
            if int(round(cell)) < difficulty / 2:
                s = s + " "
            if int(round(cell)) >= difficulty / 2:
                s = s + "#"

        s = s + "|" 
        print(s)
        
mazeGen(10,10,3)
