include ../Make.defines

LIB_DIR = ./
LIB_SRCS = $(wildcard ${LIB_DIR}/*.c)
LIB_OBJS = $(patsubst %.c, %.o, $(notdir ${LIB_SRCS}))

all: ${LIB_OBJS}
	${AR} rv ${LIBUNP_NAME} $?
	${RANLIB} ${LIBUNP_NAME}

clean:
	rm -f *.o ${LIBUNP_NAME}
