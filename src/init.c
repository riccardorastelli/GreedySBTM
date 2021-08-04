#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
 Check these declarations against the C/Fortran source code.
 */

/* .Call calls */
extern SEXP _GreedySBTM_cpp_CollapseLabels(SEXP);
extern SEXP _GreedySBTM_cpp_GreedyICL(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _GreedySBTM_cpp_GreedyMerge(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _GreedySBTM_cpp_ICLExact(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_GreedySBTM_cpp_CollapseLabels", (DL_FUNC) &_GreedySBTM_cpp_CollapseLabels,  1},
    {"_GreedySBTM_cpp_GreedyICL",      (DL_FUNC) &_GreedySBTM_cpp_GreedyICL,      11},
    {"_GreedySBTM_cpp_GreedyMerge",    (DL_FUNC) &_GreedySBTM_cpp_GreedyMerge,    10},
    {"_GreedySBTM_cpp_ICLExact",       (DL_FUNC) &_GreedySBTM_cpp_ICLExact,       10},
    {NULL, NULL, 0}
};

void R_init_GreedySBTM(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}



/* TO GENERATE THIS FILE I HAVE USED:
   tools::package_native_routine_registration_skeleton(".")

   OR
   tools::package_native_routine_registration_skeleton(".", character_only = FALSE)
*/


