/* NON_MATCHING: register allocation only: retail keeps the 999 default in r2 and the first value in r1; built uses r1 for the constant and r2 for the first value. */
#include "common.h"

extern "C" {

u16 *FUN_0039b984(u32 id);

/* Compares two ids by their entries' value (999 when missing), higher first. */
s32 FUN_00404f00(u16 *a, u16 *b)
{
    u16 *entryA = FUN_0039b984(*a);
    u16 *entryB = FUN_0039b984(*b);
    s32 valueA = entryA != NULL ? *entryA : 999;
    s32 valueB = entryB != NULL ? *entryB : 999;

    return valueB - valueA;
}

} /* extern "C" */
