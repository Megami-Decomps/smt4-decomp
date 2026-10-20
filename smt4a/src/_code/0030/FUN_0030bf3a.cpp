#include "common.h"

extern "C" {

void seq16IsGreater(u32 value);

/* Passes the third argument to seq16IsGreater. */
void FUN_0030bf3a(u32 unused1, u32 unused2, u32 value)
{
    seq16IsGreater(value);
}

} /* extern "C" */
