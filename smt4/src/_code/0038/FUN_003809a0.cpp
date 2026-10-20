/* NON_MATCHING: register allocation and block order: retail passes the object through a copy (r6) to the inlined clear and places the no-heap path after the return; build keeps r4 and falls through. */
#include "common.h"
#include "shard/S3SoundHeapObj.h"

extern "C" {

void nn_os_CriticalSection_Enter(void *cs);
void nn_os_CriticalSection_Leave(void *cs);
void nw_snd_internal_FrameHeap_Clear(u32 *heap);
void nw_snd_internal_FrameHeap_Destroy(u32 *heap);
u32 *nw_snd_internal_FrameHeap_FrameHeap_sub_object_3802B0(u32 *heap);
u32 FUN_002baed8(void);
u32 FUN_002bad74(u32 arg0, u32 arg1);
void FUN_002b4b94(u32 arg0, u32 arg1);

extern const u8 DAT_00421f5c;  /* vtable */

/* Clears the frame heap under the lock. */
static __inline void soundHeapObjClear(SoundHeapObj *self)
{
    void *lock = self->lock;

    nn_os_CriticalSection_Enter(lock);
    nw_snd_internal_FrameHeap_Clear(&self->heap);
    nn_os_CriticalSection_Leave(lock);
}

/* Releases the frame heap under the lock. */
static __inline void soundHeapObjDestroyHeap(SoundHeapObj *self)
{
    void *lock = self->lock;

    nn_os_CriticalSection_Enter(lock);
    if (self->heap != 0) {
        soundHeapObjClear(self);
        u32 heapOwner = FUN_002baed8();
        FUN_002b4b94(heapOwner, FUN_002bad74(heapOwner, 1));
        nw_snd_internal_FrameHeap_Destroy(&self->heap);
        nn_os_CriticalSection_Leave(lock);
    } else {
        nn_os_CriticalSection_Leave(lock);
    }
}

/* Destroys the object: the frame heap, then its base (the frame heap base sits at +0x10);
 * returns the object. */
SoundHeapObj *FUN_003809a0(SoundHeapObj *obj)
{
    obj->vtbl = &DAT_00421f5c;
    soundHeapObjDestroyHeap(obj);
    obj->id = -1;
    return (SoundHeapObj *)((u8 *)nw_snd_internal_FrameHeap_FrameHeap_sub_object_3802B0(&obj->heap) - 0x10);
}

} /* extern "C" */
