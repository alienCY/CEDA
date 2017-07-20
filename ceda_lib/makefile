include ../makefile.variables

OBJ = Affine.o
all: $(OBJ)

$(OBJ): %.o: %.cpp $(DEPS)
	$(CC) -o ../objects/$@ -c $< $(CFLAGS)
