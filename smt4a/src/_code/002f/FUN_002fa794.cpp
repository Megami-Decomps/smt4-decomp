#include "common.h"

extern "C" {

void FUN_00124282(u32 a, u32 b);
u32 _ZN9Obj55aff4C1Ev(void);

/* Calls FUN_00124282(b, _ZN9Obj55aff4C1Ev()). */
void FUN_002fa794(u32 unused, u32 b)
{
    u32 value;

    value = _ZN9Obj55aff4C1Ev();
    FUN_00124282(b, value);
}

} /* extern "C" */
