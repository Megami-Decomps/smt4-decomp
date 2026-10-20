#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

void FUN_00186a3c(TexFile *file, u32 arg);

extern TexTable g_texTable;

/* Forwards `arg` to the handler for the TMX file of table entry `idx`. */
void asdTMTexTableCallFileC(s32 idx, u32 arg)
{
    FUN_00186a3c(g_texTable.entries[idx].file, arg);
}

} /* extern "C" */
