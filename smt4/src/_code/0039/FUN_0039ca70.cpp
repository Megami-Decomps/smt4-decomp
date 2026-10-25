/* NON_MATCHING: retail shares the "step = 0/1" store between cases 0 and 2, reloads g_gameState
 * for the flag write and places the FUN_00289880 arm last; armcc here keeps case 2 separate */
#include "map/mapDepart.h"
#include "bible/bibleAnalyze.h"

#define UNK39CA70_FLAG_BUSY 0x1000000

/* The phase record this step function drives. */
struct Unk39ca70Phase {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 result;
    /* 0x08 */ s32 step;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 flags;
};

extern "C" {

extern GameState g_gameState;

s32 gameFlagIsSet(u32 flag);
void commonBgReset(void);
void FUN_00289880(void);
void buttonHelpSelectMapPreset(void);

/* Steps the phase: rebuilds the background if requested, waits for the button help to close,
 * then clears the busy flag and reports result 2. */
void FUN_0039ca70(Unk39ca70Phase *phase)
{
    switch (phase->step) {
    case 0:
        if (g_gameState.bgResetPending != 0) {
            g_gameState.bgResetPending = 0;
            if (gameFlagIsSet(22)) {
                commonBgReset();
            } else {
                FUN_00289880();
            }
        }
        buttonHelpSelectMapPreset();
        phase->step = 1;
        break;
    case 1:
        if (buttonHelpIsNotActive()) {
            phase->step = 2;
        }
        break;
    case 2:
        phase->flags &= ~UNK39CA70_FLAG_BUSY;
        phase->result = 2;
        phase->step = 0;
        break;
    }
}

} /* extern "C" */
