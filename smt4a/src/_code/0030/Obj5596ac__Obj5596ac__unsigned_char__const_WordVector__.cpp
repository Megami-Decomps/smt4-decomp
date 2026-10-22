#include "classes/Obj5596ac.h"

/* Selects the value kind and copies the initial vector contents. */
Obj5596ac::Obj5596ac(u8 initialKind, const WordVector &values)
{
    kind = initialKind;
    words = values;
}
