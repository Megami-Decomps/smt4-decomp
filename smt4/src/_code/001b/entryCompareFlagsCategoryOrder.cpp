/* Orders entries by completion, category six last, then their table sort order. */
#include "quest_center/QuestRecord.h"

extern "C" {
u32 questIsCompleted(u16 id);

static inline s32 compareEntryOrder(const u16 *left, const u16 *right)
{
    QuestRecord *first = dataTable1bOr1cGetRecord(*left);
    QuestRecord *second = dataTable1bOr1cGetRecord(*right);
    s32 order = 0;
    if (first != NULL && second != NULL) {
        order = first->order - second->order;
    }
    return order;
}

s32 entryCompareFlagsCategoryOrder(const u16 *left, const u16 *right)
{
    u32 firstFlags = questIsCompleted(*left);
    s32 order = 0;
    u32 secondFlags = questIsCompleted(*right);
    if ((secondFlags & ~firstFlags) != 0) {
        order = -1;
    }
    if ((firstFlags & ~secondFlags) != 0) {
        order = 1;
    } else if (order == 0) {
        QuestRecord *first = dataTable1bOr1cGetRecord(*left);
        QuestRecord *second = dataTable1bOr1cGetRecord(*right);
        if (first == NULL) {
            return 0;
        }
        if (second == NULL) {
            return 0;
        }
        if (first->kind != 6) {
            if (second->kind == 6) {
                order = -1;
            }
        } else if (second->kind != 6) {
            order = 1;
        }
        if (order == 0) {
            order = compareEntryOrder(left, right);
        }
    }
    return order;
}
}
