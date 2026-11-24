#include "gamedata/GameSaveBlocks.h"

namespace {
struct Record { u8 data[8]; };
}
extern "C" {

/* Returns a saved record for the first two indices, otherwise the supplied fallback. */
Record *gameGetSaveLinkSlot(u32 index, Record *fallback)
{
    Record *result = fallback;
    if (index == 0 || index == 1) {
        GameSaveBody *body = &g_gameDataBlocks.saveBlock->body;
        result = (Record *)&body->linkSlots[index];
    }
    return result;
}
}
