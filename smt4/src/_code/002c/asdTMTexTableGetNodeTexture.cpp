#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/TexTableLoaded.h"

extern "C" {

AsdTexture *asdTMTexTableGetNodeTexture(s32 table, s32 node)
{
    TexNode *texNode = asdTMTexTableCallFileB(table, node);

    return texNode->loaded.texture;
}

} /* extern "C" */
