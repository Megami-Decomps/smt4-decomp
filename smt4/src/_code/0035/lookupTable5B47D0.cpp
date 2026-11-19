#include "common.h"

extern "C" {
extern u32 DAT_00465768[];

u32 lookupTable5B47D0(u32 index)
{
    if (index < 7) {
        return DAT_00465768[index];
    }
    return 0;
}
}
