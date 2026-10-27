/* NON_MATCHING: retail passes the object through a copy (r6) to the inlined clear, keeps the section in r5 with one shared Leave and places the no-heap exit out of line; build keeps r4 and leaves per arm. */
#include "common.h"
#include "shard/S3SoundHeapObj.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {

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
    ScopedCriticalLock lock(self->lock);
    nw_snd_internal_FrameHeap_Clear(&self->heap);
}

/* Releases the frame heap under the lock. */
static __inline void soundHeapObjDestroyHeap(SoundHeapObj *self)
{
    CriticalSection *lock = reinterpret_cast<CriticalSection *>(self->lock);

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
SoundHeapObj *_ZN13SoundHeapBaseD1Ev(SoundHeapObj *obj)
{
    obj->vtbl = &DAT_00421f5c;
    soundHeapObjDestroyHeap(obj);
    obj->id = -1;
    return (SoundHeapObj *)((u8 *)nw_snd_internal_FrameHeap_FrameHeap_sub_object_3802B0(&obj->heap) - 0x10);
}

} /* extern "C" */
