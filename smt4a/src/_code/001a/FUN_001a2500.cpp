#include "common.h"

extern "C" {

void FUN_001a2504(u32 param1, u32 param2, s32 withHeader, u32 param3);

/* Forwards unchanged to the message sender below. */
void FUN_001a2500(u32 param1, u32 param2, s32 withHeader, u32 param3)
{
    FUN_001a2504(param1, param2, withHeader, param3);
}

} /* extern "C" */
