#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "shard/FUN_002e151c.h"

extern "C" {
void FUN_002b9178(TexNode* node);

static inline bool prepareTextureNode(TexNode* node, u32 imageMode, u32 stateFlag)
{
    if (node == NULL) {
        return false;
    }
    FUN_002b9178(node);
    if (node->loaded.texture == NULL) {
        return false;
    }
    node->loaded.texture->unk08 = imageMode;
    node->loaded.state |= stateFlag;
    return true;
}

// Load the requested texture node and upload its image in mode 0x20000.
TexNode* FUN_002e151c(s32 tableIndex, s32 nodeIndex)
{
    TexNode* node = asdTMTexTableCallFileB(tableIndex, nodeIndex);
    if (prepareTextureNode(node, 0x20000, 0x20) && node->loaded.texture != NULL) {
        asdTextureSetImage(node->loaded.texture);
        node->loaded.state |= 4;
    }
    return node;
}
}
