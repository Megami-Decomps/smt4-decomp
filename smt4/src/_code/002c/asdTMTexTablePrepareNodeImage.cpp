#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "event/bustupEvent/BustupTex.h"

extern "C" {
TexNode* asdTMTexTableCallFileB(s32 tableIndex, s32 nodeIndex);
void texTableEntryLoadSync(TexNode* node);

// Prepare a table texture and mark its image as uploaded.
void *asdTMTexTablePrepareNodeImage(s32 tableIndex, s32 nodeIndex)
{
    TexNode* node = asdTMTexTableCallFileB(tableIndex, nodeIndex);
    u32 kind = 0x10000;
    if (node != NULL) {
        texTableEntryLoadSync(node);
        if (node->loaded.texture != NULL) {
            node->loaded.texture->heap = kind;
            if (node->loaded.texture != NULL) {
                asdTextureSetImage(node->loaded.texture);
                node->loaded.state |= 4;
            }
        }
    }
    return node;
}
}
