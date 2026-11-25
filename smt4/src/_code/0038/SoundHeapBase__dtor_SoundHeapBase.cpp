/* NON_MATCHING: retail predicates the copy of the incoming heap (movne r6, r4) and forms the inner lock's
 * address from that copy. The build makes the copy after the branch and forms the lock address from r4. */
#include "common.h"
#include "shard/S3SoundHeapObj.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {

void nw_snd_internal_FrameHeap_Clear(u32 *heap);
void nw_snd_internal_FrameHeap_Destroy(u32 *heap);
u32 *nw_snd_internal_FrameHeap_FrameHeap_sub_object_3802B0(u32 *heap);
u32 soundRequestQueueGetInstance(void);
u32 soundRequestQueueFlush(u32 arg0, u32 arg1);
void soundRequestQueueDequeueUntilToken(u32 arg0, u32 arg1);

extern const u8 _ZTV9Obj421f54[];

/* Clears the frame heap while holding a second scoped lock, as in nw_snd_SoundHeap_Destroy. */
static void soundHeapObjClear(SoundHeapObj *self)
{
    ScopedCriticalLock lock(self->lock);
    nw_snd_internal_FrameHeap_Clear(&self->heap);
}

/* Releases the frame heap under the lock. */
static __inline void soundHeapObjDestroyHeap(SoundHeapObj *self)
{
    ScopedCriticalLock lock(self->lock);
    if (self->heap == 0) {
        return;
    }
    soundHeapObjClear(self);
    u32 heapOwner = soundRequestQueueGetInstance();
    soundRequestQueueDequeueUntilToken(heapOwner, soundRequestQueueFlush(heapOwner, 1));
    nw_snd_internal_FrameHeap_Destroy(&self->heap);
}

/* Destroys the object: the frame heap, then its base (the frame heap base sits at +0x10);
 * returns the object. */
SoundHeapObj *_ZN13SoundHeapBaseD1Ev(SoundHeapObj *obj)
{
    obj->vtbl = _ZTV9Obj421f54 + 8;  /* vtable address point */
    soundHeapObjDestroyHeap(obj);
    obj->id = -1;
    return (SoundHeapObj *)((u8 *)nw_snd_internal_FrameHeap_FrameHeap_sub_object_3802B0(&obj->heap) - 0x10);
}

} /* extern "C" */
