/* NON_MATCHING: register allocation and how the 64-bit timeout is loaded (retail reads its halves with separate ldr, build with ldm). */
#include "common.h"
#include "shard/S3AsdGfxWait.h"

extern "C" {

s64 FUN_001623d0(void);
void FUN_00170184(void);

extern AsdGfxWaitContext g_asdGfxContext;

/* Waits (yielding) while the context's waiting flag is set; when a timeout is set and runs out,
 * runs the timeout callback and returns. */
void FUN_00161a14(void)
{
    s64 start = 0;

    if (g_asdGfxContext.timeout != 0) {
        start = FUN_001623d0();
    }
    for (;;) {
        if (g_asdGfxContext.waiting == 0) {
            return;
        }
        if (g_asdGfxContext.timeout != 0) {
            s64 elapsed = FUN_001623d0() - start;

            if (g_asdGfxContext.timeout < elapsed) {
                if (g_asdGfxContext.onTimeout != NULL) {
                    g_asdGfxContext.onTimeout();
                }
                return;
            }
        }
        FUN_00170184();
    }
}

} /* extern "C" */
