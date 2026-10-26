#include "common.h"
#include "shard/asdTMTexLoadMainHeap.h"

extern "C" {
TextureNode *asdTMTexTableGetNode(u32 table, u32 index);
TextureNode *asdMTeXLoadNodeTexturePath(TextureNode *node, u32 heap);

TextureNode *asdTMTexLoadMainHeap(u32 table, u32 index)
{
    return asdMTeXLoadNodeTexturePath(asdTMTexTableGetNode(table, index), 0x10000);
}
}
