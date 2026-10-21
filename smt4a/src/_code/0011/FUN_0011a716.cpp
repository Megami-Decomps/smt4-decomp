#include "common.h"

extern "C" {

void FUN_0011a4b8(u32 value, u32 arg);

/* Calls FUN_0011a4b8 with the referenced word and the first argument. */
void FUN_0011a716(u32 arg, u32 *valueRef, u32 unused)
{
    FUN_0011a4b8(*valueRef, arg);
}

} /* extern "C" */
