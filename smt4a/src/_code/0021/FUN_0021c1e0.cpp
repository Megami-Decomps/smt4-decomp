/* NON_MATCHING: handle reloads now follow retail; remaining differences are the weak-hook NOPs after the unit-index tests and register assignment. */
#include "ui/PartyPanelStateA.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {
void partyStatusIconTick(void *);
s16 *gameGlobalsGetBlock1390(void);
s32 FUN_003f3f08(void *);

// Tick both icon lists and return the last selected icon matching the current unit.
s32 FUN_0021c1e0(void)
{
    // The widget's unit binding is beyond the shared widget prefix.
    struct BoundIcon {
        u8 prefix[0x34];
        s32 unitIndex;
    };
    PartyPanelStateA *panel = g_partyPanel;
    s32 result = -1;
    for (s32 i = 0; i < 4; ++i) {
        partyStatusIconTick(reinterpret_cast<void *>(panel->characters[i]));
        s16 *current = gameGlobalsGetBlock1390();
        if (reinterpret_cast<BoundIcon *>(panel->characters[i])->unitIndex < 0) {
            if (*current < 0 && FUN_003f3f08(reinterpret_cast<void *>(panel->characters[i])) != -1)
                result = FUN_003f3f08(reinterpret_cast<void *>(panel->characters[i]));
        } else {
            SlotRecordA *unit = gameGetSlotRecord(reinterpret_cast<BoundIcon *>(panel->characters[i])->unitIndex);
            if (unit->id == *current && FUN_003f3f08(reinterpret_cast<void *>(panel->characters[i])) != -1)
                result = FUN_003f3f08(reinterpret_cast<void *>(panel->characters[i]));
        }
    }
    for (s32 i = 0; i < 24; ++i) {
        partyStatusIconTick(reinterpret_cast<void *>(panel->demons[i]));
        s16 *current = gameGlobalsGetBlock1390();
        if (reinterpret_cast<BoundIcon *>(panel->demons[i])->unitIndex < 0) {
            if (*current < 0 && FUN_003f3f08(reinterpret_cast<void *>(panel->demons[i])) != -1)
                result = FUN_003f3f08(reinterpret_cast<void *>(panel->demons[i]));
        } else {
            SlotRecordA *unit = gameGetSlotRecord(reinterpret_cast<BoundIcon *>(panel->demons[i])->unitIndex);
            if (unit->id == *current && FUN_003f3f08(reinterpret_cast<void *>(panel->demons[i])) != -1)
                result = FUN_003f3f08(reinterpret_cast<void *>(panel->demons[i]));
        }
    }
    return result;
}
}
