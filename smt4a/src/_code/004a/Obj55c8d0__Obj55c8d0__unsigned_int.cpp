#include "classes/Obj55c8d0.h"

/* Opens the flagged view with a pending preselected value. */
Obj55c8d0::Obj55c8d0(u32 initialValue)
{
    resetHandlers();
    hasValue = 1;
    value = initialValue;
    pending = 1;
    touchSelection.unk34 = 0;
}
