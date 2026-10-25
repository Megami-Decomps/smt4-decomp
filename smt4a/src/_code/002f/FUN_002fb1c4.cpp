#include "common.h"

extern "C" {

void asdOperatorDeleteArray(void *memory);
void _ZN9Obj2fd02aD1Ev(void);

/* Runs _ZN9Obj2fd02aD1Ev, then frees `memory`. */
void FUN_002fb1c4(void *memory)
{
    _ZN9Obj2fd02aD1Ev();
    asdOperatorDeleteArray(memory);
}

} /* extern "C" */
