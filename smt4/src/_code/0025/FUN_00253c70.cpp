#include "gamedata/MapSaveBlock.h"

struct MapObject {
    u8 unk000[0x13a];
    s16 id; // 0x13a
};

extern "C" {

// Mark the first used, pending map block entry that belongs to the object.
void FUN_00253c70(MapObject *object)
{
    s32 i;
    MapSaveBlock *block = gameGetMapBlock();
    s16 id = object->id;
    for (i = 0; i < 16; i++) {
        if ((block->markers[i].flags & 1) != 0 && (block->markers[i].flags & 4) != 0 && block->markers[i].objectId == id) {
            block->markers[i].flags |= 0x10;
            return;
        }
    }
}

} /* extern "C" */
