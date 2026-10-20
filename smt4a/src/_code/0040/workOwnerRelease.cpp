#include "shard/Shard0040.h"

extern "C" {

typedef struct WorkOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Work20Ref *work;
    /* 0x0C */ u32 block0C[1];
    /* 0x10 */ void *buffers[3];
} WorkOwner;

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
