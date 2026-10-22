/* NON_MATCHING: Retail ldr r3, [pc, #136] differs from recovered ldr r3, [pc, #128]. */
#include "common.h"

struct StateView {
    u8 unk00[0x2a0]; // 0x000
    u32 unk2A0;      // 0x2a0
    s32 unk2A4;      // 0x2a4
    s16 unk2A8;      // 0x2a8
    u16 unk2AA;      // 0x2aa
    u16 unk2AC;      // 0x2ac
    u16 unk2AE;      // 0x2ae
};

struct GlobalView {
    u32 unk00;          // 0x00
    StateView* unk04;   // 0x04
};

extern "C" {
extern GlobalView DAT_004474f0;

// Clear the active request or replace it when the new priority is not lower.
void FUN_002879dc(s32 identifier, s32 amount, s32 priority)
{
    StateView* state = DAT_004474f0.unk04;
    if (amount == 0) {
        state->unk2A0 = 0;
        state->unk2A4 = 0;
        return;
    }

    if (state->unk2A0 != 0 && state->unk2A4 > priority) {
        return;
    }

    state->unk2A0 = 1;
    StateView* output = DAT_004474f0.unk04;
    if (identifier == 0) {
        identifier = -1;
    }
    output->unk2A8 = (s16)identifier;
    state->unk2A4 = priority;
    u16 scaledAmount = (u16)((u32)amount * 10u);
    output->unk2AC = scaledAmount;
    u16 fraction = (u16)(((u32)scaledAmount * 4u) / 10u);
    output->unk2AA = fraction;
    output->unk2AE = fraction;
}
}
