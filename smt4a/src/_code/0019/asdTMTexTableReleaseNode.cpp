/* NON_MATCHING: compiler reuses the saved zero for both final stores instead of retail's writeback and fresh zero. */
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
TexNode *asdTMTexTableGetNode(s32, s32);
void asdTextureRelease(AsdTexture *);
void asdMemFree(void *);

// Release a texture node's auxiliary data and texture, then clear its loaded state.
void asdTMTexTableReleaseNode(s32 table, s32 index)
{
    TexNode *node = asdTMTexTableGetNode(table, index);
    if (node != NULL) {
        if (node->loaded.data != NULL) {
            asdMemFree(node->loaded.data);
            node->loaded.data = NULL;
        }
        if (node->loaded.texture != NULL) {
            asdTextureRelease(node->loaded.texture);
            node->loaded.texture = NULL;
        }
        node->loaded.state = 0;
        node->loaded.count = 0;
    }
}
}
