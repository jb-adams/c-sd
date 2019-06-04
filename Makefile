CC = gcc -o
MKDIR_P = mkdir -p

SRC = Sources
OUT = Output
LECT = Lectures
ASSN = Assignments
APPS = Apps
SRC_LECT = ${SRC}/${LECT}
SRC_ASSN = ${SRC}/${ASSN}
SRC_APPS = ${SRC}/${APPS}
OUT_LECT = ${OUT}/${LECT}
OUT_ASSN = ${OUT}/${ASSN}
OUT_APPS = ${OUT}/${APPS}

make_all:
	${MKDIR_P} ${OUT_LECT}
	${MKDIR_P} ${OUT_ASSN}
	${MKDIR_P} ${OUT_APPS}
	
	${CC} ${OUT_LECT}/helloworld ${SRC_LECT}/3_10_hello_world.c
	${CC} ${OUT_LECT}/readinput ${SRC_LECT}/4_19_read_input.c
	${CC} ${OUT_LECT}/datatypeoverview ${SRC_LECT}/5_20_datatype_overview.c

	${CC} ${OUT_ASSN}/firstname ${SRC_ASSN}/a1_first_name.c