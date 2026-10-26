/* NON_MATCHING: retail caches id >> 3 in r5 across the bitset tests and updates both bitsets through writeback pointers; control flow matches */
#include "common.h"
#include "gamedata/DataTableAccess.h"

extern "C" {

/* The area block's two 0x12-byte bitsets, indexed by area id. */
typedef struct AreaBits {
    /* 0x00 */ u8 known[0x12];
    /* 0x12 */ u8 marked[0x12];
} AreaBits;

s32 gameFlagIsSet(u32 flag);
AreaBits *gameDataBlockGetArea28350(void);
u8 *gameDataBlockGetArea2D68(void);
s32 FUN_003e4230(u32 id);

/* Whether bit `id` of a bitset is set. */
static u32 bitsetTest(const u8 *bits, u32 id)
{
    return bits[id >> 3] & (1 << (id & 7));
}

/* Sets bit `id` of a bitset. */
static void bitsetSet(u8 *bits, u32 id)
{
    bits[id >> 3] |= 1 << (id & 7);
}

/* Once flag 0x408 is set, finds an area that is marked or newly becomes known; a new one is marked too. Returns 1 when one is found. */
u32 FUN_003e42f0(void)
{
    u32 id;

    if (!gameFlagIsSet(0x408)) {
        return 0;
    }
    for (id = 1; id < 0x8d; id++) {
        if (bitsetTest(gameDataBlockGetArea28350()->known, id)) {
            if (bitsetTest(gameDataBlockGetArea28350()->marked, id)) {
                return 1;
            }
        } else if ((s32)dataFindKeyedRecordWithOverrides(id) != 0 &&
                   (bitsetTest(gameDataBlockGetArea2D68(), id) || FUN_003e4230(id) != 2)) {
            bitsetSet(gameDataBlockGetArea28350()->known, id);
            bitsetSet(gameDataBlockGetArea28350()->marked, id);
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
