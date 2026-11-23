#include "shard/W6_W6Match8_AocPoll.h"

extern "C" {

extern void asdGxWaitForPreviousFrame(void);
extern void appletShowOperationMessage(u32 detail);

void FUN_001764dc(AocMain *, u32 detail)
{
    asdGxWaitForPreviousFrame();
    appletShowOperationMessage(detail);
}

} /* extern "C" */
