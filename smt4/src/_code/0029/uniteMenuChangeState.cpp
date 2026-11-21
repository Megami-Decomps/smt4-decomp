#include "ui/ButtonHelp.h"
#include "camp/Unite/UniteGlobals.h"
#include "status/StatusCamera.h"
#include "code/Code0029_Smt4.h"
#include "gamedata/UnitStats.h"

extern "C" {
void buttonHelpSetPreset(u32 preset);
const void *dataTableGet(u32 table, u32 group);
const UniteDescriptionEntry *dataTableGetEntries(const void *table);
u32 dataTableGetCount(const void *table);
void buttonHelpSetText(const char *text, u32 color);
s32 resourceRunOperationIfUnblocked(const void *cursor);
s32 listCursorGetRowIfUnblocked(const void *cursor);
void FUN_0029dc74(u32 id, StatBlock *member);
void unitInitializeFromSavedRecord(u32 id, StatBlock *member);
const void *partyMemberFindById(u32 id);
void FUN_0029da34(u32 mode, u32 enabled, u32 id, const void *member);
void buttonHelpShowSkillDetails(u32 id);
void menuSetModeAndResetTransitions(s32 mode);
void uiSpriteSetKeyframe(void *timer, s32 period, s32 value); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Row `index` of the unite help texts (data table 0x24, section 2: 0x55-byte strings), or NULL past the end. */
static __inline const char *uniteHelpTextAt(u32 index)
{
    const void *table = dataTableGet(0x24, 2);
    const char *text = (const char *)dataTableGetEntries(table);
    if (index < dataTableGetCount(table))
        return text + index * 0x55;
    return NULL;
}

/* Enter a unite-menu state, updating its help, selected member, and transition history. */
void uniteMenuChangeState(u32 state, s32 preservePrevious)
{
    UniteWork *work = g_unite;
    switch (state) {
    case 0x22:
    case 0x23:
        buttonHelpSetPreset(0x58);
        break;
    case 0x15:
    case 0x1C:
        buttonHelpSetPreset(0x9E);
        gameGlobalsSetSubScreenActive(1);
        FUN_0029c424(1);
        break;
    case 3:
        buttonHelpSetPreset(0x5C);
        break;
    case 0x0B: {
        buttonHelpSetPreset(0x53);
        buttonHelpSetText(uniteHelpTextAt(1), 0x323232FF);
        break;
    }
    case 0x0D: {
        buttonHelpSetPreset(0x54);
        u32 selected = resourceRunOperationIfUnblocked(work->firstListIV.cursor) +
                       listCursorGetRowIfUnblocked(work->firstListIV.cursor);
        u16 index = work->firstListIV.indices[selected];
        StatBlock member;
        if (work->firstListIV.kind == 0) {
            FUN_0029dc74(work->pairListIV.pairs[index].resultId, &member);
            FUN_0029da34(0, 1, work->pairListIV.pairs[index].resultId, &member);
        }
        if (work->firstListIV.kind == 1) {
            const void *selectedMember = partyMemberFindById(work->pairListIV.pairs[index].firstId);
            if (selectedMember == NULL) {
                unitInitializeFromSavedRecord(work->pairListIV.pairs[index].firstId, &member);
                selectedMember = &member;
            }
            FUN_0029da34(0, 1, work->pairListIV.pairs[index].firstId, selectedMember);
        }
        if (work->firstListIV.kind == 2) {
            const void *selectedMember = partyMemberFindById(work->pairListIV.pairs[index].secondId);
            if (selectedMember == NULL) {
                unitInitializeFromSavedRecord(work->pairListIV.pairs[index].secondId, &member);
                selectedMember = &member;
            }
            FUN_0029da34(0, 1, work->pairListIV.pairs[index].secondId, selectedMember);
        }
        break;
    }
    case 0x0F:
        if (work->state != 0x10 && work->state != 0x11 && work->state != 0x12) {
            buttonHelpSetPreset(0x55);
            u32 selected = resourceRunOperationIfUnblocked(work->secondListIV.cursor) +
                           listCursorGetRowIfUnblocked(work->secondListIV.cursor);
            buttonHelpShowSkillDetails(work->secondListIV.indices[selected]);
            menuSetModeAndResetTransitions(0x0E);
        }
        break;
    case 0x13:
        buttonHelpSetPreset(0x5D);
        if (work->eventFlagsIV.ready != 0) {
            buttonHelpSetSlot(2, 9, 0x44, 1);
            buttonHelpSetSlot(3, 0, 0, 1);
        }
        break;
    case 0x1A: {
        buttonHelpSetPreset(0x59);
        buttonHelpSetText(uniteHelpTextAt(1), 0x323232FF);
        break;
    }
    case 0x1B:
        buttonHelpSetPreset(0x5A);
        buttonHelpSetText(NULL, 0x323232FF);
        work->eventFlagsIV.opened = 1;
        break;
    case 0x21:
        work->history.saved = work->state;
        uiSpriteSetKeyframe(work->event.timer, 3, 0);
        gameGlobalsSetSubScreenActive(1);
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
    case 22:
    case 23:
    case 24:
    case 25:
    case 29:
    case 30:
    case 31:
    case 32:
        break;
    }
    if (preservePrevious != 0) {
        work->history.previous = work->state;
    }
    work->transition.frame = 0;
    work->state = state;
}
}
