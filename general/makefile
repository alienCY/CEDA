include ../makefile.variables

OBJ = generalFunctions.o
all: $(OBJ)

$(OBJ): %.o: %.cpp $(DEPS)
	$(CC) -o ../objects/$@ -c $< $(CFLAGS)
