#include "common.h"

extern "C" {

int FUN_0037a2a8(u32 a, u32 b);
extern u32 FUN_002bb020(void);

void FUN_0037c9e8(u32 value)
{
    u32 a = FUN_002bb020();

    FUN_0037a2a8(a, value);
}

} /* extern "C" */
