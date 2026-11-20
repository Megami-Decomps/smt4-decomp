#include "common.h"

extern "C" {

s32 bustupCutAnimFinish(u32 value);

s32 engineTestValue(u32 value)
{
    return bustupCutAnimFinish(value) != 0;
}

} /* extern "C" */
