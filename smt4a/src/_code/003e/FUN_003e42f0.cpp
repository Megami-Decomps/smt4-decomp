/* NON_MATCHING: with the area accessors inlined as copies of their real bodies only the first (known) bit set differs: retail loads the byte into r1 and the shift into r2, the build the reverse. The accessors are the adjacent functions 0x3e41f8-0x3e4740 of the same original file. */
#include "common.h"
#include "gamedata/AppUnlockBits.h"
#include "gamedata/DataTableAccess.h"
#include "gamedata/GameDataAccess_VariantE.h"

extern "C" {

/* The area block's two 0x12-byte bitsets, indexed by area id. */
typedef struct AreaBits {
    /* 0x00 */ u8 known[0x12];
    /* 0x12 */ u8 marked[0x12];
} AreaBits;

AreaBits *gameDataBlockGetArea28350(void);
s32 shopGetEntryAvailability(u32 id);

/* Copies of the area block's bit accessors (gameDataArea28350TestBit, gameDataAreaBitTest, gameDataFlagTestBit,
 * gameDataSetAreaBit, gameDataArea28350SetBit), which this function inlines. */
static bool areaKnownTest(u32 index)
{
    u8 *flags = gameDataBlockGetArea28350()->known;

    s32 byte = index / 8;
    s32 bit = index % 8;
    return (flags[byte] & (1 << bit)) != 0;
}

static u8 areaMarkedTest(u32 bit)
{
    AreaBits *area = gameDataBlockGetArea28350();
    u32 byte = bit >> 3;
    u32 shift = bit & 7;

    return (area->marked[byte] & (1 << shift)) != 0;
}

static void areaKnownSet(u32 index, s32 enabled)
{
    u8 *flags = gameDataBlockGetArea28350()->known;
    s32 byte = index / 8;
    s32 bit = index % 8;
    u8 *flag = &flags[byte];

    if (enabled != 0) {
        *flag |= 1 << bit;
    } else {
        *flag &= ~(1 << bit);
    }
}

static void areaMarkedSet(u32 id, s32 set)
{
    AreaBits *area = gameDataBlockGetArea28350();
    s32 byte = id / 8;
    s32 bit = id % 8;
    u8 *flag = &area->marked[byte];

    if (set != 0) {
        *flag |= 1 << bit;
    } else {
        *flag &= ~(1 << bit);
    }
}

/* Once flag 0x408 is set, finds an area that is marked or newly becomes known; a new one is marked too. Returns 1 when one is found. */
u32 FUN_003e42f0(void)
{
    u32 id;

    if (!gameFlagIsSet(0x408)) {
        return 0;
    }
    for (id = 1; id < 0x8d; id++) {
        if (areaKnownTest(id)) {
            if (areaMarkedTest(id)) {
                return 1;
            }
        } else if ((s32)dataFindKeyedRecordWithOverrides(id) != 0 &&
                   (appUnlockBitIsSet(id) || shopGetEntryAvailability(id) != 2)) {
            areaKnownSet(id, 1);
            areaMarkedSet(id, 1);
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
