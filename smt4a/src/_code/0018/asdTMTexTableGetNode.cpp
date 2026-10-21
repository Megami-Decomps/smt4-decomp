/* NON_MATCHING: compiler omits retail ldrh r0, [r0]. */
#include "common.h"

struct TextureTable;
struct TextureNode;

struct TextureTableEntry {
    TextureTable* table; // 0x00
    u8 unk04[0x14];      // 0x04
};

extern "C" {
extern TextureTableEntry* g_texTable;
TextureNode* fixedRecordTableGet(TextureTable* table, s32 nodeIndex);

TextureNode* asdTMTexTableGetNode(s32 tableIndex, s32 nodeIndex)
{
    return fixedRecordTableGet(g_texTable[tableIndex].table, nodeIndex);
}
}
