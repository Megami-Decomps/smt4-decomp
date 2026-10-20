#include "common.h"

extern "C" {

typedef struct JobOwner {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u32 job;
    /* 0x008 */ u8 unk008[0x414];
    /* 0x41C */ void *slot;
} JobOwner;

extern s32 jobIsValid(u32 job);
extern void asdMemFreeSlot(void *slot);
extern void jobStop(u32 job, s32 mode);

/* Frees the owner's slot, clears its run flags (0x30) and stops its job, if the job is still valid. */
void jobOwnerFreeSlotAndStop(JobOwner *owner)
{
    if (jobIsValid(owner->job) != 0) {
        if (owner->slot != NULL) {
            asdMemFreeSlot(owner->slot);
            owner->slot = NULL;
        }
        owner->flags &= ~0x30;
        jobStop(owner->job, 0);
    }
}

} /* extern "C" */
