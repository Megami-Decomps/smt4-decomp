#include "common.h"

extern "C" {

s32 FUN_00169704(u32 value);

s32 engineTestValue(u32 value)
{
    return FUN_00169704(value) != 0;
}

} /* extern "C" */
