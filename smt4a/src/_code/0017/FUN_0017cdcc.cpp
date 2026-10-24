/* NON_MATCHING: register allocation: retail computes the entry address in a separate register (r2) and keeps the arguments in r7/r8 */
#include "shard/Block61a470.h"

/* One 0x1C-byte record of the pool's entry array. */
struct PoolEntry {
    /* 0x00 */ u8 used;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 first;
    /* 0x08 */ u32 second;
    /* 0x0C */ u32 flags;
    /* 0x10 */ u8 unk10[0xC];
};

extern "C" {

extern s32 g_commandBufferCursor;

void FUN_0017dd84(void);
void globalCriticalSectionEnterForward(void);
void globalCriticalSectionLeaveForward(void);
void FUN_001963e0(void);

/* Appends a record to the command pool's entry array (after flushing when the pool and the buffer disagree) and kicks the submission once. */
void FUN_0017cdcc(u32 first, u32 second)
{
    Pool *pool = g_asdGfxContext.pool;
    PoolEntry *entry;

    pool->unk0C = g_commandBufferCursor - pool->start;
    if (pool->unk14 != pool->unk0C) {
        FUN_0017dd84();
    }
    if (pool->unk14 != pool->unk0C) {
        return;
    }
    entry = (PoolEntry *)pool->entries + pool->entryCount;
    entry->used = 1;
    entry->first = first;
    entry->second = second;
    entry->flags |= 6;
    globalCriticalSectionEnterForward();
    pool->entryCount++;
    if (g_asdGfxContext.activePool == pool && g_asdGfxContext.submission.submitEnabled != 0
        && g_asdGfxContext.submission.submitPending == 0) {
        g_asdGfxContext.submission.submitPending = 1;
        FUN_001963e0();
    }
    globalCriticalSectionLeaveForward();
}

} /* extern "C" */
