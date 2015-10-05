
IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR) -Wstrict-prototypes -pedantic

ODIR=obj
LDIR =../lib

_OBJ = main.o sort_algorithms.o search_algorithms.o helpers.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))



$(ODIR)/%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	gcc -o $(ODIR)/$@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~