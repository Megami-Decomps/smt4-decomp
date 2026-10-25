#include "classes/Obj4223f8.h"

/* View for a stored value: installs the state handlers and records the value. */
Obj4223f8::Obj4223f8(u32 value)
{
    resetHandlers();
    flag5A4 = 1;
    this->value = value;
    flagA5B8 = 1;
    touchSelection.unk34 = 0;
}
