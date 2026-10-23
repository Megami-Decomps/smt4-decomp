/* NON_MATCHING: cached widget pointer replaces retail handle reloads across calls. */
#include "ui/PartyPanelState.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {
extern PartyPanelStateA *g_partyPanel;
void partyStatusIconTick(void *);
s16 *FUN_002c7e24(void);
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
        BoundIcon *icon = reinterpret_cast<BoundIcon *>(panel->handlesA[i]);
        partyStatusIconTick(icon);
        s16 *current = FUN_002c7e24();
        if (icon->unitIndex < 0) {
            if (*current < 0 && FUN_003f3f08(icon) != -1)
                result = FUN_003f3f08(icon);
        } else {
            SlotRecord *unit = gameGetSlotRecord(icon->unitIndex);
            if (unit->entryId == *current && FUN_003f3f08(icon) != -1)
                result = FUN_003f3f08(icon);
        }
    }
    for (s32 i = 0; i < 24; ++i) {
        BoundIcon *icon = reinterpret_cast<BoundIcon *>(panel->handlesB[i]);
        partyStatusIconTick(icon);
        s16 *current = FUN_002c7e24();
        if (icon->unitIndex < 0) {
            if (*current < 0 && FUN_003f3f08(icon) != -1)
                result = FUN_003f3f08(icon);
        } else {
            SlotRecord *unit = gameGetSlotRecord(icon->unitIndex);
            if (unit->entryId == *current && FUN_003f3f08(icon) != -1)
                result = FUN_003f3f08(icon);
        }
    }
    return result;
}
}
