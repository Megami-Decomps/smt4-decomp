#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" {

TexNode* asdTMTexTableGetNode(s32 tableIndex, s32 nodeIndex);
void FUN_00169310(TexNode* node);

static inline bool prepareTextureNode(TexNode* node, u32 imageMode, u32 stateFlag)
{
    if (node == NULL) {
        return false;
    }
    FUN_00169310(node);
    if (node->loaded.texture == NULL) {
        return false;
    }
    node->loaded.texture->unk08 = imageMode;
    node->loaded.state |= stateFlag;
    return true;
}

TexNode* asdTMTexTableActivateImage(s32 tableIndex, s32 nodeIndex)
{
    TexNode* node = asdTMTexTableGetNode(tableIndex, nodeIndex);
    if (prepareTextureNode(node, 0x30000, 0x40) && node->loaded.texture != NULL) {
        asdTextureSetImage(node->loaded.texture);
        node->loaded.state |= 4;
    }
    return node;
}

} // extern "C"
