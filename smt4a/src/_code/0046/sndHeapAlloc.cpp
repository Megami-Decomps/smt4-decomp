/* Allocates `size` bytes from the sound frame heap with the sound lock held (the heap also locks internally). */
#include "common.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {
void soundRequestPostType30(void);
void *nw_snd_internal_FrameHeap_Alloc(void *heap, u32 size, void (*callback)(void), u32 flags);
}

struct SoundHeap {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 lock[0xC];     /* nn::os::CriticalSection */
    /* 0x10 */ u8 frameHeap[1];

    void *allocLocked(u32 size, void (*callback)(void), u32 flags)
    {
        ScopedCriticalLock guard(lock);
        return nw_snd_internal_FrameHeap_Alloc(frameHeap, size, callback, flags);
    }

    void *alloc(u32 size)
    {
        ScopedCriticalLock guard(lock);
        return allocLocked(size, soundRequestPostType30, 0);
    }
};

extern "C" void *sndHeapAlloc(SoundHeap *heap, u32 size)
{
    return heap->alloc(size);
}
