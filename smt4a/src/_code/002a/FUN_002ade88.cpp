/* NON_MATCHING: three scheduling/register diffs left: the reserve-row fusion call loads record->entryId after the out-pointer setup (retail right after gameGetSlotRecord), and the reserve-row and cell-row entryId compares swap r0/r1 (retail ldrh r1 + ldr r0 / ldrh r0 + ldrh r1). */
#include "common.h"
#include <stddef.h>
#include "ui/PartyPanelState.h"
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "gamedata/SaveSlotTable.h"

// The panel past PartyPanelStateA's 0xA80 bytes: the slot cells, the picked ids and the per-row status.
struct PartyPanelCell {
    s32 slot;   // 0x00
    u16 value;  // 0x04
    u8 unk06[2];
};

struct PartyPanelFusionResult {
    u8 available;  // 0x00
    u8 unk01[3];
    u32 reason;    // 0x04
    u16 resultId;  // 0x08
};

struct PartyPanelRefreshState : PartyPanelStateA {
    PartyPanelCell cells[24];         // 0xA80
    u8 unkB40[0xE7C - 0xB40];
    s32 ids[2];                       // 0xE7C
    s32 idCount;                      // 0xE84
    u8 unkE88[0xFD0 - 0xE88];
    u32 flags[27];                    // 0xFD0 (3 reserve rows, then 24 slots)
    u8 unk103C[2];
    u16 icons[27];                    // 0x103E
    u8 unk1074[8];
    UniteWork *unite;                 // 0x107C
};
typedef char PartyPanelRefreshOffsetsCheck[
    offsetof(PartyPanelRefreshState, cells) == 0xA80 && offsetof(PartyPanelRefreshState, ids) == 0xE7C &&
    offsetof(PartyPanelRefreshState, idCount) == 0xE84 && offsetof(PartyPanelRefreshState, flags) == 0xFD0 &&
    offsetof(PartyPanelRefreshState, icons) == 0x103E && offsetof(PartyPanelRefreshState, unite) == 0x107C ? 1 : -1];

extern "C" {

extern PartyPanelRefreshState *g_partyPanel;

u8 FUN_004da344(UniteWork *work, u32 first, u32 second, s32 special, PartyPanelFusionResult *output);
u32 FUN_002a4b28(u32 index);
SlotRecord *slotRecordFindById(u32 id);
void partyWidgetSetTransitionPending(PartyPanelWidget *widget, u8 value);
void partyWidgetSetTransitionKind(PartyPanelWidget *widget, u8 value);
void __aeabi_memset4(void *destination, u32 size, s32 value);

/* Refreshes the fusion availability flags and icons of the panel's reserve rows and slot cells. */
void FUN_002ade88(void)
{
    PartyPanelRefreshState *panel = g_partyPanel;
    SaveSlotTable *slots = gameGetSlotTable();
    __aeabi_memset4(&panel->animation.preview.protagonistAvailable, 4, 1);
    s32 i = 0;
    while (i < 3) {
        panel->flags[i] = 0;
        panel->icons[i] = 0;
        partyWidgetSetTransitionPending(panel->characters[1 + i], 0);
        i++;
    }
    for (s32 i = 0; i < 24; ++i) {
        panel->flags[3 + i] = 0;
        panel->icons[3 + i] = 0;
        panel->cells[i].value = 1;
        partyWidgetSetTransitionPending(panel->demons[i], 0);
    }
    s32 special;
    if (panel->animation.mode == 18) {
        special = 1;
    } else {
        special = 0;
    }
    panel->animation.preview.protagonistAvailable = 0;
    PartyPanelFusionResult out;
    for (s32 i = 0; i < 3; ++i) {
        if (slots->reserve[i] < 0) {
            panel->animation.preview.partyAvailable[i] = 0;
        } else if (panel->idCount >= 1 && panel->animation.preview.partyAvailable[i] != 0) {
            SlotRecord *record = gameGetSlotRecord(slots->reserve[i]);
            if (FUN_004da344(panel->unite, (u16)panel->ids[0], record->entryId, special, &out) == 0) {
                panel->animation.preview.partyAvailable[i] = 0;
                switch (out.reason) {
                case 1:
                    panel->flags[i] |= 8;
                    break;
                case 2:
                    panel->flags[i] |= 2;
                    break;
                case 3:
                    panel->flags[i] |= 4;
                    break;
                }
                if (panel->ids[0] == gameGetSlotRecord(slots->reserve[i])->entryId) {
                    panel->flags[i] |= 0x40;
                }
            } else if (FUN_002a4b28(out.resultId) == 0) {
                panel->flags[i] |= 0x80;
            }
            panel->icons[i] = out.resultId;
        }
    }
    for (s32 i = 0; i < 3; ++i) {
        if (slots->reserve[i] >= 0 && (gameGetSlotRecord(slots->reserve[i])->status.mask & 4) != 0) {
            panel->flags[i] |= 0x10;
        }
    }
    for (s32 i = 0; i < 24; ++i) {
        if (panel->cells[i].slot < 0) {
            panel->cells[i].value = 0;
        } else {
            SlotRecord *record = gameGetSlotRecord(panel->cells[i].slot);
            if ((record->status.mask & 0x400) != 0) {
                panel->cells[i].value = 0;
                panel->flags[3 + i] |= 0x20;
            } else {
                if ((record->status.mask & 4) != 0) {
                    panel->flags[3 + i] |= 0x10;
                }
                if (panel->idCount >= 1 && panel->cells[i].value != 0) {
                    if (FUN_004da344(panel->unite, (u16)panel->ids[0], record->entryId, special, &out) == 0) {
                        panel->cells[i].value = 0;
                        switch (out.reason) {
                        case 1:
                            panel->flags[3 + i] |= 8;
                            break;
                        case 2:
                            panel->flags[3 + i] |= 2;
                            break;
                        case 3:
                            panel->flags[3 + i] |= 4;
                            break;
                        }
                        if (panel->ids[0] == record->entryId) {
                            panel->flags[3 + i] |= 0x40;
                        }
                    } else if (FUN_002a4b28(out.resultId) == 0) {
                        panel->flags[3 + i] |= 0x80;
                    }
                    panel->icons[3 + i] = out.resultId;
                }
            }
        }
    }
    for (s32 j = 0; j < panel->idCount; ++j) {
        if (panel->ids[j] >= 0) {
            SlotRecord *found = slotRecordFindById((u16)panel->ids[j]);
            if (found != NULL) {
                for (s32 i = 0; i < 3; ++i) {
                    if (slots->reserve[i] >= 0 && gameGetSlotRecord(slots->reserve[i])->entryId == found->entryId) {
                        panel->animation.preview.partyAvailable[i] = 0;
                        partyWidgetSetTransitionKind(panel->characters[1 + i], 0);
                        partyWidgetSetTransitionPending(panel->characters[1 + i], 1);
                    }
                }
                for (s32 i = 0; i < 24; ++i) {
                    if (panel->cells[i].slot < 0) {
                        continue;
                    }
                    SlotRecord *record = gameGetSlotRecord(panel->cells[i].slot);
                    if (record->entryId == found->entryId) {
                        panel->cells[i].value = 0;
                        partyWidgetSetTransitionKind(panel->demons[i], 0);
                        partyWidgetSetTransitionPending(panel->demons[i], 1);
                    }
                }
            }
        }
    }
}

} /* extern "C" */
