#include "shard/W6_W6Match5_SecondarySort.h"

extern "C" {
    extern "C" SecondarySortRecord *FUN_001ad9b4(u16);
}

extern "C" u32 partyEntryFlagsBit3(u16 id);

static __inline s32 compareQuestOrder(const u16* left, const u16* right)
{
    SecondarySortRecord* a = FUN_001ad9b4(*left);
    SecondarySortRecord* b = FUN_001ad9b4(*right);
    s32 result = 0;
    if (a != NULL && b != NULL) {
        result = b->classification.order - a->classification.order;
    }
    return result;
}

// Sort quests by completion status, special category, then descending display order.
extern "C" s32 FUN_002fdb20(const u16* left, const u16* right)
{
    u32 completedLeft = partyEntryFlagsBit3(*left);
    s32 result = 0;
    u32 completedRight = partyEntryFlagsBit3(*right);
    if ((completedRight & ~completedLeft) != 0) {
        result = 1;
    }
    if ((completedLeft & ~completedRight) != 0) {
        result = -1;
    } else if (result == 0) {
        SecondarySortRecord* a = FUN_001ad9b4(*left);
        SecondarySortRecord* b = FUN_001ad9b4(*right);
        if (a == NULL) {
            return 0;
        }
        if (b == NULL) {
            return 0;
        }
        if (a->classification.kind != 6 && b->classification.kind == 6) {
            result = 1;
        } else if (a->classification.kind == 6 && b->classification.kind != 6) {
            result = -1;
        } else {
            result = compareQuestOrder(left, right);
        }
    }
    return result;
}
