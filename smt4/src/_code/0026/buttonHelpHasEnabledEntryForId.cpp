#include "common.h"
#include "shard/buttonHelpHasEnabledEntryForId.h"

struct ButtonHelpEntryView {
    u8 unk00;        // 0x00
    u8 unk01[3];     // 0x01
};

struct ButtonHelpStateView {
    u8 unk000[0x494];                 // 0x000
    ButtonHelpEntryView unk494[6];    // 0x494
    u8 unk4AC[0x12];                 // 0x4AC
    u8 unk4BE[6];                    // 0x4BE
};

struct ButtonHelpGlobalView {
    u8 unk00[4];                     // 0x00
    ButtonHelpStateView* unk04;       // 0x04
};

extern "C" {
extern ButtonHelpGlobalView g_buttonHelp;

// Tests six enabled entries, treating IDs 8 and 9 as aliases for 4 and 3.
u32 buttonHelpHasEnabledEntryForId(u32 requestedId)
{
    ButtonHelpStateView* state = g_buttonHelp.unk04;
    if (state != 0) {
        for (s32 entryIndex = 0; entryIndex < 6; ++entryIndex) {
            u32 entryId = state->unk494[entryIndex].unk00;
            if (entryId == requestedId && state->unk4BE[entryIndex] != 0) {
                return 1;
            }

            if (entryId == 8) {
                if (requestedId == 4 && state->unk4BE[entryIndex] != 0) {
                    return 1;
                }
            } else if (entryId == 9) {
                if (requestedId == 3 && state->unk4BE[entryIndex] != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
}
