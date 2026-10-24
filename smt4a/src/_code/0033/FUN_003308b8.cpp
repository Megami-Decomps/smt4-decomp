#include "common.h"

extern "C" {

s32 scrGetArg(s32 index);
void sequenceRequestDefer(s32 first, s32 second);

/* Script command: defers a sequence request with the two arguments. */
u32 FUN_003308b8(void)
{
    sequenceRequestDefer(scrGetArg(0), scrGetArg(1));
    return 1;
}

} /* extern "C" */
