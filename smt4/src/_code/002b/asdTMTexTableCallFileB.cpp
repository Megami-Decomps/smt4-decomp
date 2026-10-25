#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

TexNode *fixedRecordTableGet(TexFile *file, s32 arg);

extern TexTable g_texTable;

/* Forwards `arg` to the handler for the TMX file of table entry `idx`. */
TexNode *asdTMTexTableCallFileB(s32 idx, s32 arg)
{
    return fixedRecordTableGet(g_texTable.entries[idx].file, arg);
}

} /* extern "C" */
