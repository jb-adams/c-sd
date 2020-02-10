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
	${CC} ${OUT_LECT}/pointers_arrays ${SRC_LECT}/12_97_pointers_arrays.c
	${CC} ${OUT_LECT}/pointers_arithmetic ${SRC_LECT}/12_98_pointer_arithmetic.c
	${CC} ${OUT_LECT}/pointers_arrays_example ${SRC_LECT}/12_99_pointers_arrays_example.c
	${CC} ${OUT_LECT}/pointers_strings ${SRC_LECT}/12_100_pointers_strings.c
	${CC} ${OUT_LECT}/pass_by_reference ${SRC_LECT}/12_103_pass_by_reference.c
	${CC} ${OUT_LECT}/malloc_calloc_realloc ${SRC_LECT}/12_107_malloc_calloc_realloc.c
	${CC} ${OUT_LECT}/structures ${SRC_LECT}/13_110_structures.c
	${CC} ${OUT_LECT}/structs_arrays ${SRC_LECT}/13_111_structs_arrays.c
	${CC} ${OUT_LECT}/structs_nested ${SRC_LECT}/13_112_nested_structs.c
	${CC} ${OUT_LECT}/structs_pointers ${SRC_LECT}/13_113_structs_pointers.c
	${CC} ${OUT_LECT}/structs_functions ${SRC_LECT}/13_114_structs_functions.c
	${CC} ${OUT_LECT}/files_access ${SRC_LECT}/14_120_accessing_files.c
	${CC} ${OUT_LECT}/files_read ${SRC_LECT}/14_121_read_from_file.c
	${CC} ${OUT_LECT}/files_write ${SRC_LECT}/14_122_write_to_file.c
	${CC} ${OUT_LECT}/files_write ${SRC_LECT}/14_122_write_to_file.c
	${CC} ${OUT_LECT}/files_position ${SRC_LECT}/14_123_file_position.c

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
	${CC} ${OUT_ASSN}/pointerarithmetic ${SRC_ASSN}/a14_pointer_arithmetic.c
	${CC} ${OUT_ASSN}/pointerparameter ${SRC_ASSN}/a15_pointer_parameter.c
	${CC} ${OUT_ASSN}/dynamicmemory ${SRC_ASSN}/a16_dynamic_memory.c
	${CC} ${OUT_ASSN}/structs ${SRC_ASSN}/a17_structures.c
	${CC} ${OUT_ASSN}/structspointersfunctions ${SRC_ASSN}/a18_structs_pointers_functions.c
	${CC} ${OUT_ASSN}/files ${SRC_ASSN}/a19_files.c
	${CC} ${OUT_ASSN}/filewrite ${SRC_ASSN}/a20_filewrite.c
	${CC} ${OUT_ASSN}/fileseektell ${SRC_ASSN}/a21_file_seek_tell.c
