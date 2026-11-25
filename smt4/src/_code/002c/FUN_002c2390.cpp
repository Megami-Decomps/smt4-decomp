/* NON_MATCHING: retail's loop loads the buffer selector and vertex count into different registers. */
#include "gfx/CommandHolder.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"



/* Flushes the current frame's vertex buffers and line buffer out of the CPU cache. */
extern "C" u32 FUN_002c2390(CommandHolder *state)
{
    for (s32 index = 0; index < state->entryCount; ++index) {
        if (state->entries[index].active) {
            u32 slot = 0;
            if (state->bufferIndex != 0) {
                slot = 1;
            }
            const u32 *address = &state->entries[index].address[slot];
            const u8 components = state->entries[index].componentCount;
            nn_gxlow_CTR_FlushDataCacheForward(*address, state->count * components * sizeof(u32));
        }
    }
    u32 slot = 0;
    if (state->bufferIndex != 0) {
        slot = 1;
    }
    return nn_gxlow_CTR_FlushDataCacheForward(state->lines[slot], state->count * sizeof(u16));
}
