/* NON_MATCHING: shared success epilogue is placed after the special-state test, adding a forward branch from the slot path. */
#include "common.h"
#include "shard/SaveWork.h"

extern "C" {

typedef struct MapBlock {
    /* 0x000 */ u8 unk000[3];
    /* 0x003 */ u8 mode;
    /* 0x004 */ u8 unk004[0xE10];
    /* 0xE14 */ u8 slotState[0x29]; /* indexed by id (0-63) */
    /* 0xE3D */ u8 specialState;
} MapBlock;

extern int gameFlagIsSet(u32 flag);

/* Classifies `id`: 3 when a required unlock flag is missing, 2 for id 0x18, 0 when its state is 3 or out of range, else 1. */
u32 FUN_00288f78(s32 id)
{
    MapBlock *block = reinterpret_cast<MapBlock *>(gameGetMapBlock());

    if ((id - 0x19 <= 5U || id == 0x66) && gameFlagIsSet(0x144) == 0) {
        return 3;
    }
    if ((id - 0x1F <= 4U || id == 0x67) && gameFlagIsSet(0x15A) == 0) {
        return 3;
    }
    if (reinterpret_cast<MapBlock *>(gameGetMapBlock())->mode != 1) {
        if (id == 0x18) {
            return 2;
        }
        if (id >= 0x40) {
            return 0;
        }
        if (block->slotState[id] == 3) {
            return 0;
        }
    } else if (block->specialState == 3) {
        return 0;
    }
    return 1;
}

}
