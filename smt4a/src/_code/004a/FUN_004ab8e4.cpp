/* NON_MATCHING: compiler removes the nonzero portrait guard and uses slot-relative addressing. */
#include "battle/btlUI.h"
#include "battle/PortraitPanel.h"
#include "util/CalleeContracts.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
extern "C" {
extern BtlUiGlobalsA g_btlUi;
void sysMemClear(void *memory, u32 size);
void FUN_00371c3c(s16 portrait, s32 kind);

// Reset the two battle portrait slots and prepare their offscreen slide-in positions.
void FUN_004ab8e4(void)
{
    // The panel begins at the end of the shared UI prefix; keep that prefix unchanged.
    struct UiPanelView { BtlUiA base; BattlePortraitPanel panel; };
    typedef char UiPanelOffset[offsetof(UiPanelView, panel) == 0x12FD0 ? 1 : -1];
    BtlUiA *ui = g_btlUi.ui;
    BattlePortraitPanel *panel = &((UiPanelView *)ui)->panel;
    sysMemClear(panel, sizeof(*panel));
    panel->state = 0;
    panel->frame = 0;
    for (u32 index = 0; index < 2; ++index) {
        BattlePortraitSlot *slot = &panel->slots[index];
        slot->state = 0;
        slot->x = 0;
        slot->y = 0;
        slot->requested = 0;
        switch ((u8)index) {
        case 0: slot->portrait = -1; break;
        case 1: slot->portrait = 669; break;
        default: slot->portrait = 0; break;
        }
        if (slot->portrait != 0 && !devilIsTextureLoaded((s16)slot->portrait, 1)) {
            FUN_00371c3c((s16)slot->portrait, 1);
            slot->requested = 1;
        }
    }
    TextureTableEntryIV *layout = asdTMTexTableEntryAt(13, 3024);
    panel->slots[0].state = 0;
    panel->slots[0].x = layout->y + 256;
    panel->slots[0].targetX = layout->x - 267;
    panel->slots[0].y = -41;
    panel->slots[0].targetY = layout->y;
    layout = asdTMTexTableEntryAt(13, 3042);
    panel->slots[1].state = 0;
    panel->slots[1].x = layout->y - 256;
    panel->slots[1].targetX = layout->x - 272;
    panel->slots[1].targetY = layout->y;
    panel->slots[1].y = 41;
    panel->elapsed = 0.0f;
    panel->duration = 0.0f;
    ui->state = 19;
}
}
