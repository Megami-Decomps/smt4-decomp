/* NON_MATCHING: retail retains an unreachable zero-ID iterator guard; readable fixed-range iteration omits it, and selector/state registers differ. */
#include "common.h"
#include "shard/W6_W6Match3_ScrollSelection.h"

struct StatusSkillSelection {
    u8 unk0000[0x28];
    u8 timer[0x3d8];       /* 0x0028 */
    s32 state;            /* 0x0400 */
    s32 previousState;    /* 0x0404 */
    u32 nextState;        /* 0x0408 */
    u32 phase;            /* 0x040c */
    u8 unk0410[3];
    u8 mode;              /* 0x0413 */
    u8 unk0414[0x1ef8];
    u8 selector[0x64];    /* 0x230c */
    union {
        u16 ids[8];
        u32 words[4];
    } skills;             /* 0x2370 */
    u16 selectedId;       /* 0x2380 */
};

/* Switches the screen to a new state, remembering the old one. */
static __inline void statusSkillSelectionEnter(StatusSkillSelection *screen, s32 next)
{
    screen->phase = 0;
    screen->previousState = screen->state;
    screen->state = next;
}

extern "C" {
extern StatusSkillSelection *g_statusDown;
s32 FUN_00262cb0(u16 id);
s32 FUN_00288e68(u32 id);
void uniteRequestScriptEntry(s32 mode);
void buttonHelpSetPreset(s32 preset);
void timerStart(void *timer, s32 running, s32 initial);
s32 statusGetAvailableChoiceCount();
void FUN_0029f848(void *selector, s32 count, s32 rows, s32 wrap, s32, s32);

// Gather enabled status skills and open the selector at the first unavailable slot.
void statusOpenSkillSelection(u16 selectedId, u8 mode)
{
    StatusSkillSelection *screen = g_statusDown;
    s32 count = 0;
    screen->selectedId = selectedId;
    screen->mode = mode;
    screen->skills.words[0] = 0;
    screen->skills.words[1] = 0;
    screen->skills.words[2] = 0;
    screen->skills.words[3] = 0;
    for (u32 id = 0x79f; id <= 0x802; ++id) {
        if (FUN_00262cb0(static_cast<u16>(id)) && FUN_00288e68(id)) {
            screen->skills.ids[count++] = id;
        }
    }
    uniteRequestScriptEntry(14);
    buttonHelpSetPreset(5);
    timerStart(screen->timer, 1, 0);
    if (count >= statusGetAvailableChoiceCount()) {
        FUN_0029f848(screen->selector, statusGetAvailableChoiceCount() + 1, 9, 1, 1, 1);
        screen->nextState = 25;
    } else {
        FUN_0029f848(screen->selector, statusGetAvailableChoiceCount(), 9, 1, 1, 1);
        FUN_0029eb5c(reinterpret_cast<ScrollSelection *>(screen->selector), count);
        screen->nextState = 22;
    }
    statusSkillSelectionEnter(g_statusDown, 1);
}
}
