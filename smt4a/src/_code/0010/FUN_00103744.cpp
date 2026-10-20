#include "common.h"

extern "C" {

void FUN_001585e4(void);
void FUN_002e3328(void);

/* Calls FUN_001585e4, then FUN_002e3328. */
void FUN_00103744(void)
{
    FUN_001585e4();
    FUN_002e3328();
}

} /* extern "C" */
