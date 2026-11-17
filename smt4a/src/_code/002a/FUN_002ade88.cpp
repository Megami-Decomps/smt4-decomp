/* NON_MATCHING: with the inlined.txt row for partyWidgetSetTransitionKind (strb r1, [r0, #40]) one diff is left: the reserve-row "same as the first pick" compare loads entryId into r0 and ids[0] into r1 (retail r1/r0). */
#include "ui/PartyPanelStateA.h"
#include "camp/Unite/UniteWork.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"

struct PartyPanelFusionResult {
    u8 available;  // 0x00
    u8 unk01[3];
    u32 reason;    // 0x04
    u16 resultId;  // 0x08
};

extern "C" {

u8 FUN_004da344(UniteWorkA *work, u32 first, u32 second, s32 special, PartyPanelFusionResult *output);
u32 FUN_002a4b28(u32 index);
void partyWidgetSetTransitionPending(PartyPanelWidget *widget, u8 value);
void partyWidgetSetTransitionKind(PartyPanelWidget *widget, u8 value);
void __aeabi_memset4(void *destination, u32 size, s32 value);

/* Refreshes the fusion availability flags and icons of the panel's reserve rows and slot cells. */
void FUN_002ade88(void)
{
    PartyPanelStateA *panel = g_partyPanel;
    SaveSlotTableA *slots = gameGetSlotTable();
    __aeabi_memset4(&panel->activeSlots[0], 4, 1);
    s32 i = 0;
    while (i < 3) {
        panel->fusionFlags[i] = 0;
        panel->fusionResultIds[i] = 0;
        partyWidgetSetTransitionPending(panel->characters[1 + i], 0);
        i++;
    }
    for (s32 i = 0; i < 24; ++i) {
        panel->fusionFlags[3 + i] = 0;
        panel->fusionResultIds[3 + i] = 0;
        panel->entries[i].available = 1;
        partyWidgetSetTransitionPending(panel->demons[i], 0);
    }
    s32 special;
    if (panel->panelState == 18) {
        special = 1;
    } else {
        special = 0;
    }
    panel->activeSlots[0] = 0;
    PartyPanelFusionResult out;
    for (s32 i = 0; i < 3; ++i) {
        if (slots->reserve[i] < 0) {
            panel->activeSlots[i + 1] = 0;
        } else if (panel->fusionParentCount >= 1 && panel->activeSlots[i + 1] != 0) {
            u16 entryId = gameGetSlotRecord(slots->reserve[i])->id;
            if (FUN_004da344(panel->unite, (u16)panel->fusionParentIds[0], entryId, special, &out) == 0) {
                panel->activeSlots[i + 1] = 0;
                switch (out.reason) {
                case 1:
                    panel->fusionFlags[i] |= 8;
                    break;
                case 2:
                    panel->fusionFlags[i] |= 2;
                    break;
                case 3:
                    panel->fusionFlags[i] |= 4;
                    break;
                }
                if (gameGetSlotRecord(slots->reserve[i])->id == panel->fusionParentIds[0]) {
                    panel->fusionFlags[i] |= 0x40;
                }
            } else if (FUN_002a4b28(out.resultId) == 0) {
                panel->fusionFlags[i] |= 0x80;
            }
            panel->fusionResultIds[i] = out.resultId;
        }
    }
    for (s32 i = 0; i < 3; ++i) {
        if (slots->reserve[i] >= 0 && (gameGetSlotRecord(slots->reserve[i])->ailments & 4) != 0) {
            panel->fusionFlags[i] |= 0x10;
        }
    }
    for (s32 i = 0; i < 24; ++i) {
        if (static_cast<s32>(panel->entries[i].packedIndex) < 0) {
            panel->entries[i].available = 0;
        } else {
            SlotRecordA *record = gameGetSlotRecord(static_cast<s32>(panel->entries[i].packedIndex));
            if ((record->ailments & 0x400) != 0) {
                panel->entries[i].available = 0;
                panel->fusionFlags[3 + i] |= 0x20;
            } else {
                if ((record->ailments & 4) != 0) {
                    panel->fusionFlags[3 + i] |= 0x10;
                }
                if (panel->fusionParentCount >= 1 && panel->entries[i].available != 0) {
                    if (FUN_004da344(panel->unite, (u16)panel->fusionParentIds[0], record->id, special, &out) == 0) {
                        panel->entries[i].available = 0;
                        switch (out.reason) {
                        case 1:
                            panel->fusionFlags[3 + i] |= 8;
                            break;
                        case 2:
                            panel->fusionFlags[3 + i] |= 2;
                            break;
                        case 3:
                            panel->fusionFlags[3 + i] |= 4;
                            break;
                        }
                        if (panel->fusionParentIds[0] == record->id) {
                            panel->fusionFlags[3 + i] |= 0x40;
                        }
                    } else if (FUN_002a4b28(out.resultId) == 0) {
                        panel->fusionFlags[3 + i] |= 0x80;
                    }
                    panel->fusionResultIds[3 + i] = out.resultId;
                }
            }
        }
    }
    for (s32 j = 0; j < panel->fusionParentCount; ++j) {
        if (panel->fusionParentIds[j] >= 0) {
            SlotRecordA *found = slotRecordFindById((u16)panel->fusionParentIds[j]);
            if (found != NULL) {
                for (s32 i = 0; i < 3; ++i) {
                    if (slots->reserve[i] < 0)
                        continue;
                    SlotRecordA *member = gameGetSlotRecord(slots->reserve[i]);
                    if (member->id == found->id) {
                        panel->activeSlots[i + 1] = 0;
                        partyWidgetSetTransitionKind(panel->characters[1 + i], 0);
                        partyWidgetSetTransitionPending(panel->characters[1 + i], 1);
                    }
                }
                for (s32 i = 0; i < 24; ++i) {
                    if (static_cast<s32>(panel->entries[i].packedIndex) < 0) {
                        continue;
                    }
                    SlotRecordA *record = gameGetSlotRecord(static_cast<s32>(panel->entries[i].packedIndex));
                    if (record->id == found->id) {
                        panel->entries[i].available = 0;
                        partyWidgetSetTransitionKind(panel->demons[i], 0);
                        partyWidgetSetTransitionPending(panel->demons[i], 1);
                    }
                }
            }
        }
    }
}

} /* extern "C" */
