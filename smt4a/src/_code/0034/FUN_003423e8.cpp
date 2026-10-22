/* NON_MATCHING: Retail ldr r1, [pc, #152] differs from recovered ldr r1, [pc, #124]. */
#include "common.h"

// Private views of the button-help records used by this function.
struct ButtonHelpEntryView {
    u8 unk00[0x0C];             // 0x00
    u32 unk0C;                  // 0x0C
    u32 unk10;                  // 0x10
    u32 unk14;                  // 0x14
    u8 unk18[0x22];             // 0x18
    u16 unk3A;                  // 0x3A
    u8 unk3C;                   // 0x3C
    u8 unk3D[0x4F];             // 0x3D
};

struct ButtonHelpStateView {
    u8 unk00[0x37C];                // 0x000
    ButtonHelpEntryView entries[4]; // 0x37C
    u8 unk5AC[0x38];                // 0x5AC
    u8 unk5E4;                      // 0x5E4
};

struct ButtonHelpGlobalView {
    u8 unk00[4];                    // 0x00
    ButtonHelpStateView* state;     // 0x04
};

extern "C" {
extern ButtonHelpGlobalView g_buttonHelp;
void FUN_00387240(ButtonHelpEntryView* entry, s32 value, s32 flags);

// Store the help mode, disabling entries or resetting all four for modes 0 and 2.
void FUN_003423e8(s32 mode)
{
    ButtonHelpStateView* state = g_buttonHelp.state;
    state->unk5E4 = static_cast<u8>(mode);

    if (mode != 0 && mode != 2) {
        for (s32 index = 0; index < 4; ++index) {
            state->entries[index].unk3C = 0;
        }
        return;
    }

    for (s32 index = 0; index < 4; ++index) {
        state->entries[index].unk3A = 2;
        FUN_00387240(&state->entries[index], 10, 0);
        state->entries[index].unk3C = 1;
        state->entries[index].unk0C = 0;
        state->entries[index].unk10 = 0;
        state->entries[index].unk14 = 0;
    }
}
}
