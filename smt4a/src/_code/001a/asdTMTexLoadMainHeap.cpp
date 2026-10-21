#include "common.h"

struct TextureNode;

extern "C" {
TextureNode *asdTMTexTableGetNode(u32 table, u32 index);
TextureNode *FUN_001acfac(TextureNode *node, u32 heap);

TextureNode *asdTMTexLoadMainHeap(u32 table, u32 index)
{
    return FUN_001acfac(asdTMTexTableGetNode(table, index), 0x10000);
}
}
