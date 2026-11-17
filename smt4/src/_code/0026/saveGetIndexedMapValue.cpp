#include "gamedata/GameSaveBlocks.h"
extern "C" {
struct SavedRecord { u8 data[0x4C]; };
/* Return one of twelve fixed-size saved records. */
SavedRecord *saveGetIndexedMapValue(u32 index)
{
    SavedRecord *record = NULL;
    if (index < 12) {
        GameSaveBody *body = &g_gameDataBlocks.saveBlock->body;
        record = (SavedRecord *)body->summary.records[index];
    }
    return record;
}
}
