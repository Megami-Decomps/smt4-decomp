#include "quest_center/QuestRecord.h"

static inline s32 entryCategoryPriority(u8 kind)
{
    switch (kind) {
    case 6: return 1;
    case 0: return 2;
    case 4: return 3;
    case 5: return 4;
    case 2: return 5;
    case 3: return 6;
    case 7: return 7;
    case 8: return 8;
    case 9: return 9;
    default: return 0;
    }
}
extern "C" s32 FUN_001f62ec(const u16 *leftId, const u16 *rightId)
{
    const QuestRecord *left = dataTable1bOr1cGetRecord(*leftId);
    const QuestRecord *right = dataTable1bOr1cGetRecord(*rightId);
    if (!left)
        return 0;
    if (!right)
        return 0;
    s32 result = entryCategoryPriority(left->kind) - entryCategoryPriority(right->kind);
    if (result != 0)
        return result;
    left = dataTable1bOr1cGetRecord(*leftId);
    right = dataTable1bOr1cGetRecord(*rightId);
    if (!left)
        return 0;
    if (!right)
        return 0;
    return left->order - right->order;
}
