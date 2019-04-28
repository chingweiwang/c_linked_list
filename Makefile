CC=gcc
CFLAGS=-DDEBUG
OBJS=main.o freeData.o insertData.o invertData.o printData.o removeData.o

linked_list: ${OBJS}
	${CC} ${OBJS} ${CFLAGS} -o $@

.PHONY: clean
clean:
	@rm -rf $@ *.o
