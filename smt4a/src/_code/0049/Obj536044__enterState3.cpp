/* NON_MATCHING: same stores; retail stores the previous state first and writes the state and substate with one stm (registers r0 = 3, r2 = 0), armcc allocates other registers and cannot merge them. */
#include "classes/Obj536044.h"

extern "C" s32 screenFadeIsBusy(void);

/* When the transition is over, flags the scene as changed and enters state 3, remembering the old one. */
void Obj536044::enterState3()
{
    if (screenFadeIsBusy() == 0) {
        flags |= 0x102;
        previousState = state;
        state = 3;
        substate = 0;
    }
}
