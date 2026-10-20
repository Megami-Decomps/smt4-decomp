#include "common.h"

extern "C" {

int FUN_0032c718(u32 a, u32 b, u32 c);
extern int jyoucyuGetTableEntry(u32 index);

void FUN_002a03a0(u32 a, u32 b, u32 c)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        FUN_0032c718(a, b, c);
    }
}

} /* extern "C" */
