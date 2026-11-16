/* NON_MATCHING: with the dispatch as an inline helper the argument copies and the compare tree match; only the jump-table index differs (retail `cmp r4, #11; ldrcc pc, [pc, r4, lsl #2]` on the saved type, build uses the r0 copy). */
#include "common.h"

extern "C" {

s32 scrGetArg(s32 index);
void FUN_00282a08(s32 type, s32 kind);
void FUN_002a33f0(void);

/* Runs FUN_002a33f0 for the accepted (type, 13) pairs and passes any other pair to FUN_00282a08. */
static __inline void dispatchCommand(s32 type, s32 kind)
{
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
        FUN_002a33f0();
        return;
    }
    FUN_00282a08(type, kind);
}

/* Script command: argument 1 must be 13 and argument 0 one of a fixed set for FUN_002a33f0 (the
 * function that follows); any other pair goes to FUN_00282a08. */
void FUN_002a3348(void)
{
    s32 type = scrGetArg(0);
    s32 kind = scrGetArg(1);

    dispatchCommand(type, kind);
}

} /* extern "C" */
