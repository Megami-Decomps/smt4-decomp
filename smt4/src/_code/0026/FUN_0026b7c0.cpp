/* NON_MATCHING: protagonist branch placement and preview pointer/value store registers differ; final value/cost loads combine into LDRD instead of accessor calls' retained loads/NOPs. */
#include "ui/PartyPanel.h"
#include <stddef.h>
#include "gamedata/SaveSlotTableIV.h"

extern "C" {
extern PartyPanel *g_partyPanel;
s32 FUN_0029a924(u16 action);
s32 FUN_0029a9d4(u16 action, u32 mode);
s32 FUN_002621b4(u32 user, s32 target, u32 action, s32 *result);

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
    if (panel->user >= 0) {
        for (s32 index = 0; index < 3; ++index) {
            if (slots->active[index] == panel->user)
                panel->party[index]->cost = -FUN_0029a924(panel->action);
        }
        for (s32 index = 0; index < 24; ++index) {
            if (panel->stockSlots[index].unit == panel->user)
                panel->stock[index]->cost = -FUN_0029a924(panel->action);
        }
    } else {
        panel->protagonist->cost = -FUN_0029a9d4(panel->action, 1);
    }
    if (panel->protagonistActive) {
        FUN_002621b4(panel->user, -1, panel->action, &result);
        panel->protagonist->value = result;
    }
    for (s32 index = 0; index < 3; ++index) {
        if (slots->active[index] >= 0) {
            FUN_002621b4(panel->user, slots->active[index], panel->action, &result);
            panel->party[index]->value = result;
        }
    }
    for (s32 index = 0; index < 24; ++index) {
        if (panel->stockSlots[index].unit >= 0) {
            FUN_002621b4(panel->user, panel->stockSlots[index].unit, panel->action, &result);
            panel->stock[index]->value = result;
        }
    }
    if (panel->user < 0) {
        FUN_00298d28(panel->protagonist->value, panel->protagonist->cost);
        return;
    }
    for (s32 index = 0; index < 24; ++index) {
        if (panel->stockSlots[index].unit == panel->user)
            FUN_00298d28(panel->stock[index]->value, panel->stock[index]->cost);
    }
}
}
