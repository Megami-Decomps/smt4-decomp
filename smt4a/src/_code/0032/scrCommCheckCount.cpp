#include "shard/Shard0032.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern s32 scrGetCommandFrame(void);
extern s32 inputFastForwardActive(void);

/* Script command: 1 (done) unless argument 0 lies beyond the current count and inputFastForwardActive reports not ready. */
u32 scrCommCheckCount(void)
{
    s32 count = scrGetArg(0);

    if (0 < count) {
        s32 current = scrGetCommandFrame();
        s32 limit = scrGetArg(0);

        if (current < limit && inputFastForwardActive() == 0) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
