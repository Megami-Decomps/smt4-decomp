#include "common.h"

extern "C" {

void FUN_001227a8(u32 value, u32 arg);

/* Calls FUN_001227a8 with the referenced word and the first argument. */
void FUN_00122798(u32 arg, u32 *valueRef, u32 unused)
{
    FUN_001227a8(*valueRef, arg);
}

} /* extern "C" */
