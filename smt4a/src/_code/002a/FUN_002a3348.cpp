/* NON_MATCHING: the 11 jump-table words differ in fdiff (retail: absolute addresses, build: __switch$$-relative relocs to the same labels), and retail keeps the argument copy in r0 for the compares (build compares r4 and moves it just before the call). */
#include "common.h"

extern "C" {

s32 scrGetArg(...);  /* index in r0; the first argument is read without one */
void FUN_00282a08(s32 type, s32 kind);
void FUN_002a33f0(void);

/* Script command: accepts only argument 1 == 13 and one of a fixed set of argument 0 values; any
 * other call goes to FUN_00282a08, the rest to FUN_002a33f0 (the function that follows). */
void FUN_002a3348(void)
{
    s32 type = scrGetArg();
    s32 kind = scrGetArg(1);

    if (kind != 13) {
        FUN_00282a08(type, kind);
        return;
    }
    switch (type) {
    case 1:
    case 2:
    case 3:
    case 6:
    case 7:
    case 8:
    case 10:
    case 11:
    case 15:
    case 18:
    case 25:
    case 40:
    case 42:
    case 71:
    case 73:
        break;
    default:
        FUN_00282a08(type, kind);
        return;
    }
    FUN_002a33f0();
}

} /* extern "C" */
