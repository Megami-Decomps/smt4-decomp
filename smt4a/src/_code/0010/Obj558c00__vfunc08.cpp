/* NON_MATCHING: this and range are held in r4/r5 instead of r5/r4 (otherwise identical) */
#include "classes/Obj558c00.h"

extern "C" void FUN_002ec8a8(Obj558c00Range *range);

/* Prepares the range, then passes it to the first data hook; always returns 0. */
s32 Obj558c00::vfunc08(s32 unused, Obj558c00Range *range)
{
    FUN_002ec8a8(range);
    vfunc0c(range);
    return 0;
}
