CC=g++
LIB= -lpthread
CC_FLAG=-Wall -w
objects := $(patsubst %.cpp,%.o,$(wildcard *.cpp))

lockTest : $(objects)
	$(CC) $(CC_FLAG) $(LIB) -o $@ $(objects)
%.o:%.cpp
	$(CXX) -c $< -o $@ $(CFLAGS) $(INCLUDE)
clean:
	-rm ./*.o lockTest
