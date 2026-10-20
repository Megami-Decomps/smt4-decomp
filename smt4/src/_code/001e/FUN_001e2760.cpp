#include "common.h"

extern "C" {

typedef struct MapBlock {
    /* 0x000 */ u8 unk000[0xE14];
    /* 0xE14 */ u8 slotState[1]; /* indexed by id */
} MapBlock;

extern int FUN_00270384(int id);
extern int gameFlagIsSet(u32 flag);
extern MapBlock *gameGetMapBlock(void);

/* Whether `id` is selectable: not 0x18, its group's unlock flag set, and its slot marked 1. */
u32 FUN_001e2760(int id)
{
    MapBlock *block = gameGetMapBlock();

    if (id == 0x18) {
        return 0;
    }
    if ((id - 0x19 <= 5U || id == 0x66) && gameFlagIsSet(0x144) == 0) {
        return 0;
    }
    if ((id - 0x1F <= 4U || id == 0x67) && gameFlagIsSet(0x15A) == 0) {
        return 0;
    }
    if (FUN_00270384(id) == 1 && block->slotState[id] == 1) {
        return 1;
    }
    return 0;
}

}
