CC = gcc
BINPATH = ../bin

debug:
	$(CC) main.c -g3 -o $(BINPATH)/main_dbg
runtests:
	$(CC) tests.c -g0 -o $(BINPATH)/tests
	chmod +x $(BINPATH)/tests
	$(BINPATH)/tests
prod:
	$(CC) $(CCFLAGS) main.c -O2 -o $(BINPATH)/main
clean:
	rm -rf $(BINPATH)/*
