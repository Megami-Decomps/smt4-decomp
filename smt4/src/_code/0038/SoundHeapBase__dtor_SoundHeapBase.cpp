/* NON_MATCHING: the scoped lock, the early return and the out-of-line no-heap exit match; retail still passes the object
 * through a copy (movne r6, r4; add r7, r6, #4) to the inlined clear, and names the vtable _ZTV9Obj421f54+8. */
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

extern const u8 DAT_00421f5c;  /* vtable */

/* Clears the frame heap under the lock. */
static __inline void soundHeapObjClear(SoundHeapObj *self)
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
    obj->vtbl = &DAT_00421f5c;
    soundHeapObjDestroyHeap(obj);
    obj->id = -1;
    return (SoundHeapObj *)((u8 *)nw_snd_internal_FrameHeap_FrameHeap_sub_object_3802B0(&obj->heap) - 0x10);
}

} /* extern "C" */
