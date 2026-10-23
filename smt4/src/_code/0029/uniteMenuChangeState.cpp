/* NON_MATCHING: ARMCC clusters the switch instead of retail's dense 36-entry table and uses a smaller saved-register set. */
#include "shard/W5_W5Match2_UniteWork.h"

extern "C" {
extern UniteWork *g_unite;
void buttonHelpSetPreset(u32 preset);
const void *dataTableGet(u32 table, u32 group);
const UniteDescriptionEntry *dataTableGetEntries(const void *table);
u32 dataTableGetCount(const void *table);
void FUN_0029ee6c(const char *text, u32 color);
s32 FUN_0029efc0(const void *cursor);
s32 FUN_0029efa8(const void *cursor);
void FUN_0029dc74(u32 id, void *member);
void unitInitializeFromSavedRecord(u32 id, void *member);
const void *partyMemberFindById(u32 id);
void FUN_0029da34(u32 mode, u32 enabled, u32 id, const void *member);
void buttonHelpShowSkillDetails(u32 id);
void menuSetModeAndResetTransitions(s32 mode);
void FUN_002b8454(s32 first, s32 second, s32 third, s32 enabled);
void FUN_002a0cc8(s32 enabled);
void FUN_0029c424(s32 enabled);
void timerStart(void *timer, s32 period, s32 value);

/* Enter a unite-menu state, updating its help, selected member, and transition history. */
void uniteMenuChangeState(u32 state, s32 preservePrevious)
{
    UniteWork *work = g_unite;
    u8 member[1552];
    switch (state) {
    case 3:
        buttonHelpSetPreset(0x5C);
        break;
    case 0x0B: {
        buttonHelpSetPreset(0x53);
        const void *table = dataTableGet(0x24, 2);
        const UniteDescriptionEntry *entry = dataTableGetEntries(table);
        const char *text = dataTableGetCount(table) > 1 ? entry->text : NULL;
        FUN_0029ee6c(text, 0x323232FF);
        break;
    }
    case 0x0D: {
        buttonHelpSetPreset(0x54);
        s32 selected = FUN_0029efc0(work->firstListIV.cursor);
        selected += FUN_0029efa8(work->firstListIV.cursor);
        u32 index = work->firstListIV.indices[selected];
        const UnitePairEntryIV *pair = &work->pairListIV.pairs[index];
        if (work->firstListIV.kind == 0) {
            FUN_0029dc74(pair->resultId, member);
            FUN_0029da34(0, 1, pair->resultId, member);
        }
        if (work->firstListIV.kind == 1) {
            const void *selectedMember = partyMemberFindById(pair->firstId);
            if (selectedMember == NULL) {
                unitInitializeFromSavedRecord(pair->firstId, member);
                selectedMember = member;
            }
            FUN_0029da34(0, 1, pair->firstId, selectedMember);
        }
        if (work->firstListIV.kind == 2) {
            const void *selectedMember = partyMemberFindById(pair->secondId);
            if (selectedMember == NULL) {
                unitInitializeFromSavedRecord(pair->secondId, member);
                selectedMember = member;
            }
            FUN_0029da34(0, 1, pair->secondId, selectedMember);
        }
        break;
    }
    case 0x0F:
        if (work->state != 0x10 && work->state != 0x11 && work->state != 0x12) {
            buttonHelpSetPreset(0x55);
            s32 selected = FUN_0029efc0(work->secondListIV.cursor);
            selected += FUN_0029efa8(work->secondListIV.cursor);
            buttonHelpShowSkillDetails(work->secondListIV.indices[selected]);
            menuSetModeAndResetTransitions(0x0E);
        }
        break;
    case 0x13:
        buttonHelpSetPreset(0x5D);
        if (work->eventFlagsIV.ready != 0) {
            FUN_002b8454(2, 9, 0x44, 1);
            FUN_002b8454(3, 0, 0, 1);
        }
        break;
    case 0x15:
    case 0x1C:
        buttonHelpSetPreset(0x9E);
        FUN_002a0cc8(1);
        FUN_0029c424(1);
        break;
    case 0x1A: {
        buttonHelpSetPreset(0x59);
        const void *table = dataTableGet(0x24, 2);
        const UniteDescriptionEntry *entry = dataTableGetEntries(table);
        const char *text = dataTableGetCount(table) > 1 ? entry->text : NULL;
        FUN_0029ee6c(text, 0x323232FF);
        break;
    }
    case 0x1B:
        buttonHelpSetPreset(0x5A);
        FUN_0029ee6c(NULL, 0x323232FF);
        work->eventFlagsIV.opened = 1;
        break;
    case 0x21:
        work->history.saved = work->state;
        timerStart(work->event.timer, 3, 0);
        FUN_002a0cc8(1);
        break;
    case 0x22:
    case 0x23:
        buttonHelpSetPreset(0x58);
        break;
    }
    if (preservePrevious != 0) {
        work->history.previous = work->state;
    }
    work->transition.frame = 0;
    work->state = state;
}
}
