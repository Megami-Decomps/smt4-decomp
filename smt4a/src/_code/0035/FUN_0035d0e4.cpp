/* NON_MATCHING: Retail mov r5, r0 differs from recovered ldr r1, [pc, #132]. */
#include "ui/PartyPanelStateA.h"

/* The protagonist widget as this function sees it (the widget is not the panel). */
struct PartyPanelControlView {
    u8 unk00[0x34];                 // 0x00
    s32 unk34;                      // 0x34
};

extern "C" {
void __aeabi_memcpy4(void* destination, const void* source, u32 size);
void partyPanelRefreshFromSlotTable(void);
void FUN_0023f900(void);

// Update the panel mode, copying its saved data when enabled or resetting it when disabled.
void FUN_0035d0e4(s32 mode)
{
    PartyPanelStateA* panel = g_partyPanel;
    if (panel == NULL || panel->layoutMode == mode) {
        return;
    }

    panel->layoutMode = mode;
    reinterpret_cast<PartyPanelControlView *>(panel->characters[0])->unk34 = mode == 0 ? -1 : -2;

    if (mode != 0) {
        __aeabi_memcpy4(&panel->fullGrid, &panel->partyGrid, sizeof(GridNavigation));
        __aeabi_memcpy4(&panel->fullGridAlternate, &panel->partyGrid, sizeof(GridNavigation));
    } else {
        partyPanelRefreshFromSlotTable();
    }
    FUN_0023f900();
}
}
