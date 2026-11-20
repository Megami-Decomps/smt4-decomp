#include "shard/W6_W6Match8_AocPoll.h"

extern "C" {

extern void asdGxWaitForPreviousFrame(void);
extern void FUN_001764f4(u32 detail);

void FUN_001764dc(AocMain *, u32 detail)
{
    asdGxWaitForPreviousFrame();
    FUN_001764f4(detail);
}

} /* extern "C" */
