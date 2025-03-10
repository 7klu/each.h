LIBNAME := each
SRC := each.h
IPATH := /usr/local/include

all:
	@echo "Installing library..."
	cp $(SRC) $(IPATH)/$(LIBNAME).h

clean:
	@echo "Header is installed."

.PHONY: all clean
