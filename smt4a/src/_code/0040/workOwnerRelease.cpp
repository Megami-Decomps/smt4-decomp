#include "shard/Shard0040.h"
#include "AsdSDK/Source/Gfx/Model/WorkOwner.h"

extern "C" {

extern void work20RefFree(Work20Ref *work);
extern void FUN_004511d8(u32 *block);
extern void asdMemFree(void *ptr);

/* Releases the work reference at +8 and the three buffers at +0x10. */
void workOwnerRelease(WorkOwner *owner)
{
    s32 i;

    if (owner->work != NULL) {
        work20RefFree(owner->work);
        FUN_004511d8(owner->block0C);
        owner->work = NULL;
    }
    for (i = 0; i < 3; i++) {
        if (owner->buffers[i] != NULL) {
            asdMemFree(owner->buffers[i]);
            owner->buffers[i] = NULL;
        }
    }
}

} /* extern "C" */
