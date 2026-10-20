#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

void asdTMTexFileGetNodeById(TexFile *file, u32 arg);

extern TexTable g_texTable;

/* Forwards `arg` to the handler for the TMX file of table entry `idx`. */
void asdTMTexTableCallFileC(s32 idx, u32 arg)
{
    asdTMTexFileGetNodeById(g_texTable.entries[idx].file, arg);
}

} /* extern "C" */
