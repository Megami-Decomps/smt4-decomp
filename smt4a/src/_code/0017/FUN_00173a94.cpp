/* NON_MATCHING: Retail beq 88 differs from recovered beq 84. */
#include "common.h"

namespace {
struct CleanupStateView {
    u8 unk00[0x08];       // 0x00
    u32 unk08;            // 0x08
    u32 unk0C;            // 0x0C
    u32 unk10;            // 0x10
    u32 unk14;            // 0x14
    const u8* unk18;      // 0x18
    u32 unk1C;            // 0x1C
    f32 unk20;            // 0x20
    f32 unk24;            // 0x24
    u32 unk28;            // 0x28
    u32 unk2C;            // 0x2C
    u32 unk30;            // 0x30
    u32 unk34;            // 0x34
    u8 unk38;             // 0x38
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
    if (state->unk38 == 0) {
        return 0;
    }

    state->unk1C = 0x20;
    state->unk20 = 0.9f;
    state->unk24 = 0.0f;
    state->unk28 = 0xFFFFFFFFu;
    state->unk18 = &DAT_00646e74;

    while (state->unk0C != 0) {
        FUN_001b6668(&state->unk0C, state->unk14);
    }

    FUN_001915c4(&state->unk08, state->unk2C, state->unk30);
    state->unk2C = 0;
    state->unk30 = 0;
    state->unk34 = 0;
    state->unk38 = 0;
    return 1;
}
