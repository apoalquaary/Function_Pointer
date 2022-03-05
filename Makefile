
IDIR = include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR = obj
LDIR = lib
SDIR = src

LIBS=-lm

_DEPS = funP.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o funP.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
