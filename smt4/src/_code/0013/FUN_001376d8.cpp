/* NON_MATCHING: Retail mov r7, #0 differs from recovered mov r8, #0. */
#include "common.h"

struct CommandBufferStateView {
    u8 unk00[0x04];
    u32 unk04; // 0x04
    u8 unk08[0x04];
    u32 unk0C; // 0x0C
    u8 unk10[0x10];
    u32 unk20; // 0x20
};

struct GfxContextView {
    u8 unk00[0x13];
    u8 unk13; // 0x13
    u8 unk14[0x88];
    CommandBufferStateView* unk9C; // 0x9C
    u8 unkA0[0xC8];
    u32 unk168; // 0x168
    u32 unk16C; // 0x16C
};

extern "C" {
extern GfxContextView g_asdGfxContext;
extern u32* g_commandBufferCursor;
extern u32 g_commandBufferEnd;

// Finish the current command range, append padding if needed, and report both ranges.
void FUN_001376d8(u32* commandOffset, u32* commandSize,
                  u32* secondaryOffset, u32* secondarySize)
{
    g_asdGfxContext.unk13 = 0;

    CommandBufferStateView* state = g_asdGfxContext.unk9C;
    u32* cursor = g_commandBufferCursor;
    u32 usedBytes = reinterpret_cast<u32>(cursor) - state->unk04;
    state->unk0C = usedBytes;

    if ((usedBytes & 8) != 0 &&
        reinterpret_cast<u32>(cursor) < g_commandBufferEnd) {
        cursor[0] = 0;
        cursor[1] = 0x0008025E;
        g_commandBufferCursor = cursor + 2;
    }

    *commandOffset = g_asdGfxContext.unk168;
    *commandSize = reinterpret_cast<u32>(g_commandBufferCursor)
                 - g_asdGfxContext.unk9C->unk04
                 - g_asdGfxContext.unk168;
    *secondaryOffset = g_asdGfxContext.unk16C;
    *secondarySize = g_asdGfxContext.unk9C->unk20
                   - g_asdGfxContext.unk16C;
}
}
