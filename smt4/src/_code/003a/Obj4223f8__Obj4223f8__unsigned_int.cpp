/* NON_MATCHING: register allocation only: retail holds `value` in r4 and the object in r5 (swapped here) */
#include "classes/Obj4223f8.h"

extern "C" void FUN_003a8cc8(Obj4223f8 *screen);

/* View for a stored value: installs the state handlers and records the value. */
Obj4223f8::Obj4223f8(u32 value)
{
    FUN_003a8cc8(this);
    flag5A4 = 1;
    this->value = value;
    flagA5B8 = 1;
    touchSelection.unk34 = 0;
}
