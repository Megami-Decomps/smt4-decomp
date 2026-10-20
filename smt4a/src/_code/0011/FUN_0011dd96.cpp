#include "common.h"

extern "C" {

void FUN_002e7228(u32 value);

/* Calls FUN_002e7228 with the word `*valueRef` (the first argument is unused). */
void FUN_0011dd96(u32 unused, u32 *valueRef)
{
    FUN_002e7228(*valueRef);
}

} /* extern "C" */
