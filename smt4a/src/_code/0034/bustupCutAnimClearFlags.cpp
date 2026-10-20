#include "shard/Shard0034.h"

extern "C" {

extern u32 bustupCutAnimGetSlot(u32 index);
extern s32 jobIsValid(u32 job);
extern Work8C *jobGetWork(u32 job);

/* Clears the flag at +0x8C in the work area of the bust-up cut animation jobs 1..3. */
void bustupCutAnimClearFlags(void)
{
    s32 i;
    u32 slot;

    for (i = 1; i < 4; i++) {
        slot = bustupCutAnimGetSlot(i);
        if (slot != -1 && jobIsValid(slot) != 0) {
            jobGetWork(slot)->flag = 0;
        }
    }
}

} /* extern "C" */
