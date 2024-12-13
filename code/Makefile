INCLUDE = -/opt/homebrew/share/zsh/site-functions
CXX     := g++
CXXFLAG := -std=c++11 -ggdb
INC     := $(shell pkg-config --cflags opencv4)
INCFLAG := $(shell pkg-config --libs opencv4)
LIB     := -lpthread

all: cv-exmp-1.out cv-exmp-2.out pthread-exmp1.out pthread-exmp2.out imageproc.out imageproc_2.out

imageproc_.out: imageproc_.cpp
	$(CXX) $(CXXFLAG) $< -o $@ $(INC) $(INCFLAG)

imageproc_2.out: imageproc_2.cpp
	$(CXX) $(CXXFLAG) $< -o $@ $(INC) $(INCFLAG)

cv-exmp-1.out: cv-exmp-1.cpp
	$(CXX) $(CXXFLAG) $< -o $@ $(INC) $(INCFLAG)

cv-exmp-2.out: cv-exmp-2.cpp
	$(CXX) $(CXXFLAG) $< -o $@ $(INC) $(INCFLAG)

pthread-exmp1.out: pthread-exmp1.cpp
	$(CXX) $(CXXFLAG) $< -o $@ $(LIB)

pthread-exmp2.out: pthread-exmp2.cpp
	$(CXX) $(CXXFLAG) $< -o $@ $(LIB)

clean:
	rm *.out