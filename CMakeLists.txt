project(dtrace)

add_compile_options(
	-nostdinc
	-Wno-shift-op-parentheses
	-Wno-error=int-conversion
)

include_directories(BEFORE
	${CMAKE_CURRENT_SOURCE_DIR}
	${CMAKE_CURRENT_SOURCE_DIR}/compat/opensolaris
	${CMAKE_CURRENT_SOURCE_DIR}/compat/opensolaris/sys
	${CMAKE_CURRENT_SOURCE_DIR}/gen/libdtrace
	${CMAKE_CURRENT_SOURCE_DIR}/lib/libctf/common
	${CMAKE_CURRENT_SOURCE_DIR}/lib/libelf
	${CMAKE_CURRENT_SOURCE_DIR}/lib/libdtrace/i386
	${CMAKE_CURRENT_SOURCE_DIR}/lib/libdwarf
	${CMAKE_CURRENT_SOURCE_DIR}/lib/libdwarf/cmplrs
	${CMAKE_CURRENT_SOURCE_DIR}/lib/libdtrace/common
	${CMAKE_CURRENT_SOURCE_DIR}/sys
	${CMAKE_CURRENT_SOURCE_DIR}/lib/libproc
	${CMAKE_CURRENT_SOURCE_DIR}/head
	${CMAKE_CURRENT_SOURCE_DIR}/scripts
)

add_definitions(
	-Dyydebug=
	-DPRIVATE
)

add_darling_static_library(ctf FAT
	SOURCES
		lib/libctf/common/ctf_create.c
		lib/libctf/common/ctf_decl.c
		lib/libctf/common/ctf_error.c
		lib/libctf/common/ctf_hash.c
		lib/libctf/common/ctf_labels.c
		lib/libctf/common/ctf_lib.c
		lib/libctf/common/ctf_lookup.c
		lib/libctf/common/ctf_open.c
		lib/libctf/common/ctf_subr.c
		lib/libctf/common/ctf_types.c
		lib/libctf/common/ctf_util.c
)
set_property(TARGET ctf APPEND_STRING PROPERTY COMPILE_DEFINITIONS
	"_INT64_TYPE -D_LONGLONG_TYPE -D_ILP32 -DCTF_OLD_VERSIONS"
)

add_darling_static_library(elf FAT
	SOURCES
		lib/libelf/clscook_ELF64.c
		lib/libelf/clscook.c
		lib/libelf/cntl.c
		lib/libelf/cook.c
		lib/libelf/data.c
		lib/libelf/gelf.c
		lib/libelf/getehdr.c
		lib/libelf/getident.c
		lib/libelf/getscn.c
		lib/libelf/getshdr.c
		lib/libelf/input.c
		lib/libelf/kind.c
		lib/libelf/ndxscn.c
		lib/libelf/nextscn.c
		lib/libelf/strptr.c
		lib/libelf/xlate.c
		lib/libelf/begin.c
		lib/libelf/end.c
		lib/libelf/error.c
		lib/libelf/getdata.c
		lib/libelf/getshstrndx.c
		lib/libelf/xlate64.c
)
set_property(TARGET elf APPEND_STRING PROPERTY COMPILE_DEFINITIONS
	"_INT64_TYPE -D_LONGLONG_TYPE -D_ILP32"
)

add_darling_static_library(dwarf FAT
	SOURCES
		lib/libdwarf/dwarf_abbrev.c
		lib/libdwarf/dwarf_addr_finder.c
		lib/libdwarf/dwarf_alloc.c
		lib/libdwarf/dwarf_arange.c
		lib/libdwarf/dwarf_die_deliv.c
		lib/libdwarf/dwarf_error.c
		lib/libdwarf/dwarf_form.c
		lib/libdwarf/dwarf_frame.c
		lib/libdwarf/dwarf_frame2.c
		lib/libdwarf/dwarf_frame3.c
		lib/libdwarf/dwarf_funcs.c
		lib/libdwarf/dwarf_global.c
		lib/libdwarf/dwarf_init_finish.c
		lib/libdwarf/dwarf_leb.c
		lib/libdwarf/dwarf_line.c
		lib/libdwarf/dwarf_line2.c
		lib/libdwarf/dwarf_loc.c
		lib/libdwarf/dwarf_macro.c
		lib/libdwarf/dwarf_print_lines.c
		lib/libdwarf/dwarf_pubtypes.c
		lib/libdwarf/dwarf_query.c
		lib/libdwarf/dwarf_sort_line.c
		lib/libdwarf/dwarf_string.c
		lib/libdwarf/dwarf_types.c
		lib/libdwarf/dwarf_util.c
		lib/libdwarf/dwarf_vars.c
		lib/libdwarf/dwarf_weaks.c
)
set_property(TARGET dwarf APPEND_STRING PROPERTY COMPILE_DEFINITIONS
	"NDEBUG -DNS_BLOCK_ASSERTIONS"
)

set(DYLIB_INSTALL_NAME "/usr/lib/libdtrace.dylib")
set(DYLIB_COMPAT_VERSION "1.0.0")
set(DYLIB_CURRENT_VERSION "130.0.0")

add_darling_library(libdtrace
	lib/libdtrace/common/dt_aggregate.c
	lib/libdtrace/common/dt_as.c
	lib/libdtrace/common/dt_buf.c
	lib/libdtrace/common/dt_cc.c
	lib/libdtrace/common/dt_cg.c
	lib/libdtrace/common/dt_consume.c
	lib/libdtrace/common/dt_decl.c
	lib/libdtrace/common/dt_dis.c
	lib/libdtrace/common/dt_dof.c
	lib/libdtrace/common/dt_error.c
	lib/libdtrace/common/dt_errtags.c
	# lib/libdtrace/common/dt_grammar.y
	lib/libdtrace/common/dt_handle.c
	lib/libdtrace/common/dt_ident.c
	lib/libdtrace/common/dt_inttab.c
	# lib/libdtrace/common/dt_lex.l
	lib/libdtrace/common/dt_list.c
	lib/libdtrace/common/dt_map.c
	lib/libdtrace/common/dt_module.c
	lib/libdtrace/common/dt_names.c
	lib/libdtrace/common/dt_open.c
	lib/libdtrace/common/dt_options.c
	lib/libdtrace/common/dt_parser.c
	lib/libdtrace/common/dt_pcb.c
	lib/libdtrace/common/dt_pid.c
	lib/libdtrace/common/dt_pq.c
	lib/libdtrace/common/dt_pragma.c
	lib/libdtrace/common/dt_print.c
	lib/libdtrace/common/dt_printf.c
	lib/libdtrace/common/dt_proc.c
	lib/libdtrace/common/dt_program.c
	lib/libdtrace/common/dt_provider.c
	lib/libdtrace/common/dt_regset.c
	lib/libdtrace/common/dt_string.c
	lib/libdtrace/common/dt_strtab.c
	lib/libdtrace/common/dt_subr.c
	lib/libdtrace/common/dt_sugar.c
	lib/libdtrace/common/dt_work.c
	lib/libdtrace/common/dt_xlator.c
	lib/libdtrace/apple/dt_ld.cpp
	lib/libdtrace/apple/dt_module_apple.c
	lib/libdtrace/apple/dt_pid_apple.c
	lib/libdtrace/apple/dt_proc_apple.c
	lib/libdtrace/apple/dt_provider_apple.c
	lib/libdtrace/apple/dt_subr_apple.c
	lib/libproc/libproc.c
	lib/libdtrace/arm/dt_isadep.c
	lib/libdtrace/i386/dt_isadep.c
	lib/libdtrace/i386/dis_tables.c
	compat/opensolaris/darwin_shim.c

	# Generated dt_lex.l and dt_grammar.y
	gen/libdtrace/lex.yy.c
	gen/libdtrace/y.tab.c
)
make_fat(libdtrace)
target_link_libraries(libdtrace system cxx CoreFoundation CoreSymbolication)

set_property(TARGET libdtrace APPEND_STRING PROPERTY COMPILE_DEFINITIONS
	"_INT64_TYPE -D_LONGLONG_TYPE -D_ILP32 -DNS_BLOCK_ASSERTIONS -DNDEBUG"
)
set_target_properties(libdtrace PROPERTIES PREFIX "")
target_link_libraries(libdtrace dwarf elf ctf CoreFoundation CoreSymbolication)
install(TARGETS libdtrace DESTINATION libexec/darling/usr/lib)


add_darling_executable(dtrace cmd/dtrace/dtrace.c)
target_link_libraries(dtrace libdtrace IOKit)
install(TARGETS dtrace DESTINATION libexec/darling/usr/bin)

add_darling_executable(lockstat cmd/lockstat/lockstat.c cmd/lockstat/sym.c)
target_link_libraries(lockstat libdtrace)
install(TARGETS lockstat DESTINATION libexec/darling/usr/bin)

add_darling_executable(plockstat cmd/plockstat/plockstat.c)
target_link_libraries(plockstat libdtrace)
install(TARGETS plockstat DESTINATION libexec/darling/usr/bin)

# Going off of the Security XCode project, `usdtheadergen` seems to
# live in the SDK instead.
add_darling_executable(usdtheadergen cmd/usdtheadergen/usdtheadergen.c)
target_link_libraries(usdtheadergen libdtrace)
install(TARGETS usdtheadergen DESTINATION libexec/darling/Library/Developer/DarlingCLT/usr/bin)