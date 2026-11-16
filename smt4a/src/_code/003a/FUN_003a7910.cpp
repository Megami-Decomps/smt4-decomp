#include "shard/Shard003A.h"

extern "C" {

extern s32 rosterGetLeaderId(void);
extern void scrSetResult(s32 value);

/* Script command: result is rosterGetLeaderId(). */
u32 FUN_003a7910(void)
{
    scrSetResult(rosterGetLeaderId());
    return 1;
}

} /* extern "C" */
