#include "shard/Shard0039.h"

extern "C" {

extern s32 eventTexHandlesReady(void);
extern void scrSetResult(s32 value);

/* Script command: result (and wait flag) from whether the event texture handles are ready. */
u32 scrCommWaitEventTexHandles(void)
{
    if (eventTexHandlesReady() != 0) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 0;
}

} /* extern "C" */
