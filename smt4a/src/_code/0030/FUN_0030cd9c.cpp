#include "common.h"

extern "C" {

void FUN_00309302(u32 *result, u32 where, u32 *value);

/* Calls FUN_00309302 with a local copy of the value and a scratch result slot. */
void FUN_0030cd9c(u32 where, u32 *source)
{
    u32 value = *source;
    u32 result;

    FUN_00309302(&result, where, &value);
}

} /* extern "C" */
