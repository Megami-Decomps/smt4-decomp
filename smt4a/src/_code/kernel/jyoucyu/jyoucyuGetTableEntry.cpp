/* Returns entry `index` of the resident module's table. */
#include "common.h"
#include "kernel/jyoucyuGetTableEntry.h"

extern "C" {

extern u32 g_jyoucyuTable[];

u32 jyoucyuGetTableEntry(s32 index)
{
    return g_jyoucyuTable[index];
}

} /* extern "C" */
