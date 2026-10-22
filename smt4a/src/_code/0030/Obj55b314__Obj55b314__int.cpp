/* NON_MATCHING: Thumb vtable/value initialization uses different registers and store order. */
#include "classes/Obj559720.h"

/* Retains the selection value and clears the derived kind and work value. */
Obj55b314::Obj55b314(s32 initialValue)
{
    value = initialValue;
    unk08 = 0;
    unk05 = 0;
}
