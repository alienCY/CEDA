#start other makefiles
include makefile.variables

All:
	$(MAKE) -C general
	$(MAKE) -C ceda_lib
	$(MAKE) -C CLI

OBJ = $(wildcard objects/*.o)

run: $(OBJ) $(DEPS)
	$(CC) -o $@ $^
