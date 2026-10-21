/* NON_MATCHING: same stores; retail stores the previous state first and writes the state and substate with one stm (registers r0 = 5, r2 = 0), armcc allocates other registers and cannot merge them. */
#include "classes/Obj536044.h"

extern "C" s32 scrRunOpcodesStub(void *controller);

/* Enters state 5 (remembering the old state) once the controller reports 2. */
void Obj536044::waitController()
{
    scrRunOpcodesStub(controller);
    if (scrRunOpcodesStub(controller) == 2) {
        previousState = state;
        state = 5;
        substate = 0;
    }
}
