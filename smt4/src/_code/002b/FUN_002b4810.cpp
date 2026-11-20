#include "shard/W6_W6Match8_AocPoll.h"

extern "C" {

extern void asdGxWaitForPreviousFrame(void);
extern void FUN_002b4828(u32 detail);

void FUN_002b4810(AocMain *, u32 detail)
{
    asdGxWaitForPreviousFrame();
    FUN_002b4828(detail);
}

} /* extern "C" */
