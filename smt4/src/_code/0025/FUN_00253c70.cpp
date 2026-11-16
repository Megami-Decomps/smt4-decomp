#include "common.h"

struct MapBlockEntry {
    u8 flags;     // 0x00, bit 0 = used, bit 2 = pending, bit 4 = marked
    u8 unk01[5];
    s16 id;       // 0x06
    u8 unk08[0xc];
};

struct MapBlock {
    u8 unk0000[0xf20];
    MapBlockEntry entries[16]; // 0xf20
};

struct MapObject {
    u8 unk000[0x13a];
    s16 id; // 0x13a
};

extern "C" {

MapBlock *gameGetMapBlock(void);

// Mark the first used, pending map block entry that belongs to the object.
void FUN_00253c70(MapObject *object)
{
    s32 i;
    MapBlock *block = gameGetMapBlock();
    s16 id = object->id;
    for (i = 0; i < 16; i++) {
        if ((block->entries[i].flags & 1) != 0 && (block->entries[i].flags & 4) != 0 && block->entries[i].id == id) {
            block->entries[i].flags |= 0x10;
            return;
        }
    }
}

} /* extern "C" */
