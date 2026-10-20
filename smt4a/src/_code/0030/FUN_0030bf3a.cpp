#include "common.h"

extern "C" {

void FUN_002efd36(u32 value);

/* Passes the third argument to FUN_002efd36. */
void FUN_0030bf3a(u32 unused1, u32 unused2, u32 value)
{
    FUN_002efd36(value);
}

} /* extern "C" */
