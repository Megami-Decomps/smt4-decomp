#include "common.h"

namespace {
struct CleanupStateView {
    u8 unk00[0x08];       // 0x00
    u32 storage;          // 0x08
    u32 entries;          // 0x0C
    u32 unk10;            // 0x10
    u32 entryContext;     // 0x14
    const u8* unk18;      // 0x18
    u32 unk1C;            // 0x1C
    f32 unk20;            // 0x20
    f32 unk24;            // 0x24
    u32 unk28;            // 0x28
    u32 storageFirst;     // 0x2C
    u32 storageSecond;    // 0x30
    u32 storageCount;     // 0x34
    u8 active;            // 0x38
};
}

extern "C" {
extern u8 DAT_00646e74;
void FUN_001b6668(void* entries, u32 context);
void FUN_001915c4(void* storage, u32 first, u32 second);
}

// Reset an active state, drain its entries, and release its remaining storage.
extern "C" u8 FUN_00173a94(CleanupStateView* state)
{
    if (state->active == 0) {
        return 0;
    }

    state->unk1C = 0x20;
    state->unk20 = 0.9f;
    state->unk24 = 0.0f;
    state->unk28 = 0xFFFFFFFFu;
    state->unk18 = &DAT_00646e74;

    /* Each call removes the head entry. */
    for (;;) {
        if (state->entries == 0)
            break;
        FUN_001b6668(&state->entries, state->entryContext);
    }

    FUN_001915c4(&state->storage, state->storageFirst, state->storageSecond);
    state->storageFirst = 0;
    state->storageSecond = 0;
    state->storageCount = 0;
    state->active = 0;
    return 1;
}
