#include "common.h"

extern "C" {

void FUN_002efb6c(u32 dest, u32 value);
u32 FUN_002efa80(u32 source);

/* Calls FUN_002efb6c(dest, FUN_002efa80(source)). */
void FUN_003076d2(u32 dest, u32 source)
{
    u32 value;

    value = FUN_002efa80(source);
    FUN_002efb6c(dest, value);
}

} /* extern "C" */
