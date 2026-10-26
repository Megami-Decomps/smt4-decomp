#include "common.h"

extern "C" {
extern u32 DAT_00465768[];

u32 FUN_0035a010(u32 index)
{
    if (index < 7) {
        return DAT_00465768[index];
    }
    return 0;
}
}
