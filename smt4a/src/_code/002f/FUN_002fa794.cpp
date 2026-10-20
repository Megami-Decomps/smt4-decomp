#include "common.h"

extern "C" {

void FUN_00124282(u32 a, u32 b);
u32 constructObj0055affc(void);

/* Calls FUN_00124282(b, constructObj0055affc()). */
void FUN_002fa794(u32 unused, u32 b)
{
    u32 value;

    value = constructObj0055affc();
    FUN_00124282(b, value);
}

} /* extern "C" */
