# the corresponding makefile for a windows build is commented out
# makefile for building opengl/glut programs in c++ on windows 
# with MinGW

# http://www.transmissionzero.co.uk/computing/using-glut-with-mingw/

# you need to download the glut libraries and put them in separate lib and
# include libraries.


# this is the directory that contains glut.h
# we will not use this with the linux build
GLUTINC = "C:\MinGW\GLUT\include"


# this contains the .lib (and .dll files)
# the tutorial says to include the .dll in the system path, C:\System32
# we will not use this with the linux build
GLUTLIB = "C:\MinGW\GLUT\lib"


# The path to the MinGW compiler. You may need this if you 
# are using g++ by default
# GPP = C:\MinGW\bin\g++.exe
GPP = g++

# this tells the compiler to use windows built in opengl libraries.
# FLAGS =  -lglut32 -lopengl32 -Wl
FLAGS =  -lglut

#  link agains the libs and the windows build in toolkit.
all: main.o
	$(GPP) main.o $(FLAGS) 

# to compile, include the headers
main.o: main.cpp
	$(GPP) -c main.cpp $(FLAGS)


clean:
	DEL *.o
	
