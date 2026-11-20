/* NON_MATCHING: one instruction. In state 0x1B's request test retail reads the pending request through its copy
 * of the work pointer (ldrne r0, [r0, #0x488]); the build reads it through the function's own pointer (r4). */
#include "common.h"
#include <stddef.h>
#include "gamedata/DataTable.h"
#include "shard/Shard0032.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "gamedata/SaveSlotRecord.h"
#include "camp/Unite/UniteGlobals.h"

extern "C" {
void sysPlaySe(u32 id);
void buttonHelpSetText(const s8 *text, u32 color);
s32 buttonHelpGetPanelMode(void);
s32 resourceRunOperationIfUnblocked(ScrollSelection *list); // declcheck: local (the shared declaration does not compile here or changes this unit)
s32 listCursorGetRowIfUnblocked(const void *object); // declcheck: local (the shared declaration does not compile here or changes this unit)
void unitRecordBuild(s32 id, UnitRecord *out);
void unitRecordBuildFromSave(u32 id, UnitRecord *unit);
void FUN_0032d0c8(void *directory, u32 index, u16 id, void *record);
void skillHelpUpdateAttributeAndTarget(s32 id);
void FUN_002c8550(s32 mode);
void buttonHelpSelectSlot(u32 index, s32 kind, s32 value, s32 queue);
void FUN_00184b90(u8 *owner, s32 direction); // declcheck: local (the shared declaration does not compile here or changes this unit)
void gameGlobalsSetMenuOpenFlag(u8 value); // declcheck: local (the shared declaration does not compile here or changes this unit)
void FUN_00333dc8(u8 value); // declcheck: local (the shared declaration does not compile here or changes this unit)
void buttonHelpSetPanelState(u8 value); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Row `index` of the unite help texts (data table 0x24, section 2: 0x55-byte strings), or NULL past the end. */
static __inline const s8 *uniteHelpTextAt(u32 index)
{
    void *table = dataTableGet(0x24, 2);
    const s8 *text = (const s8 *)dataTableGetEntries(table);
    if (index < dataTableGetCount(table))
        return text + index * 0x55;
    return NULL;
}

/* Plays the sound of the unite state being entered, shows its help and switches to it. */
void uniteMenuChangeState(u32 state, s32 rememberPrevious)
{
    UniteWorkA *unite = g_unite;
    switch (state) {
    case 0x25:
    case 0x26:
    case 0x27:
        sysPlaySe(0x5A);
        break;
    case 0x16:
    case 0x1D:
    case 0x1F: {
        s32 panelMode = buttonHelpGetPanelMode();
        sysPlaySe(0xA0);
        gameGlobalsSetMenuOpenFlag(1);
        FUN_00333dc8(1);
        if (panelMode == 0)
            buttonHelpSetPanelState(0);
        break;
    }
    case 3:
        sysPlaySe(0x5E);
        break;
    case 0xB:
        sysPlaySe(0x55);
        buttonHelpSetText(uniteHelpTextAt(1), 0xF4F4F4FF);
        break;
    case 0xD: {
        sysPlaySe(0x56);
        u32 index = resourceRunOperationIfUnblocked(&unite->pairSort.pairList) + listCursorGetRowIfUnblocked(&unite->pairSort.pairList);
        u16 pair = unite->pairSort.sortedPairs[index];
        UnitRecord unit;
        if (unite->pairSort.pairKind == 0) {
            unitRecordBuild(unite->pairSort.pairs[pair].resultId, &unit);
            FUN_0032d0c8(NULL, 1, unite->pairSort.pairs[pair].resultId, &unit);
        }
        if (unite->pairSort.pairKind == 1) {
            void *record = slotRecordFindById(unite->pairSort.pairs[pair].firstId);
            if (record == NULL) {
                unitRecordBuildFromSave(unite->pairSort.pairs[pair].firstId, &unit);
                record = &unit;
            }
            FUN_0032d0c8(NULL, 1, unite->pairSort.pairs[pair].firstId, record);
        }
        if (unite->pairSort.pairKind == 2) {
            void *record = slotRecordFindById(unite->pairSort.pairs[pair].secondId);
            if (record == NULL) {
                unitRecordBuildFromSave(unite->pairSort.pairs[pair].secondId, &unit);
                record = &unit;
            }
            FUN_0032d0c8(NULL, 1, unite->pairSort.pairs[pair].secondId, record);
        }
        break;
    }
    case 0xF:
        if (g_unite->state != 0x10 && g_unite->state != 0x11 && g_unite->state != 0x12) {
            sysPlaySe(0x57);
            u32 index = resourceRunOperationIfUnblocked(&unite->inheritanceA.skillList) + listCursorGetRowIfUnblocked(&unite->inheritanceA.skillList);
            skillHelpUpdateAttributeAndTarget(unite->inheritanceA.skills[index]);
            FUN_002c8550(0xF);
        }
        break;
    case 0x13:
        sysPlaySe(0x5F);
        if (unite->returnState.helpAvailable != 0) {
            buttonHelpSelectSlot(2, 9, 0x44, 1);
            buttonHelpSelectSlot(3, 0, 0, 1);
        }
        break;
    case 0x1B:
        if (uniteRequest18Active(g_unite))
            sysPlaySe(0xA0);
        else
            sysPlaySe(0x5B);
        buttonHelpSetText(uniteHelpTextAt(1), 0xF4F4F4FF);
        break;
    case 0x1C:
        sysPlaySe(0x5C);
        buttonHelpSetText(NULL, 0xF4F4F4FF);
        unite->returnState.helpShown = 1;
        break;
    case 0x24:
        unite->history.saved = unite->state;
        FUN_00184b90((u8 *)unite, 3);
        gameGlobalsSetMenuOpenFlag(1);
        break;
    case 0:
    case 1:
    case 2:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 12:
    case 14:
    case 16:
    case 17:
    case 18:
    case 20:
    case 21:
    case 23:
    case 24:
    case 25:
    case 26:
    case 30:
    case 32:
    case 33:
    case 34:
    case 35:
        break;
    }
    if (rememberPrevious != 0)
        unite->history.previous = unite->state;
    unite->transition.frame = 0;
    unite->state = state;
}
} /* extern "C" */
