#include "common.h"
#include "gamedata/GameFlags.h"

extern "C" {

#define SLOT_COUNT 12

/* Game block with a table of 12 halfword ids at 0x29814. */
typedef struct {
    u8 unk00[0x29814];
    u16 slots[SLOT_COUNT];  /* 0x29814 */
} GameBlock;

GameBlock *gameDataBlocksGetSaveData(void);
int saveSlotFindById(u16 id);
int FUN_00187168(int value);
int FUN_0019e52c(u16 id);
int rt_aeabi_memclr(u16 *slots, int size);
int FUN_003e4e4c(u16 id);

int FUN_004bd410(u16 id);

/* Runs the activation sequence for each usable slot id, then clears the slot table; always reports success. */
u32 FUN_003a36b4(void)
{
    GameBlock *block = gameDataBlocksGetSaveData();
    int started = 0;
    int i = 0;

    do {
        u16 id = block->slots[i];

        if (id != 0) {
            int ownerId = saveSlotFindById(id);
            int usable = FUN_0019e52c(id);

            if (usable != 0 && (ownerId == 0 || FUN_00187168(ownerId) == 0)) {
                if (started == 0) {
                    FUN_003e4e4c(id);
                }
                FUN_004bd410(id);
                started++;
            }
        }
        i++;
    } while (i < SLOT_COUNT);
    rt_aeabi_memclr(block->slots, 0x18);
    gameFlagSetValue(0x4f8, 0, 1);
    return 1;
}

} /* extern "C" */
