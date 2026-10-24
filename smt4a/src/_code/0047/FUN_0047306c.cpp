#include "common.h"
#include "shard/W4_Match3_AocMainA.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
u32 spriteHandleCreate(u32 kind);
void asdMemFreeSlot(u32 handle);
u32 FUN_0023b4a4(u32 index);
void FUN_001527d8(u32 handle, u32 resource);
void positionStateSet(u32 handle, s32 state, u32 color, f32 value);
u32 FUN_00473910(AocMainA *main, u32 entry);
void asdTextDrawDirectoryEntry(u32 handle, s32 mode, u32 entry,
                               s32 option, s32 style, u32 directory,
                               u32 selection);
void FUN_00472f58(DirectoryDisplayStateA *state, u32 directory,
                  u32 argument2, u32 argument3);

void FUN_0047306c(DirectoryDisplayStateA *state, u32 selection,
                  u32 argument2, u32 argument3)
{
    state->flags |= 0x40u;
    if (state->spriteHandle != 0) {
        asdMemFreeSlot(state->spriteHandle);
        state->spriteHandle = 0;
    }

    state->spriteHandle = spriteHandleCreate(0);
    const u32 resource = FUN_0023b4a4(5);
    FUN_001527d8(state->spriteHandle, resource);
    positionStateSet(state->spriteHandle, 0, 0x646464ffu, 0.0f);

    const u32 directory = FUN_00473910(g_aocMain, 0xffffffffu);
    asdTextDrawDirectoryEntry(state->spriteHandle, 3, 0xffffffffu,
                              0, 3, directory, selection);

    const u32 selectedDirectory = FUN_00473910(g_aocMain, selection);
    FUN_00472f58(state, selectedDirectory, argument2, argument3);
}
}
