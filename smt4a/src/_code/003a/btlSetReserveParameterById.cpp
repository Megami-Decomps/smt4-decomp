#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"

extern "C" {
extern const u64 g_battleMaskPresets[];
u32 scrGetArg(u32 index);

// Set a parameter on eligible reserve combatants with the requested id.
u32 btlSetReserveParameterById(void)
{
    // A word in the shared entry's halfword-aligned union needs a separate view.
    struct ParameterEntry {
        /* 0x000 */ u64 flags;
        /* 0x008 */ u8 unk008[0x154];
        /* 0x15C */ u32 parameter;
        /* 0x160 */ u8 unk160[6];
        /* 0x166 */ u16 id;
        /* 0x168 */ u8 unk168[0x2A0];
    };
    u32 id = scrGetArg(0);
    u32 parameter = scrGetArg(1);
    BtlMainStateA* battle = btlGetMainState();
    u64 active = g_battleMaskPresets[0];
    u64 eligible = g_battleMaskPresets[1];
    u64 excluded = g_battleMaskPresets[3];
    for (s32 i = 4; i < 0x36; ++i) {
        ParameterEntry* entry = reinterpret_cast<ParameterEntry*>(battle->entries) + i;
        if ((entry->flags & active) != 0 &&
            (entry->flags & excluded) == 0 &&
            (entry->flags & eligible) != 0 && entry->id == id) {
            entry->parameter = parameter;
        }
    }
    return 1;
}
}
