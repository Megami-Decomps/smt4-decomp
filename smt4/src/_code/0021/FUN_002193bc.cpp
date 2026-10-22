#include "shard/W6_W6Match5_SecondarySort.h"

extern "C" u32 questIsCompleted(u16 id);

static __inline s32 compareQuestOrder(const u16* left, const u16* right)
{
    SecondarySortRecord* a = dataTable1bOr1cGetRecord(*left);
    SecondarySortRecord* b = dataTable1bOr1cGetRecord(*right);
    s32 result = 0;
    if (a != NULL && b != NULL) {
        result = b->classification.order - a->classification.order;
    }
    return result;
}

// Sort quests by completion status, special category, then descending display order.
extern "C" s32 FUN_002193bc(const u16* left, const u16* right)
{
    u32 completedLeft = questIsCompleted(*left);
    s32 result = 0;
    u32 completedRight = questIsCompleted(*right);
    if ((completedRight & ~completedLeft) != 0) {
        result = 1;
    }
    if ((completedLeft & ~completedRight) != 0) {
        result = -1;
    } else if (result == 0) {
        SecondarySortRecord* a = dataTable1bOr1cGetRecord(*left);
        SecondarySortRecord* b = dataTable1bOr1cGetRecord(*right);
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
