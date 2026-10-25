#include "classes/Obj536044.h"

extern "C" s32 scrRunOpcodesStub(void *controller);

/* Enters state 5 once the controller reports 2. */
void Obj536044::waitController()
{
    scrRunOpcodesStub(controller);
    if (scrRunOpcodesStub(controller) == 2) {
        changeState(5);
    }
}
