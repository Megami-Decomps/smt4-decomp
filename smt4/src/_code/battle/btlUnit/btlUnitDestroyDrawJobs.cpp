#include "common.h"
#include "shard/JobWork.h"

struct DrawAllocator;
struct DrawAllocatorVtbl {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ void (*release)(DrawAllocator *allocator, void *block);
};
struct DrawAllocator {
    /* 0x00 */ DrawAllocatorVtbl *vtbl;
};

struct DrawObject;
struct DrawObjectVtbl {
    /* 0x00 */ void (*destroy)(DrawObject *object);
};
/* A scene object that is destroyed in place and handed back to the allocator that built it. */
struct DrawObject {
    /* 0x00 */ DrawObjectVtbl *vtbl;
    /* 0x04 */ DrawAllocator *allocator;
};

struct DrawCallback;
struct DrawCallbackVtbl {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void (*detach)(DrawCallback *callback);
};
struct DrawCallback {
    /* 0x00 */ DrawCallbackVtbl *vtbl;
};

struct DrawSlot {
    /* 0x00 */ DrawObject *object;
    /* 0x04 */ DrawCallback *callback;
};

struct DrawOwnerVtbl {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void (*shutdown)(void *owner);
};
struct DrawOwner {
    /* 0x00 */ DrawOwnerVtbl *vtbl;
};
struct DrawGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ DrawOwner *owner;
};

struct DrawWork {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u32 calculationJob;
};

extern "C" {

extern DrawGlobals DAT_00439ce0;
extern DrawSlot DAT_0049356c[2];

s32 jobIsValid(u32 job);
void jobStop(u32 job, s32 arg);
void FUN_001c0a44(DrawObject *light, s32 group);

/* End callback of the unit draw job: stops the calculation job, then removes, destroys and frees the two draw objects and
 * shuts the owner down. */
void btlUnitDestroyDrawJobs(u32 job)
{
    DrawWork *work = (DrawWork *)jobGetWork(job);
    if (jobIsValid(work->calculationJob)) {
        jobStop(work->calculationJob, 0);
    }
    for (s32 i = 0; i < 2; ++i) {
        FUN_001c0a44(DAT_0049356c[i].object, 1);
    }
    for (s32 i = 0; i < 2; ++i) {
        DrawSlot *slot = &DAT_0049356c[i];
        if (slot->callback != NULL) {
            slot->callback->vtbl->detach(slot->callback);
        }
        DrawObject *object = slot->object;
        if (object != NULL) {
            object->vtbl->destroy(object);
            object->allocator->vtbl->release(object->allocator, object);
            slot->object = NULL;
        }
    }
    if (DAT_00439ce0.owner != NULL) {
        DAT_00439ce0.owner->vtbl->shutdown(DAT_00439ce0.owner);
    }
    DAT_00439ce0.owner = NULL;
}

} /* extern "C" */
