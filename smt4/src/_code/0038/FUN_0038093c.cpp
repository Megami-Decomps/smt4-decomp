/* NON_MATCHING: retail uses different paired comparisons, array stride arithmetic or initialization ordering. */
#include "common.h"

struct FrameHeap {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u32 first;
    /* 0x08 */ s16 second;
    /* 0x0a */ u8 unk0a[2];
    /* 0x0c */ s32 state;
    /* 0x10 */ u8 heap[12];
    /* 0x1c */ u8 criticalSection[1];
};
extern "C" {
extern const u8 DAT_00421f5c[];
void nw_snd_internal_FrameHeap_FrameHeap_sub_object_380298(void *heap);
void nn_os_CriticalSection_Initialize(void *section);
/* Initializes the frame heap and its critical section. */
FrameHeap *FUN_0038093c(FrameHeap *heap)
{
    heap->vtable = DAT_00421f5c;
    heap->state = -1;
    heap->first = 0;
    heap->second = 0;
    nw_snd_internal_FrameHeap_FrameHeap_sub_object_380298(heap->heap);
    nn_os_CriticalSection_Initialize((u8 *)heap + 4);
    return heap;
}
}
