#include "ui/UiSpriteApi.h"
#include "status/StatusDown.h"
#include <string.h>

extern "C" {
s32 FUN_00262cb0(u16 id);
s32 table8Type5GetValue(u32 id);
void uniteRequestScriptEntry(s32 mode);
void buttonHelpSetPreset(s32 preset);
s32 statusGetAvailableChoiceCount();
void gridNavigationConfigure(void *selector, s32 count, s32 rows, s32 wrap, s32, s32);

enum {
    STATUS_LAST_SELECTABLE_SKILL = 0x802,
    STATUS_SELECTABLE_SKILL_COUNT = 100
};

/* Gathers enabled status skills and opens the selector at the first unavailable slot. */
void statusOpenSkillSelection(u16 selectedId, u8 mode)
{
    StatusDownState *screen = g_statusDown;
    s32 count = 0;
    screen->selectedId = selectedId;
    screen->mode = mode;
    memset(screen->skillIds, 0, sizeof(screen->skillIds));
    const u32 lastSkill = STATUS_LAST_SELECTABLE_SKILL;
    const u32 firstSkill = lastSkill - (STATUS_SELECTABLE_SKILL_COUNT - 1);
    for (u32 id = firstSkill; id <= lastSkill; ++id) {
        /* ID zero is reserved by the skill-table iterator. */
        if (id == 0) {
            continue;
        }
        if (FUN_00262cb0((u16)id) && table8Type5GetValue(id)) {
            screen->skillIds[count++] = id;
        }
    }
    uniteRequestScriptEntry(14);
    buttonHelpSetPreset(5);
    uiSpriteSetKeyframe(screen->sprites, 1, 0);
    if (count >= statusGetAvailableChoiceCount()) {
        gridNavigationConfigure(screen->selector, statusGetAvailableChoiceCount() + 1, 9, 1, 1, 1);
        screen->nextState = 25;
    } else {
        gridNavigationConfigure(screen->selector, statusGetAvailableChoiceCount(), 9, 1, 1, 1);
        scrollListSetSelectionMarkChanged((ScrollSelection *)screen->selector, count);
        screen->nextState = 22;
    }
    statusDownEnterState(g_statusDown, 1);
}
} /* extern "C" */
