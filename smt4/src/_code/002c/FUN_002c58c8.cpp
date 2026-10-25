/* NON_MATCHING: retail hoists the 0x10000 texture-kind constant into a saved register before preparation. */
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" {
void FUN_002b9178(TexNode* node);

// Prepare a table texture and mark its image as uploaded.
TexNode* FUN_002c58c8(s32 tableIndex, s32 nodeIndex)
{
    TexNode* node = asdTMTexTableCallFileB(tableIndex, nodeIndex);
    if (node != NULL) {
        FUN_002b9178(node);
        if (node->loaded.texture != NULL) {
            node->loaded.texture->unk08 = 0x10000;
            if (node->loaded.texture != NULL) {
                asdTextureSetImage(node->loaded.texture);
                node->loaded.state |= 4;
            }
        }
    }
    return node;
}
}
