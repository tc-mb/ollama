// Build info implementation for the upstream API introduced after the
// llama.cpp upgrade to 2496f9c1 (the symbols moved from variables to
// function pointers). Use C++ linkage to match the upstream header.
int llama_build_number(void) { return 0; }
const char * llama_commit(void) { return "2496f9c14965c39589f53eea31bdb6d762b1d360"; }
const char * llama_compiler(void) { return ""; }
const char * llama_build_target(void) { return ""; }
const char * llama_build_info(void) { return "2496f9c14965c39589f53eea31bdb6d762b1d360"; }
void llama_print_build_info(void) {}
