#include "common.h"

extern "C" {

void FUN_001585e4(void);
void asdOperatorDelete(void);

/* Calls FUN_001585e4, then asdOperatorDelete. */
void FUN_00103744(void)
{
    FUN_001585e4();
    asdOperatorDelete();
}

} /* extern "C" */
