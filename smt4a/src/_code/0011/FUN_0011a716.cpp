#include "common.h"

extern "C" {

void FUN_0011a4b8(u32 value, u32 arg);

/* Calls FUN_0011a4b8 with the word `*valueRef` and `arg` (the first argument is unused). */
void FUN_0011a716(u32 unused, u32 *valueRef, u32 arg)
{
    FUN_0011a4b8(*valueRef, arg);
}

} /* extern "C" */
