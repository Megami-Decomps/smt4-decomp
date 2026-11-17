#include "common.h"
#include "camp/CampState.h"
#include <stddef.h>
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
s32 buttonHelpSetPreset(s32 preset);
s32 FUN_002579bc(s32 enabled);
s32 FUN_00257a50(void *output, s32 selection, s32 category);
s32 FUN_0029da34(s32 channel, s32 enabled, u32 value, void *data);

// Selects the camp button-help preset for the special-help, party-panel and navigation states.
void FUN_00241b40(void)
{
    // This is local backing storage, not a recovered helper-object boundary.
    // The only interpreted output is the halfword at +0x46.
    struct OutputPrefix {
        u8 unknown00[0x46];
        u16 value46;
    };
    union OutputStorage {
        u8 bytes[0x610];
        OutputPrefix prefix;
    };
    typedef char OutputPrefixOffsetCheck[
        offsetof(OutputPrefix, value46) == 0x46 &&
        sizeof(OutputPrefix) == 0x48 ? 1 : -1];
    typedef char OutputStorageSizeCheck[
        sizeof(OutputStorage) == 0x610 ? 1 : -1];

    CampState *camp = g_camp;

    if (camp->unitSelectActive != 0) {
        if (camp->unitSelectIndex != 3) {
            buttonHelpSetPreset(0x50);
            OutputStorage output;
            if (FUN_00257a50(output.bytes, camp->unitSelectIndex,
                            camp->unitSelectSource) != 0) {
                FUN_0029da34(0, 1, output.prefix.value46, output.bytes);
            }
        } else {
            buttonHelpSetPreset(0x4f);
        }
        return;
    }

    if (partyPanelIsActive() != 0) {
        if (camp->menuGroup == 1) {
            buttonHelpSetPreset(2);
            FUN_002579bc(1);
        } else {
            buttonHelpSetPreset(4);
            FUN_002579bc(0);
        }
    } else {
        if (camp->menuGroup == 1) {
            buttonHelpSetPreset(1);
            FUN_002579bc(1);
        } else {
            buttonHelpSetPreset(3);
            FUN_002579bc(0);
        }
    }
}
}
