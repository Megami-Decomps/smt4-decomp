/* NON_MATCHING: retail receives and forwards the float argument on the stack (vldr/vstr, not s0) and builds the task arguments through ip; ABI of the float parameter unknown */
#include "common.h"

extern "C" {

/* A ring of twelve action jobs. */
typedef struct BtlActionRing {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u32 jobs[12];
    /* 0x3C */ u8 unk3c[0xa4 - 0x3c];
    /* 0xA4 */ s32 current;
} BtlActionRing;

typedef struct BtlActionGlobalsA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *data;
} BtlActionGlobalsA;

extern BtlActionGlobalsA g_btlAction;

s32 jobIsValid(u32 job);
void FUN_004dcb40(void *data, BtlActionRing *ring, u32 a, u32 b, u32 c, f32 d);
u32 taskCreateDraw(const char *name, s32 priority, s32 a, s32 b, void (*update)(u32), void (*draw)(u32), void *owner, u32 id);
void FUN_00298354(u32 job);
void jobPoolStopCurrent(u32 job);

/* Advances the ring to its next slot, sets up the action and starts its job in that slot. */
void FUN_002b4f28(BtlActionRing *ring, u32 a, u32 b, u32 c, f32 d)
{
    ring->current = (ring->current + 1) % 12;
    jobIsValid(ring->jobs[ring->current]);
    FUN_004dcb40(g_btlAction.data, ring, a, b, c, d);
    ring->jobs[ring->current] = taskCreateDraw("btlAction Calc", 3, 0, 0, FUN_00298354, jobPoolStopCurrent, ring, ring->id);
}

} /* extern "C" */
