/* NON_MATCHING: status/category comparison branches are shared differently from retail. */
/* Orders entries by status, category six last, then their table sort order. */
#include "gamedata/EntrySortRecord.h"

extern "C" {
u32 partyEntryFlagsBit3(u16 id);
EntrySortRecord *FUN_001ad9b4(u16 id);

static inline s32 compareEntryOrder(const u16 *left, const u16 *right)
{
    EntrySortRecord *first = FUN_001ad9b4(*left);
    EntrySortRecord *second = FUN_001ad9b4(*right);
    s32 order = 0;
    if (first != NULL && second != NULL) {
        order = first->order - second->order;
    }
    return order;
}

s32 FUN_002417a8(const u16 *left, const u16 *right)
{
    u32 firstFlags = partyEntryFlagsBit3(*left);
    s32 order = 0;
    u32 secondFlags = partyEntryFlagsBit3(*right);
    if ((secondFlags & ~firstFlags) != 0) {
        order = -1;
    }
    if ((firstFlags & ~secondFlags) != 0) {
        order = 1;
    } else if (order == 0) {
        EntrySortRecord *first = FUN_001ad9b4(*left);
        EntrySortRecord *second = FUN_001ad9b4(*right);
        if (first == NULL || second == NULL) {
            return 0;
        }
        if (first->category != 6) {
            if (second->category == 6) {
                return -1;
            }
        } else if (second->category != 6) {
            return 1;
        }
        order = compareEntryOrder(left, right);
    }
    return order;
}
}
