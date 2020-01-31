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
	${CC} ${OUT_LECT}/basicdatatype ${SRC_LECT}/5_21_basic_datatype.c
	${CC} ${OUT_LECT}/enumschars ${SRC_LECT}/5_22_enums_chars.c
	${CC} ${OUT_LECT}/formatspecifiers ${SRC_LECT}/5_23_format_specifiers.c
	${CC} ${OUT_LECT}/cliargs ${SRC_LECT}/5_24_commandline_args.c
	${CC} ${OUT_LECT}/operatorsoverview ${SRC_LECT}/6_29_operators_overview.c
	${CC} ${OUT_LECT}/basicoperators ${SRC_LECT}/6_30_basic_operators.c
	${CC} ${OUT_LECT}/bitwiseoperators ${SRC_LECT}/6_31_bitwise_operators.c
	${CC} ${OUT_LECT}/castsizeof ${SRC_LECT}/6_32_cast_sizeof.c
	${CC} ${OUT_LECT}/arrays ${SRC_LECT}/8_57_arrays.c
	${CC} ${OUT_LECT}/array_initialization ${SRC_LECT}/8_58_array_initialization.c
	${CC} ${OUT_LECT}/string_functions ${SRC_LECT}/10_77_string_functions.c
	${CC} ${OUT_LECT}/string_functions_cont ${SRC_LECT}/10_78_string_functions_cont.c
	${CC} ${OUT_LECT}/converting_strings ${SRC_LECT}/10_79_converting_strings.c
	${CC} ${OUT_LECT}/pointers_define ${SRC_LECT}/12_90_defining_pointers.c
	${CC} ${OUT_LECT}/pointers_access ${SRC_LECT}/12_91_accessing_pointers.c
	${CC} ${OUT_LECT}/pointers_using ${SRC_LECT}/12_94_using_pointers.c
	${CC} ${OUT_LECT}/pointers_void ${SRC_LECT}/12_96_void_pointers.c

	${CC} ${OUT_ASSN}/firstname ${SRC_ASSN}/a00_first_name.c
	${CC} ${OUT_ASSN}/rectangle ${SRC_ASSN}/a01_area_perimeter.c
	${CC} ${OUT_ASSN}/company ${SRC_ASSN}/a02_enums.c
	${CC} ${OUT_ASSN}/timeconverter ${SRC_ASSN}/a03_convert.c
	${CC} ${OUT_ASSN}/sizeof ${SRC_ASSN}/a04_sizeof.c
	${CC} ${OUT_ASSN}/weeklypay ${SRC_ASSN}/a05_weekly_pay.c
	${CC} ${OUT_ASSN}/numbergame ${SRC_ASSN}/a06_guess_number.c
	${CC} ${OUT_ASSN}/primes ${SRC_ASSN}/a07_primes.c
	${CC} ${OUT_ASSN}/weather ${SRC_ASSN}/a08_weather.c
	${CC} ${OUT_ASSN}/functions ${SRC_ASSN}/a09_functions.c
	${CC} ${OUT_ASSN}/tictactoe ${SRC_ASSN}/a10_tictactoe.c
	${CC} ${OUT_ASSN}/chararrays ${SRC_ASSN}/a11_chararrays.c
	${CC} ${OUT_ASSN}/reversestring ${SRC_ASSN}/a12.1_reverse_string.c
	${CC} ${OUT_ASSN}/sortstrings ${SRC_ASSN}/a12.2_sort_strings.c
	${CC} ${OUT_ASSN}/pointers ${SRC_ASSN}/a13_pointers.c