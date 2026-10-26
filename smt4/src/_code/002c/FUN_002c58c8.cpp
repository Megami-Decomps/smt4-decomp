#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "event/bustupEvent/BustupTex.h"

extern "C" {
TexNode* asdTMTexTableCallFileB(s32 tableIndex, s32 nodeIndex);
void FUN_002b9178(TexNode* node);

// Prepare a table texture and mark its image as uploaded.
void *FUN_002c58c8(s32 tableIndex, s32 nodeIndex)
{
    TexNode* node = asdTMTexTableCallFileB(tableIndex, nodeIndex);
    u32 kind = 0x10000;
    if (node != NULL) {
        FUN_002b9178(node);
        if (node->loaded.texture != NULL) {
            node->loaded.texture->unk08 = kind;
            if (node->loaded.texture != NULL) {
                asdTextureSetImage(node->loaded.texture);
                node->loaded.state |= 4;
            }
        }
    }
    return node;
}
}
