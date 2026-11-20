#include "common.h"

extern "C" {
extern u32 g_jyoucyuEntryTable[];

u32 jyoucyuGetTableEntry(s32 index)
{
    return g_jyoucyuEntryTable[index];
}
}
