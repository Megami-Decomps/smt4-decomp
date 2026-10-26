#include "classes/Obj557dcc.h"

extern "C" void FUN_0019f888(Obj557dcc *object, u32 value);

/* Retains the requested resource value and starts with no owned entries. */
Obj557dcc::Obj557dcc(u32 initialValue) : value(initialValue)
{
    FUN_0019f888(this, 0);
}
