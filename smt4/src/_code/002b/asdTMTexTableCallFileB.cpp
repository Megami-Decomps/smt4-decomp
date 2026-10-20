#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

void FUN_00145e34(TexFile *file, s32 arg);

extern TexTable g_texTable;

/* Forwards `arg` to the handler for the TMX file of table entry `idx`. */
void asdTMTexTableCallFileB(s32 idx, s32 arg)
{
    FUN_00145e34(g_texTable.entries[idx].file, arg);
}

} /* extern "C" */
