#include "common.h"

extern "C" {
void FUN_00439f3c(u32 object, u32 value);

void FUN_00461b68(u32 *table, s32 index, u32 value)
{
    FUN_00439f3c(table[index], value);
}
}
