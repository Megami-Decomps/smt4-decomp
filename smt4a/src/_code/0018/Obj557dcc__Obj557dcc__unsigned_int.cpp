#include "classes/Obj557dcc.h"

extern "C" void moriModelEffectRebuildKeys(Obj557dcc *object, u32 value);

/* Retains the requested resource value and starts with no owned entries. */
Obj557dcc::Obj557dcc(u32 initialValue) : value(initialValue)
{
    moriModelEffectRebuildKeys(this, 0);
}
