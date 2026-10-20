#include "shard/Shard0039.h"

extern "C" {

extern s32 eventTexSlotsReady(void);
extern void scrSetResult(s32 value);

/* Script command: result (and wait flag) from whether the event textures are ready. */
u32 scrCommWaitEventTexSlots(void)
{
    if (eventTexSlotsReady() != 0) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 0;
}

} /* extern "C" */
