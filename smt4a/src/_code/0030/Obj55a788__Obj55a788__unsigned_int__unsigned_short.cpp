/* NON_MATCHING: Thumb descriptor value/kind stores are scheduled ahead of the vtable/active stores. */
#include "classes/Obj55a788.h"

/* Retains the descriptor value and kind in the inactive state. */
Obj55a788::Obj55a788(u32 initialValue, u16 initialKind)
    : active(0), value(initialValue), kind(initialKind)
{
}
