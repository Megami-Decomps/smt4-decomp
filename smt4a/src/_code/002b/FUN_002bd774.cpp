/* NON_MATCHING: the result constant now lives in r6 as in retail; retail still lays the mode-1 win/lose arms out after the waiting path, each with its own return, and keeps the waiting 0 in r4. */
#include "event/CyclicChoice.h"

extern "C" {
extern CyclicChoiceGlobals DAT_00589148;
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 scrGetCommandFrame(void);
s32 slotIsReady(u32 slot);
s32 padButtonIsPressed(u32 button);
void eventQueueAddUnique(u32 event);

// Wait for choice input or compare two choices in a three-way cyclic game.
u32 FUN_002bd774(void)
{
    u16 mode = scrGetArg(0);
    u32 result = 1;
    if (mode != 0) {
        if (mode == 1) {
            CyclicChoiceState *state = DAT_00589148.state;
            u16 choice = scrGetArg(1);
            u16 other = scrGetArg(2);
            if (choice != other) {
                if (choice < other)
                    choice += 3;
                if ((u16)(choice - other) != 1) {
                    scrSetResult(1);
                    state->result = 1;
                } else {
                    scrSetResult(-1);
                    state->result = -1;
                }
            } else {
                scrSetResult(0);
            }
        }
    } else {
        CyclicChoiceState *state = DAT_00589148.state;
        if (state) {
            if (scrGetCommandFrame() == 0)
                state->choice = scrGetArg(1);
            if (slotIsReady(1) || slotIsReady(0))
                return 0;
            if (!padButtonIsPressed(1) && !padButtonIsPressed(0))
                return 0;
            eventQueueAddUnique(0x1000210);
        }
    }
    return result;
}
}
