rot47: rot47.o
	gcc -o $@ $<
 
rot47.o: rot47.c
	gcc -c -o $@ $<
 
.PHONY: clean
 
clean:
	rm -f rot47 rot47.o
