/* NON_MATCHING: the compiler combines value/active initialization with STRD and changes store ordering. */
#include "classes/Obj5590e4.h"

/* Retains the kind and starts with no active work. */
Obj5590e4::Obj5590e4(u8 initialKind)
    : value(0), active(0), count(0), kind(initialKind)
{
}
