/* NON_MATCHING: only the stock-cost loop test differs: retail loads the user (ldrsh r0) before the slot unit (r1) and compares r1 with r0; written either way round, armcc swaps one of the two. */
#include "ui/PartyPanel.h"
#include <stddef.h>
#include "gamedata/SaveSlotTableIV.h"

extern "C" {
extern PartyPanel *g_partyPanel;
s32 FUN_0029a924(u16 action);
s32 FUN_0029a9d4(u16 action, u32 mode);
s32 FUN_002621b4(u32 user, s32 target, u32 action, s32 *result);
s32 partyWidgetGetX(void *widget);
s32 partyWidgetGetCost(void *widget);
void partyWidgetSetValue(void *widget, s32 value);
void partyWidgetSetCost(void *widget, s32 cost);

void FUN_0026b7c0(void)
{
    struct PreviewValue { u8 prefix[0x40]; s32 value, cost; };
    struct StockSlot { s32 unit; u32 unk04; };
    struct PartyActionView {
        u8 unk000[0x36];
        u16 action;
        s16 user;
        u8 unk03A[0x63E];
        u8 protagonistActive;
        u8 unk679[0x4F];
        PreviewValue *protagonist;
        PreviewValue *party[3];
        PreviewValue *stock[24];
        StockSlot stockSlots[24];
    };
    typedef char PartyActionViewOffsets[
        offsetof(PartyActionView, protagonistActive) == 0x678 &&
        offsetof(PartyActionView, protagonist) == 0x6C8 &&
        offsetof(PartyActionView, stockSlots) == 0x738 ? 1 : -1];
    PartyActionView *panel = reinterpret_cast<PartyActionView *>(g_partyPanel);
    const SaveSlotTableIV *slots = gameGetSlotTable();
    s32 result = 0;
    if (panel->user < 0) {
        partyWidgetSetCost(panel->protagonist, -FUN_0029a9d4(panel->action, 1));
    } else {
        for (s32 index = 0; index < 3; ++index) {
            if (slots->active[index] == panel->user)
                partyWidgetSetCost(panel->party[index], -FUN_0029a924(panel->action));
        }
        for (s32 index = 0; index < 24; ++index) {
            if (panel->stockSlots[index].unit == panel->user)
                partyWidgetSetCost(panel->stock[index], -FUN_0029a924(panel->action));
        }
    }
    if (panel->protagonistActive) {
        FUN_002621b4(panel->user, -1, panel->action, &result);
        partyWidgetSetValue(panel->protagonist, result);
    }
    for (s32 index = 0; index < 3; ++index) {
        if (slots->active[index] >= 0) {
            FUN_002621b4(panel->user, slots->active[index], panel->action, &result);
            partyWidgetSetValue(panel->party[index], result);
        }
    }
    for (s32 index = 0; index < 24; ++index) {
        if (panel->stockSlots[index].unit >= 0) {
            FUN_002621b4(panel->user, panel->stockSlots[index].unit, panel->action, &result);
            partyWidgetSetValue(panel->stock[index], result);
        }
    }
    if (panel->user < 0) {
        FUN_00298d28(partyWidgetGetX(panel->protagonist), partyWidgetGetCost(panel->protagonist));
        return;
    }
    for (s32 index = 0; index < 24; ++index) {
        if (panel->stockSlots[index].unit == panel->user)
            FUN_00298d28(partyWidgetGetX(panel->stock[index]), partyWidgetGetCost(panel->stock[index]));
    }
}
}
