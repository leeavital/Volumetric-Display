# makefile for building opengl/glut programs in c++ on windows 
# with MinGW

# http://www.transmissionzero.co.uk/computing/using-glut-with-mingw/

# you need to download the glut libraries and put them in separate lib and
# include libraries.


# this is the directory that contains glut.h
GLUTINC = "C:\MinGW\GLUT\include"


# this contains the .lib (and .dll files)
# the tutorial says to include the .dll in the system path, C:\System32
GLUTLIB = "C:\MinGW\GLUT\lib"


# The path to the MinGW compiler. You may need this if you 
# are using g++ by default
GPP = C:\MinGW\bin\g++.exe

# this tells the compiler to use windows built in opengl libraries.
FLAGS_WIN =  -lglut32 -lopengl32 -Wl


#  link agains the libs and the windows build in toolkit.
all: main.o
	$(GPP) main.o -L$(GLUTLIB) $(FLAGS_WIN)

# to compile, include the headers
main.o: main.cpp
	$(GPP) -c main.cpp -I$(GLUTINC)


clean:
	DEL *.o
	
