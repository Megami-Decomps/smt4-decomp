#include "classes/Obj5333c0.h"

extern "C" s32 screenFadeIsBusy(void);

/* When the transition is over, picks state 5 (mode 1) or 4 and restarts the substate. */
void Obj5333c0::chooseNextState()
{
    if (screenFadeIsBusy() == 0) {
        if (mode != 1) {
            startState(4);
        } else {
            startState(5);
        }
    }
}
