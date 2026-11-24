/* NON_MATCHING: 6 lines, one register choice. With the inlined.txt row for partyWidgetSetTransitionKind
 * (strb r1, [r0, #40]) only the reserve rows' "same as the first parent" compare differs: retail loads the
 * member's id into r1 and fusionParentIds[0] into r0 (`cmp r1, r0`), this build the id into r0 and the parent
 * into r1. The operand order, a local for either side, the first call's id local and an early-out layout of the
 * availability test all compile to the same code or move other rows. So do an inline id getter around
 * gameGetSlotRecord, casts on either side, and a member pointer local (16-20 lines); a shared "is the first
 * parent" test for this row and the demon rows' (which retail compares the other way round, parent in r0 and
 * id in r1 as well) is worse (10-32 lines).
 * The choice toggles with the record locals around it: IV's partyPanelRefreshFusionParents had the same trade in
 * its stock loop and matches with the entry's index read in the test and in the call instead of a local, and
 * here a `member` local for this row or the last loops' tests written without theirs flips the last loops'
 * compares instead (12-18 lines); no combination of those spellings over the four lookups reaches this row. */
#include "ui/PartyPanelStateA.h"
#include "camp/Unite/UniteWork.h"
#include "camp/Unite/FusionAvailability.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"

extern "C" {

u32 compendiumEntryIsRegistered(u32 index);
void __aeabi_memset4(void *destination, u32 size, s32 value);

/* Refreshes the fusion availability flags and icons of the panel's reserve rows and slot cells. */
void partyPanelRefreshFusionAvailability(void)
{
    PartyPanelStateA *panel = g_partyPanel;
    SaveSlotTableA *slots = gameGetSlotTable();
    __aeabi_memset4(panel->activeSlots, sizeof(panel->activeSlots), 1);
    for (s32 i = 0; i < 3; ++i) {
        panel->fusionFlags[i] = 0;
        panel->fusionResultIds[i] = 0;
        partyWidgetSetTransitionPending(panel->characters[1 + i], 0);
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
    FusionAvailability out;
    for (s32 i = 0; i < 3; ++i) {
        if (slots->reserve[i] < 0) {
            panel->activeSlots[i + 1] = 0;
        } else if (panel->fusionParentCount >= 1 && panel->activeSlots[i + 1] != 0) {
            u16 entryId = gameGetSlotRecord(slots->reserve[i])->id;
            if (fusionCheckPairAvailability(panel->unite, (u16)panel->fusionParentIds[0], entryId, special, &out) == 0) {
                panel->activeSlots[i + 1] = 0;
                switch (out.reason) {
                case FUSION_REFUSAL_NO_RESULT:
                    panel->fusionFlags[i] |= PARTY_PANEL_FUSION_NO_RESULT;
                    break;
                case FUSION_REFUSAL_LEVEL:
                    panel->fusionFlags[i] |= PARTY_PANEL_FUSION_OVER_LEVEL;
                    break;
                case FUSION_REFUSAL_OWNED:
                    panel->fusionFlags[i] |= PARTY_PANEL_FUSION_OWNED;
                    break;
                }
                if (gameGetSlotRecord(slots->reserve[i])->id == panel->fusionParentIds[0]) {
                    panel->fusionFlags[i] |= PARTY_PANEL_FUSION_SAME_AS_FIRST;
                }
            } else if (compendiumEntryIsRegistered(out.resultId) == 0) {
                panel->fusionFlags[i] |= PARTY_PANEL_FUSION_NEW_RESULT;
            }
            panel->fusionResultIds[i] = out.resultId;
        }
    }
    for (s32 i = 0; i < 3; ++i) {
        if (slots->reserve[i] >= 0 && (gameGetSlotRecord(slots->reserve[i])->ailments & 4) != 0) {
            panel->fusionFlags[i] |= PARTY_PANEL_FUSION_AILMENT_BIT2;
        }
    }
    for (s32 i = 0; i < 24; ++i) {
        if ((s32)panel->entries[i].packedIndex < 0) {
            panel->entries[i].available = 0;
        } else {
            SlotRecordA *record = gameGetSlotRecord((s32)panel->entries[i].packedIndex);
            if ((record->ailments & 0x400) != 0) {
                panel->entries[i].available = 0;
                panel->fusionFlags[3 + i] |= PARTY_PANEL_FUSION_AILMENT_BIT10;
            } else {
                if ((record->ailments & 4) != 0) {
                    panel->fusionFlags[3 + i] |= PARTY_PANEL_FUSION_AILMENT_BIT2;
                }
                if (panel->fusionParentCount >= 1 && panel->entries[i].available != 0) {
                    if (fusionCheckPairAvailability(panel->unite, (u16)panel->fusionParentIds[0], record->id, special, &out) == 0) {
                        panel->entries[i].available = 0;
                        switch (out.reason) {
                        case FUSION_REFUSAL_NO_RESULT:
                            panel->fusionFlags[3 + i] |= PARTY_PANEL_FUSION_NO_RESULT;
                            break;
                        case FUSION_REFUSAL_LEVEL:
                            panel->fusionFlags[3 + i] |= PARTY_PANEL_FUSION_OVER_LEVEL;
                            break;
                        case FUSION_REFUSAL_OWNED:
                            panel->fusionFlags[3 + i] |= PARTY_PANEL_FUSION_OWNED;
                            break;
                        }
                        if (panel->fusionParentIds[0] == record->id) {
                            panel->fusionFlags[3 + i] |= PARTY_PANEL_FUSION_SAME_AS_FIRST;
                        }
                    } else if (compendiumEntryIsRegistered(out.resultId) == 0) {
                        panel->fusionFlags[3 + i] |= PARTY_PANEL_FUSION_NEW_RESULT;
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
                    if ((s32)panel->entries[i].packedIndex < 0) {
                        continue;
                    }
                    SlotRecordA *record = gameGetSlotRecord((s32)panel->entries[i].packedIndex);
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
