#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void sequenceRequestDefer(s32 first, s32 second);

/* Script command: defers a sequence request with arguments zero and one. */
s32 scrCommDeferSequenceRequest(void)
{
    sequenceRequestDefer(scrGetArg(0), scrGetArg(1));
    return 1;
}

} /* extern "C" */
