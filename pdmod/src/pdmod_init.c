#include <stdlib.h> 
#include <R_ext/Rdynload.h>

void R_init_pdmod(DllInfo *dll)
{
	R_registerRoutines(dll, NULL, NULL, NULL, NULL);
	R_useDynamicSymbols(dll, TRUE);
}