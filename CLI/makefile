include ../makefile.variables

OBJ = main.o
all: $(OBJ)

$(OBJ): %.o: %.cpp $(DEPS)
	$(CC) -o ../objects/$@ -c $< $(CFLAGS)
