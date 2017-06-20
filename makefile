CC=g++
CFLAGS= -Wall -g -I.
DEPS= generalParameters.hpp generalFunctions.hpp Affine.hpp CEDA.hpp
OBJ= generalFunctions.o Affine.o main.o

%.o: %.cpp $(DEPS)
	$(CC) -c $< $(CFLAGS)

run: $(OBJ) $(DEPS)
	$(CC) -o $@ $^ $(CFLAGS)
