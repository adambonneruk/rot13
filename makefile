rot13: rot13.o
	gcc -o $@ $<
 
rot13.o: rot13.c
	gcc -c -o $@ $<
 
.PHONY: clean
 
clean:
	rm -f rot13 rot13.o
