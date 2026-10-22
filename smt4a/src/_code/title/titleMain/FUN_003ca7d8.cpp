/* NON_MATCHING: Retail add r1, r4, #120 differs from recovered add r0, r4, #120. */
#include "common.h"

// Private layout views for the fields accessed by this function.
struct TitleStateView {
    u8 unk00[0x3D]; // 0x00
    u8 unk3D;       // 0x3D
    u8 unk3E[2];    // 0x3E
    f32 unk40;      // 0x40
    f32 unk44;      // 0x44
    u8 unk48[8];    // 0x48
    u16 unk50;      // 0x50
    u16 unk52;      // 0x52
    u16 unk54;      // 0x54
    u16 unk56;      // 0x56
    u16 unk58;      // 0x58
    u8 unk5A[6];    // 0x5A
    u8 unk60;       // 0x60
    u8 unk61[0x17]; // 0x61
    u32 unk78;      // 0x78
    u32 unk7C;      // 0x7C
    u32 unk80;      // 0x80
};

struct TitleMainView {
    u32 unk00;             // 0x00
    TitleStateView* unk04; // 0x04
};

extern "C" {
extern TitleMainView g_titleMain;
s32 sysPlaySe(s32 soundId);
void frameTransitionSetMode(s32 mode);
u16 FUN_001643b4(u32 group, u32 entry);

// Reset title state, load five entries, and begin transition mode 2.
void FUN_003ca7d8(void)
{
    TitleStateView* state = g_titleMain.unk04;
    state->unk40 = 0.0f;
    state->unk44 = 0.0f;
    sysPlaySe(0xA1);
    state->unk50 = FUN_001643b4(9, 0x27);
    state->unk52 = FUN_001643b4(9, 0x28);
    state->unk54 = FUN_001643b4(9, 0x29);
    state->unk56 = FUN_001643b4(9, 0x2A);
    state->unk58 = FUN_001643b4(9, 0x2B);
    state->unk3D = 0;
    frameTransitionSetMode(2);
    state->unk60 = 1;
    state->unk78 = 0xB;
    state->unk7C = 0;
    state->unk80 = 0;
}
}
