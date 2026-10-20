#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

void asdTMTexFileGetNodeById(TexFile *file, s32 arg);

extern TexTable g_texTable;

/* Forwards `arg` to the handler for the TMX file of table entry `idx`. */
void asdTMTexTableCallFileA(s32 idx, s32 arg)
{
    asdTMTexFileGetNodeById(g_texTable.entries[idx].file, arg);
}

} /* extern "C" */
