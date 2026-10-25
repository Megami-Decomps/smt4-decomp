#include "classes/Obj536044.h"

extern "C" s32 screenFadeIsBusy(void);

/* When the transition is over, flags the scene as changed and enters state 3, remembering the old one. */
void Obj536044::enterState3()
{
    if (screenFadeIsBusy() == 0) {
        flags |= 0x102;
        changeState(3);
    }
}
