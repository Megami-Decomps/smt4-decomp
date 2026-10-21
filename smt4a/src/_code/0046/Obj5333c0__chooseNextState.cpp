/* NON_MATCHING: same stores; retail materializes the zero for the substate (r0) between the mode load and the compare and keeps the mode in r1, armcc loads the mode into r0 and the zero after the conditional moves */
#include "classes/Obj5333c0.h"

extern "C" s32 screenFadeIsBusy(void);

/* When the transition is over, picks state 5 (mode 1) or 4 and restarts the substate. */
void Obj5333c0::chooseNextState()
{
    if (screenFadeIsBusy() == 0) {
        state = (mode != 1) ? 4 : 5;
        substate = 0;
    }
}
