#include "common.h"

extern "C" {

u32 FUN_00171430(u32 mode, u32 arg);

/* Calls FUN_00171430, the function that follows it, with mode 1 and its own argument. */
u32 FUN_00171424(u32 arg)
{
    return FUN_00171430(1, arg);
}

} /* extern "C" */
