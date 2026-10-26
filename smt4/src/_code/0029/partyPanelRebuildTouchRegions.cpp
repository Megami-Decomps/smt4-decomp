/* NON_MATCHING: count-address hoisting and short-page branch placement differ; -O2 candidate. */
#include "ui/PartyPanelState.h"
#include "gamedata/SaveSlotTableIV.h"

struct PartyTouchState {
    u16 characters[4]; // panel 0x67c
    u16 demons[24]; // panel 0x684
    u16 previousPage; // panel 0x6b4
    u16 nextPage; // panel 0x6b6
    s32 count; // panel 0x6b8
};
struct PartyTouchPanel {
    u8 unk0000[0x2c];
    u32 page; // 0x2c
    u8 unk0030[0x12];
    u8 alternate; // 0x42
    u8 unk0043[0x639];
    PartyTouchState touch; // 0x67c
};
extern "C" {
extern PartyPanelState *g_partyPanel;
void ifTouchRegionRemove();
void __aeabi_memset4(void *, u32, u32);
u16 FUN_002b8584(s32, s32);

// Rebuild the character, demon and paging touch regions for the current party page.
void partyPanelRebuildTouchRegions()
{
    PartyTouchPanel *panel = (PartyTouchPanel *)g_partyPanel;
    for (s32 i = 0; i < panel->touch.count; ++i)
        ifTouchRegionRemove();
    panel->touch.count = 0;
    __aeabi_memset4(&panel->touch, 0x3c, 0xffffffff);
    if (panel->alternate != 0) {
        for (s32 i = 0; i < 4; ++i) {
            panel->touch.characters[i] = FUN_002b8584(0x19, i + 0x57);
            ++panel->touch.count;
        }
        for (s32 i = 0; i < gameGetSlotTable()->stockCount; ++i) {
            panel->touch.demons[i] = FUN_002b8584(0x19, i + 0x5b);
            ++panel->touch.count;
        }
        return;
    }
    for (s32 i = 0; i < 4; ++i) {
        panel->touch.characters[i] = FUN_002b8584(0x19, i + 0x2d);
        ++panel->touch.count;
    }
    s32 visible = 12;
    if (panel->page)
        visible = gameGetSlotTable()->stockCount - 12;
    else if (gameGetSlotTable()->stockCount < 12)
        visible = gameGetSlotTable()->stockCount;
    for (s32 i = 0; i < visible; ++i) {
        panel->touch.demons[i] = FUN_002b8584(0x19, i + 0x31);
        ++panel->touch.count;
    }
    panel->touch.previousPage = FUN_002b8584(0x19, 0x24);
    panel->touch.nextPage = FUN_002b8584(0x19, 0x25);
    panel->touch.count += 2;
}
}
