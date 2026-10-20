/* NON_MATCHING: everything matches (the tail call to the next function is armlink's nop) except the final `tailTop = tailBase` store, which retail does through r1 where this build reuses r0. */
#include "common.h"

extern "C" {

/* A state record saved on the heap (a chain through `next`). */
typedef struct FrameHeapState {
    u8 unk00[8];
    u32 tail;                       /* 0x08 */
    struct FrameHeapState *next;    /* 0x0C */
} FrameHeapState;

/* A frame heap grows from `head` upwards and from `tail` downwards. */
typedef struct FrameHeap {
    u8 unk00[0xc];
    u32 headBase;                   /* 0x0C: first byte of the head side */
    u32 tailBase;                   /* 0x10: end of the tail side */
    u8 unk14[0x14];
    u32 headTop;                    /* 0x28: next free byte from the head */
    u32 tailTop;                    /* 0x2C: lowest used byte from the tail */
    FrameHeapState *states;         /* 0x30 */
} FrameHeap;

__weak FrameHeap *nw_ut_FrameHeap_FreeHook(FrameHeap *heap);
FrameHeap *FUN_00150140(FrameHeap *heap); /* returns its argument; follows this function */
void FUN_002a7d70(FrameHeap *heap, u32 start, u32 size);

/* Releases the head side (bit 0) and/or the tail side (bit 1) of the heap. */
FrameHeap *nw_ut_FrameHeap_Free(FrameHeap *heap, u32 mode)
{
    nw_ut_FrameHeap_FreeHook(heap);
    if (mode & 1) {
        FUN_002a7d70(heap, heap->headBase, heap->headTop - heap->headBase);
        heap->headTop = heap->headBase;
        heap->states = NULL;
    }
    if (mode & 2) {
        FrameHeapState *state;

        FUN_002a7d70(heap, heap->tailTop, heap->tailBase - heap->tailTop);
        for (state = heap->states; state != NULL; state = state->next) {
            state->tail = heap->tailBase;
        }
        heap->tailTop = heap->tailBase;
    }
    return FUN_00150140(heap);
}

} /* extern "C" */
