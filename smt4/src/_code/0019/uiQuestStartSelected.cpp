/* NON_MATCHING: only the state-change stores differ: retail stores the previous state, then the new one with a writeback (str [r0,#8]; str [r0,#4]!) and the timer through that pointer; the build merges them into stm */
#include "common.h"

extern "C" {

typedef struct StateTrack00199024 {
    /* 0x0 */ u32 state;
    /* 0x4 */ u32 previous;
} StateTrack00199024;

typedef struct UiQuest00199024 {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ StateTrack00199024 track;
    /* 0x00c */ u8 unk00c[4];
    /* 0x010 */ u32 timer;
    /* 0x014 */ u8 unk014[0x250];
    /* 0x264 */ u8 panel[0x350];
    /* 0x5b4 */ u32 script;
    /* 0x5b8 */ u8 unk5b8[0x3b];
    /* 0x5f3 */ u8 busy;
    /* 0x5f4 */ u8 unk5f4[0x6c];
    /* 0x660 */ u8 list[0x12a];
    /* 0x78a */ u16 ids[1];
} UiQuest00199024;

s32 uiBindRecordRewardText(u32 id, s32 a, s32 b);
void gameOptionsEnableAndReset(void);
void FUN_0028eeb8(u32 id);
void uiQuestCountDetailPages(u32 id);
void FUN_00290404(void);
void gameGetOptionProgressStatus(void);
void buttonHelpSetPreset(s32 preset);
void spriteStartAnimationByIndex(u8 *panel, s32 value);
s32 scrScriptProcessStartEntry(u32 script, s32 entry);
s32 FUN_0029efa8(u8 *list);
s32 FUN_0029efc0(u8 *list);

extern UiQuest00199024 *g_uiQuest; /* 0x43dd50 */

/* Starts the selected quest's script entry 3; when it starts, enters state 0xc. */
void uiQuestStartSelected(void)
{
    UiQuest00199024 *quest = g_uiQuest;
    s32 base;
    s32 offset;
    u16 id;
    StateTrack00199024 *track;

    quest->busy = 1;
    base = FUN_0029efc0(quest->list);
    offset = FUN_0029efa8(quest->list);
    id = quest->ids[offset + base];
    FUN_0028eeb8(id);
    gameGetOptionProgressStatus();
    gameOptionsEnableAndReset();
    uiQuestCountDetailPages(id);
    spriteStartAnimationByIndex(quest->panel, 2);
    uiBindRecordRewardText(id, 0, 1);
    if (scrScriptProcessStartEntry(quest->script, 3) != 0) {
        buttonHelpSetPreset(0x9e);
        FUN_00290404();
        track = &g_uiQuest->track;
        track->previous = track->state;
        track->state = 0xc;
        g_uiQuest->timer = 0;
    }
}

} /* extern "C" */
