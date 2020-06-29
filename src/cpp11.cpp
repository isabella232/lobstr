// Generated by cpp11: do not edit by hand

#include <cpp11/R.hpp>
#include <Rcpp.h>
using namespace Rcpp;
#include "cpp11/declarations.hpp"

// address.cpp
std::string obj_addr_(SEXP name, Rcpp::Environment env);
extern "C" SEXP _lobstr_obj_addr_(SEXP name, SEXP env) {
  BEGIN_CPP11
    return cpp11::as_sexp(obj_addr_(cpp11::unmove(cpp11::as_cpp<SEXP>(name)), cpp11::unmove(cpp11::as_cpp<Rcpp::Environment>(env))));
  END_CPP11
}
// address.cpp
std::vector<std::string> obj_addrs_(SEXP x);
extern "C" SEXP _lobstr_obj_addrs_(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(obj_addrs_(cpp11::unmove(cpp11::as_cpp<SEXP>(x))));
  END_CPP11
}
// inspect.cpp
cpp11::list obj_inspect_(SEXP x, double max_depth, bool expand_char, bool expand_altrep, bool expand_env, bool expand_call, bool expand_bytecode);
extern "C" SEXP _lobstr_obj_inspect_(SEXP x, SEXP max_depth, SEXP expand_char, SEXP expand_altrep, SEXP expand_env, SEXP expand_call, SEXP expand_bytecode) {
  BEGIN_CPP11
    return cpp11::as_sexp(obj_inspect_(cpp11::unmove(cpp11::as_cpp<SEXP>(x)), cpp11::unmove(cpp11::as_cpp<double>(max_depth)), cpp11::unmove(cpp11::as_cpp<bool>(expand_char)), cpp11::unmove(cpp11::as_cpp<bool>(expand_altrep)), cpp11::unmove(cpp11::as_cpp<bool>(expand_env)), cpp11::unmove(cpp11::as_cpp<bool>(expand_call)), cpp11::unmove(cpp11::as_cpp<bool>(expand_bytecode))));
  END_CPP11
}
// size.cpp
double v_size(double n, int element_size);
extern "C" SEXP _lobstr_v_size(SEXP n, SEXP element_size) {
  BEGIN_CPP11
    return cpp11::as_sexp(v_size(cpp11::unmove(cpp11::as_cpp<double>(n)), cpp11::unmove(cpp11::as_cpp<int>(element_size))));
  END_CPP11
}
// size.cpp
double obj_size_(cpp11::list objects, cpp11::environment base_env, int sizeof_node, int sizeof_vector);
extern "C" SEXP _lobstr_obj_size_(SEXP objects, SEXP base_env, SEXP sizeof_node, SEXP sizeof_vector) {
  BEGIN_CPP11
    return cpp11::as_sexp(obj_size_(cpp11::unmove(cpp11::as_cpp<cpp11::list>(objects)), cpp11::unmove(cpp11::as_cpp<cpp11::environment>(base_env)), cpp11::unmove(cpp11::as_cpp<int>(sizeof_node)), cpp11::unmove(cpp11::as_cpp<int>(sizeof_vector))));
  END_CPP11
}
// size.cpp
cpp11::integers obj_csize_(cpp11::list objects, cpp11::environment base_env, int sizeof_node, int sizeof_vector);
extern "C" SEXP _lobstr_obj_csize_(SEXP objects, SEXP base_env, SEXP sizeof_node, SEXP sizeof_vector) {
  BEGIN_CPP11
    return cpp11::as_sexp(obj_csize_(cpp11::unmove(cpp11::as_cpp<cpp11::list>(objects)), cpp11::unmove(cpp11::as_cpp<cpp11::environment>(base_env)), cpp11::unmove(cpp11::as_cpp<int>(sizeof_node)), cpp11::unmove(cpp11::as_cpp<int>(sizeof_vector))));
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _lobstr_obj_addr_(SEXP, SEXP);
extern SEXP _lobstr_obj_addrs_(SEXP);
extern SEXP _lobstr_obj_csize_(SEXP, SEXP, SEXP, SEXP);
extern SEXP _lobstr_obj_inspect_(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _lobstr_obj_size_(SEXP, SEXP, SEXP, SEXP);
extern SEXP _lobstr_v_size(SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_lobstr_obj_addr_",    (DL_FUNC) &_lobstr_obj_addr_,    2},
    {"_lobstr_obj_addrs_",   (DL_FUNC) &_lobstr_obj_addrs_,   1},
    {"_lobstr_obj_csize_",   (DL_FUNC) &_lobstr_obj_csize_,   4},
    {"_lobstr_obj_inspect_", (DL_FUNC) &_lobstr_obj_inspect_, 7},
    {"_lobstr_obj_size_",    (DL_FUNC) &_lobstr_obj_size_,    4},
    {"_lobstr_v_size",       (DL_FUNC) &_lobstr_v_size,       2},
    {NULL, NULL, 0}
};
}

extern "C" void R_init_lobstr(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}

