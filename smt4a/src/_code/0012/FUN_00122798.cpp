#include "common.h"

extern "C" {

void FUN_001227a8(u32 value, u32 arg);

/* Calls FUN_001227a8 with the word `*valueRef` and `arg` (the first argument is unused). */
void FUN_00122798(u32 unused, u32 *valueRef, u32 arg)
{
    FUN_001227a8(*valueRef, arg);
}

} /* extern "C" */
