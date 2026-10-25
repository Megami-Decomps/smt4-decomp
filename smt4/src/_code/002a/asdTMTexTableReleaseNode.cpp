/* NON_MATCHING: the last two clears use a pre-indexed store and a fresh zero in retail (str r5,[r4,#16]!; mov r0,#0; str r0,[r4,#12]); built stores r5 at 16 and 28. */
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {


extern TexNode *asdTMTexTableCallFileB(s32 table, s32 node);
extern void asdTextureRelease(AsdTexture *texture);
extern void asdMemFree(void *block);

/* Frees the buffer and texture of a texture table node and clears it. */
void asdTMTexTableReleaseNode(s32 table, s32 node)
{
    TexNode *entry = asdTMTexTableCallFileB(table, node);

    if (entry != NULL) {
        if (entry->loaded.data != NULL) {
            asdMemFree(entry->loaded.data);
            entry->loaded.data = NULL;
        }
        if (entry->loaded.texture != NULL) {
            asdTextureRelease(entry->loaded.texture);
            entry->loaded.texture = NULL;
        }
        entry->loaded.state = 0;
        entry->loaded.count = 0;
    }
}

} /* extern "C" */
