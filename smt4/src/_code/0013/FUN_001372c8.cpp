/* NON_MATCHING: command fields recovered; retail copies all three payload words with STM, while armcc copies the final word through VFP and allocates different registers. */
#include "shard/Block61a470.h"

struct GfxRectangleCommand {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 source;
    /* 0x08 */ u32 target;
    /* 0x0C */ u32 flags;
    /* 0x10 */ s16 sourceY;
    /* 0x12 */ s16 sourceX;
    /* 0x14 */ s16 targetY;
    /* 0x16 */ s16 targetX;
    /* 0x18 */ u8 unk18[4];
};

extern "C" {
void nngxLockEnter(void);
void nngxLockLeave(void);
void FUN_002ba2b8(void);

// Queue a rectangle transfer, converting fixed-point coordinates to pixels.
void FUN_001372c8(u32 source, s32 sourceX, s32 sourceY, u32 target,
                  s32 targetX, s32 targetY, u32 flags)
{
    Pool* pool = g_asdGfxContext.pool;
    GfxRectangleCommand* command = static_cast<GfxRectangleCommand*>(pool->entries) + pool->entryCount;
    command->kind = 4;
    command->source = source;
    command->target = target;
    command->flags = flags;
    command->sourceY = sourceY >> 4;
    command->sourceX = sourceX >> 4;
    command->targetY = targetY >> 4;
    command->targetX = targetX >> 4;
    nngxLockEnter();
    ++pool->entryCount;
    if (g_asdGfxContext.activePool == pool && g_asdGfxContext.submission.submitEnabled &&
        !g_asdGfxContext.submission.submitPending) {
        g_asdGfxContext.submission.submitPending = 1;
        FUN_002ba2b8();
    }
    nngxLockLeave();
}
}
