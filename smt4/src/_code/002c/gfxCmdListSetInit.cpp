#include "common.h"

/* A ring of GPU command lists. */
struct GfxCmdListSet {
    /* 0x00 */ u32 lists[2];
    /* 0x08 */ u32 count;
    /* 0x0C */ u32 bufferSize;
    /* 0x10 */ u32 requestCount;
    /* 0x14 */ u32 current;
};

extern "C" {

void FUN_001233d4(u32 count, u32 *lists);
void nngxBindCmdlist(u32 list);
void FUN_0012316c(u32 bufferSize, u32 requestCount);
void asdGfxSetCmdBufferState(s32 state, s32 value);
void asdModelResetCommandBuffer(void);
void asdGxMarkSubmissionReady(void);
void asdGfxSetCmdBufferUnk38(u32 value);
void FUN_001192c4(void);
void FUN_00123398(s32 value);

/* Create count command lists of the given size, prime each one, then make the first current. */
void gfxCmdListSetInit(GfxCmdListSet *set, u32 count, u32 bufferSize, u32 requestCount)
{
    set->count = count;
    set->bufferSize = bufferSize;
    set->requestCount = requestCount;
    set->current = 0;
    for (u32 i = 0; i < set->count; ++i) {
        set->lists[i] = 0;
    }
    FUN_001233d4(set->count, set->lists);
    for (u32 i = 0; i < set->count; ++i) {
        nngxBindCmdlist(set->lists[i]);
        FUN_0012316c(set->bufferSize, set->requestCount);
        asdGfxSetCmdBufferState(0x200, 0x300);
        asdModelResetCommandBuffer();
    }
    nngxBindCmdlist(set->lists[0]);
    asdGxMarkSubmissionReady();
    asdGfxSetCmdBufferUnk38((u32)FUN_001192c4);
    FUN_00123398(-1);
}

} /* extern "C" */
