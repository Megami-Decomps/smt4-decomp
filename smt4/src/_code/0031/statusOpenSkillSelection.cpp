/* NON_MATCHING: retail loads the last skill ID and derives the first; the build does the reverse. The prologue and zero-ID guard also schedule differently. */
#include "ui/UiSpriteApi.h"
#include "status/StatusDown.h"


/* Switches the screen to a new state, remembering the old one. */
static __inline void statusSkillSelectionEnter(StatusDownState *screen, s32 next)
{
    screen->stateTimer = 0;
    screen->track.previous = screen->track.state;
    screen->track.state = next;
}

extern "C" {
s32 FUN_00262cb0(u16 id);
s32 table8Type5GetValue(u32 id);
void uniteRequestScriptEntry(s32 mode);
void buttonHelpSetPreset(s32 preset);
s32 statusGetAvailableChoiceCount();
void gridNavigationConfigure(void *selector, s32 count, s32 rows, s32 wrap, s32, s32);

// Gather enabled status skills and open the selector at the first unavailable slot.
void statusOpenSkillSelection(u16 selectedId, u8 mode)
{
    StatusDownState *screen = g_statusDown;
    s32 count = 0;
    screen->selectedId = selectedId;
    screen->mode = mode;
    screen->skillWords[0] = 0;
    screen->skillWords[1] = 0;
    screen->skillWords[2] = 0;
    screen->skillWords[3] = 0;
    const u32 lastSkill = 0x802;
    const u32 firstSkill = lastSkill - 99;
    for (u32 id = firstSkill; id <= lastSkill; ++id) {
        // ID zero is reserved by the skill-table iterator.
        while (id == 0)
            ++id;
        if (FUN_00262cb0(static_cast<u16>(id)) && table8Type5GetValue(id)) {
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
        scrollListSetSelectionMarkChanged(reinterpret_cast<ScrollSelection *>(screen->selector), count);
        screen->nextState = 22;
    }
    statusSkillSelectionEnter(g_statusDown, 1);
}
}
