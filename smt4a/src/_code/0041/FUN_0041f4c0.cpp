/* NON_MATCHING: register allocation only: argument setup order before FUN_0041f020 and the previous-state temp (r2 vs r0) in the state change */
#include "common.h"
#include "gamedata/DataTable.h"
#include "event/2dEvent/SmokeFade.h"

#include "code/Code0028.h"
#include "StaffRoll/StaffRollMain.h"
extern "C" {

typedef struct {
    u8 unk0[5];
    s8 entryIndex;     /* 0x005 */
    u8 unk6;
    u8 state;          /* 0x007 */
    s32 timer;         /* 0x008 */
    u8 subState;       /* 0x00c */
    u8 prevState;      /* 0x00d */
    u8 unkE[0x68 - 0xe];
    u8 unk68;          /* 0x068 */
    u8 unk69[0x30c - 0x69];
    u8 unk30c;         /* 0x30c */
    u8 unk30d[0x44c - 0x30d];
    u8 unk44c;         /* 0x44c */
    u8 unk44d;         /* 0x44d */
    u8 unk44e;         /* 0x44e */
} ModeScreen;

typedef struct {
    u8 unk00[0x14];
    u8 colorTarget[0x54 - 0x14]; /* 0x14 */
} ModeScreenEntry; /* size 0x54 */

s32 byteTripleGetV0(void);
void FUN_0041e58c(ModeScreen *screen);
void FUN_0041f020(ModeScreen *screen, s32 arg);
void FUN_002f0384(s32 arg);
void buttonHelpSetText(void *target, u32 color);

/* Switches to `state`/`subState`, remembering the state left and restarting the timer. */
static void modeScreenSetState(ModeScreen *screen, u8 state, u8 subState)
{
    u8 prevState = screen->state;

    screen->timer = 0;
    screen->state = state;
    screen->prevState = prevState;
    screen->subState = subState;
}

/* Resets the screen into state 13 when the game is ready, fading the current entry's target. */
void FUN_0041f4c0(ModeScreen *screen)
{
    s32 index;

    if (FUN_0023b3d0() == 0 || FUN_002857dc() == 0 || byteTripleGetV0() == 0) {
        return;
    }
    FUN_0041e58c(screen);
    screen->unk44c = 0;
    screen->unk44d = 0;
    screen->unk44e = 0;
    FUN_0041f020(screen, 1);
    if (slotIsActive(6) != 0 || slotIsActive(3) != 0 || slotIsActive(12) != 0 || slotIsActive(15) != 0) {
        screen->unk30c = 1;
        FUN_002f0384(0);
        screen->unk68 = 0;
    }
    index = screen->entryIndex;
    ModeScreenEntry *entries = static_cast<ModeScreenEntry *>(dataTableGetEntries(dataTableGet(0x3d, 0)));
    buttonHelpSetText(entries[index].colorTarget, 0xf4f4f4ff);
    modeScreenSetState(screen, 13, 4);
}

} /* extern "C" */
