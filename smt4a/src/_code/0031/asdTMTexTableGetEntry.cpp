#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

extern TexTable g_texTable;

/* Returns table entry `idx` of the texture table. */
TexTableEntry *asdTMTexTableGetEntry(s32 idx)
{
    return &g_texTable.entries[idx];
}

} /* extern "C" */
