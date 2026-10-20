#include "common.h"

extern "C" {

int FUN_002b47bc(u32 a, int b, int c);
extern u32 FUN_002b47f4(u32 id);

void FUN_0023478c(u32 unused, int index)
{
    u32 value = FUN_002b47f4(0x41);

    if (index != -1) {
        FUN_002b47bc(value, index, 0);
    }
}

} /* extern "C" */
