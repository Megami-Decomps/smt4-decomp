#include "common.h"

extern "C" {

void FUN_003086e6(u32 *result, u32 where, u32 *value);

/* Calls FUN_003086e6 with a local copy of the value and a scratch result slot. */
void FUN_0030cd24(u32 where, u32 *source)
{
    u32 value = *source;
    u32 result;

    FUN_003086e6(&result, where, &value);
}

} /* extern "C" */
