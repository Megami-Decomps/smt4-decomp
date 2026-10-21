#include "common.h"

extern "C" {
u32 jyoucyuGetTableEntry(s32 index);

/* Returns the second resident-data table entry. */
u32 jyoucyuGetSecondTableEntry(void)
{
    return jyoucyuGetTableEntry(1);
}
}
