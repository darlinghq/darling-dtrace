project(dtrace)

add_compile_options(
	-nostdinc
	-Wno-shift-op-parentheses
)

include_directories(BEFORE
	${CMAKE_CURRENT_SOURCE_DIR}
	${CMAKE_CURRENT_SOURCE_DIR}/libctf
	${CMAKE_CURRENT_SOURCE_DIR}/libelf
	${CMAKE_CURRENT_SOURCE_DIR}/libdwarf
	${CMAKE_CURRENT_SOURCE_DIR}/libdwarf/cmplrs
	${CMAKE_CURRENT_SOURCE_DIR}/sys
)

add_darling_static_library(ctf FAT
	SOURCES
		libctf/ctf_create.c
		libctf/ctf_decl.c
		libctf/ctf_error.c
		libctf/ctf_hash.c
		libctf/ctf_labels.c
		libctf/ctf_lib.c
		libctf/ctf_lookup.c
		libctf/ctf_open.c
		libctf/ctf_subr.c
		libctf/ctf_types.c
		libctf/ctf_util.c
)
set_property(TARGET ctf APPEND_STRING PROPERTY COMPILE_DEFINITIONS
	"_INT64_TYPE -D_LONGLONG_TYPE -D_ILP32 -DCTF_OLD_VERSIONS"
)

add_darling_static_library(elf FAT
	SOURCES
		libelf/ar.c
		libelf/begin.c
		libelf/checksum.c
		libelf/clscook.c
		libelf/clscook_ELF64.c
		libelf/cntl.c
		libelf/cook.c
		libelf/data.c
		libelf/end.c
		libelf/error.c
		libelf/fill.c
		libelf/flag.c
		libelf/gelf.c
		libelf/getarhdr.c
		libelf/getarsym.c
		libelf/getbase.c
		libelf/getdata.c
		libelf/getehdr.c
		libelf/getident.c
		libelf/getphdr.c
		libelf/getscn.c
		libelf/getshdr.c
		libelf/getshnum.c
		libelf/getshstrndx.c
		libelf/hash.c
		libelf/input.c
		libelf/kind.c
		libelf/ndxscn.c
		libelf/newdata.c
		libelf/newehdr.c
		libelf/newehdr_ELF64.c
		libelf/newphdr.c
		libelf/newphdr_ELF64.c
		libelf/newscn.c
		libelf/next.c
		libelf/nextscn.c
		libelf/output.c
		libelf/rand.c
		libelf/rawdata.c
		libelf/rawfile.c
		libelf/rawput.c
		libelf/strptr.c
		libelf/update.c
		libelf/update_ELF64.c
		libelf/xlate.c
		libelf/xlate64.c
		libelf/getphnum.c
)
set_property(TARGET elf APPEND_STRING PROPERTY COMPILE_DEFINITIONS
	"_INT64_TYPE -D_LONGLONG_TYPE -D_ILP32"
)

add_darling_static_library(dwarf FAT
	SOURCES
		libdwarf/dwarf_abbrev.c
		libdwarf/dwarf_addr_finder.c
		libdwarf/dwarf_alloc.c
		libdwarf/dwarf_arange.c
		libdwarf/dwarf_die_deliv.c
		libdwarf/dwarf_error.c
		libdwarf/dwarf_form.c
		libdwarf/dwarf_frame.c
		libdwarf/dwarf_frame2.c
		libdwarf/dwarf_frame3.c
		libdwarf/dwarf_funcs.c
		libdwarf/dwarf_global.c
		libdwarf/dwarf_init_finish.c
		libdwarf/dwarf_leb.c
		libdwarf/dwarf_line.c
		libdwarf/dwarf_line2.c
		libdwarf/dwarf_loc.c
		libdwarf/dwarf_macro.c
		libdwarf/dwarf_print_lines.c
		libdwarf/dwarf_pubtypes.c
		libdwarf/dwarf_query.c
		libdwarf/dwarf_sort_line.c
		libdwarf/dwarf_string.c
		libdwarf/dwarf_stubs.c
		libdwarf/dwarf_types.c
		libdwarf/dwarf_util.c
		libdwarf/dwarf_vars.c
		libdwarf/dwarf_weaks.c
		libdwarf/pro_alloc.c
		libdwarf/pro_arange.c
		libdwarf/pro_die.c
		libdwarf/pro_encode_nm.c
		libdwarf/pro_error.c
		libdwarf/pro_expr.c
		libdwarf/pro_finish.c
		libdwarf/pro_forms.c
		libdwarf/pro_frame.c
		libdwarf/pro_funcs.c
		libdwarf/pro_init.c
		libdwarf/pro_line.c
		libdwarf/pro_macinfo.c
		libdwarf/pro_pubnames.c
		libdwarf/pro_reloc.c
		libdwarf/pro_reloc_stream.c
		libdwarf/pro_reloc_symbolic.c
		libdwarf/pro_section.c
		libdwarf/pro_types.c
		libdwarf/pro_vars.c
		libdwarf/pro_weaks.c
)
set_property(TARGET dwarf APPEND_STRING PROPERTY COMPILE_DEFINITIONS
	"NDEBUG -DNS_BLOCK_ASSERTIONS"
)
