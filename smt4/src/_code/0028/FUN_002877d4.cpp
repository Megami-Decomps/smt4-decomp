#include "common.h"

extern "C" {

int FUN_002ebdd8(u32 value, int arg);
extern int jyoucyuGetTableEntry(u32 index);

void FUN_002877d4(u32 value)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        FUN_002ebdd8(value, 0);
    }
}

} /* extern "C" */
