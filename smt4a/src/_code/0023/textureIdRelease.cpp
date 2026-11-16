#include "gamedata/TextureIdTable.h"

extern "C" {
void asdTMTexTableReleaseNode(s32 table, s32 node);

/* Releases the id's node of texture table 0x34 when data table 0x47 gives it one. */
void textureIdRelease(u16 id)
{
    const TextureIdRecord *found = textureIdTableFind(id);
    if (found == NULL)
        return;
    if (found->textureIndex < 0)
        return;
    asdTMTexTableReleaseNode(0x34, found->textureIndex);
}

} /* extern "C" */
