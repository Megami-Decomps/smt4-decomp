/* NON_MATCHING: the state/prevState stores: retail writes them with `stmib r0!, {r1, r2}` then stateTime via the updated r0; armcc here stores stateTime first and uses add + stm. */
#include "common.h"

extern "C" {

typedef struct UiQuest {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ s32 state;
    /* 0x008 */ s32 prevState;
    /* 0x00C */ u32 unk00c;
    /* 0x010 */ s32 stateTime;
    /* 0x014 */ u8 unk014[0x20];
    /* 0x034 */ u8 timer[0x2BC];
    /* 0x2F0 */ u8 anim0[0x8C];
    /* 0x37C */ u8 anim1[0x26C];
    /* 0x5E8 */ u32 unk5e8;
    /* 0x5EC */ u8 unk5ec[0x392];
    /* 0x97E */ u16 page;
} UiQuest;

extern UiQuest *g_uiQuest; /* 0x43dd50 */

extern int buttonHelpSetPreset(int preset);
extern int timerStart(u8 *timer, int a, int b);
extern int FUN_002bee58(u8 *anim, int id);
extern int FUN_002bf810(u32 arg);

/* Opens page `page` of the quest screen: starts its timer and animations and enters state 17. */
void FUN_00203640(u16 page)
{
    UiQuest *quest = g_uiQuest;

    quest->page = page;
    quest->unk5e8 = 0;
    timerStart(quest->timer, 1, 0);
    FUN_002bee58(quest->anim0, 2);
    FUN_002bee58(quest->anim1, 3);
    quest = g_uiQuest;
    quest->prevState = quest->state;
    quest->state = 17;
    quest->stateTime = 0;
    buttonHelpSetPreset(26);
    FUN_002bf810(0x100025D);
}

}
