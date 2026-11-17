/* NON_MATCHING: the touch-count address (r6) is hoisted to the entry instead of after the memset; everything else matches. */
#include "ui/PartyPanelState.h"
#include "gamedata/SaveSlotTableIV.h"

extern "C" {
void ifTouchRegionRemove();
void __aeabi_memset4(void *, u32, u32);
u16 ifTouchRegionAddRequested(s32, s32);

// Rebuild the character, demon and paging touch regions for the current party page.
void partyPanelRebuildTouchRegions()
{
    PartyPanelState *panel = g_partyPanel;
    s32 i;
    for (i = 0; i < panel->touch.count; ++i)
        ifTouchRegionRemove();
    panel->touch.count = 0;
    __aeabi_memset4(&panel->touch, 0x3c, 0xffffffff);
    if (panel->alternate != 0) {
        for (i = 0; i < 4; ++i) {
            panel->touch.characters[i] = ifTouchRegionAddRequested(0x19, i + 0x57);
            ++panel->touch.count;
        }
        for (i = 0; i < gameGetSlotTable()->stockCount; ++i) {
            panel->touch.demons[i] = ifTouchRegionAddRequested(0x19, i + 0x5b);
            ++panel->touch.count;
        }
        return;
    }
    for (i = 0; i < 4; ++i) {
        panel->touch.characters[i] = ifTouchRegionAddRequested(0x19, i + 0x2d);
        ++panel->touch.count;
    }
    s32 visible = 12;
    if (panel->page == 0) {
        if (gameGetSlotTable()->stockCount < 12)
            visible = gameGetSlotTable()->stockCount;
    } else {
        visible = gameGetSlotTable()->stockCount - 12;
    }
    for (i = 0; i < visible; ++i) {
        panel->touch.demons[i] = ifTouchRegionAddRequested(0x19, i + 0x31);
        ++panel->touch.count;
    }
    panel->touch.previousPage = ifTouchRegionAddRequested(0x19, 0x24);
    panel->touch.nextPage = ifTouchRegionAddRequested(0x19, 0x25);
    panel->touch.count += 2;
}
}
