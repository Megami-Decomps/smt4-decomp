#include "common.h"

extern "C" {
extern u32 DAT_00446da0[];

u32 jyoucyuGetTableEntry(s32 index)
{
    return DAT_00446da0[index];
}
}
