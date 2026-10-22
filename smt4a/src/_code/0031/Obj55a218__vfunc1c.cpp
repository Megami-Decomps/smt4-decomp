/* NON_MATCHING: retail unit contains an ARM-to-Thumb veneer before handleSetState; the unit boundary includes linker-generated code. */
#include "classes/Obj55a218.h"
extern "C" void handleSetState(void *object, u32 state);

void Obj55a218::vfunc1c()
{
    handleSetState(this, 5);
}
