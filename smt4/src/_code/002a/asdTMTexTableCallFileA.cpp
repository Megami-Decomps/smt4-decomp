#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

TexNode *asdTMTexFileGetNodeById(TexFile *file, s32 arg);

extern TexTable g_texTable;

/* Forwards `arg` to the handler for the TMX file of table entry `idx`. */
TexNode *asdTMTexTableCallFileA(s32 idx, s32 arg)
{
    return asdTMTexFileGetNodeById(g_texTable.entries[idx].file, arg);
}

} /* extern "C" */
