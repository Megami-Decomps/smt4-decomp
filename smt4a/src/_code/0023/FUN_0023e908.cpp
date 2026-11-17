/* NON_MATCHING: only the count field address (`add r6, r4, #0xa00`) is hoisted above the first loop here; retail forms it after the handle reset. */
#include "ui/PartyPanelStateA.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
void ifTouchRegionRemove(void);
u16 FUN_001643b4(u32, s32);
void __aeabi_memset4(void *, u32, s32);

struct RosterCountView { u8 prefix[0x1CA3]; u8 count; };
// Removes the panel's touch regions and clears its handle table.
static __inline void touchPanelClearRegions(PartyPanelStateA *panel)
{
    for (s32 i = 0; i < panel->touch.count; ++i)
        ifTouchRegionRemove();
    panel->touch.count = 0;
    __aeabi_memset4(&panel->touch, offsetof(PartyPanelTouchRegions, count), -1);
}

// Rebuilds the party panel's touch regions for the current page or the alternate roster view.
void FUN_0023e908(void)
{
    PartyPanelStateA *panel = g_partyPanel;
    touchPanelClearRegions(panel);
    if (panel->alternate) {
        for (s32 i = 0; i < 4; ++i) {
            panel->touch.characters[i] = FUN_001643b4(0x11, i + 0x57);
            ++panel->touch.count;
        }
        for (s32 i = 0; i < reinterpret_cast<RosterCountView *>(gameGetSlotTable())->count; ++i) {
            panel->touch.demons[i] = FUN_001643b4(0x11, i + 0x5B);
            ++panel->touch.count;
        }
    } else {
        for (s32 i = 0; i < 4; ++i) {
            panel->touch.characters[i] = FUN_001643b4(0x11, i + 0x2D);
            ++panel->touch.count;
        }
        s32 visibleCount = 12;
        if (panel->page == 0) {
            if (reinterpret_cast<RosterCountView *>(gameGetSlotTable())->count < 12)
                visibleCount = reinterpret_cast<RosterCountView *>(gameGetSlotTable())->count;
        } else {
            visibleCount = reinterpret_cast<RosterCountView *>(gameGetSlotTable())->count - 12;
        }
        for (s32 i = 0; i < visibleCount; ++i) {
            panel->touch.demons[i] = FUN_001643b4(0x11, i + 0x31);
            ++panel->touch.count;
        }
        panel->touch.previousPage = FUN_001643b4(0x11, 0x24);
        panel->touch.nextPage = FUN_001643b4(0x11, 0x25);
        panel->touch.count += 2;
    }
}
}
