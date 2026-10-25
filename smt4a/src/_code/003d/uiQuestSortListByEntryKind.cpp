#include "common.h"
#include "event/2dEvent/2dEventTex.h"

extern "C" {

typedef int (*SortCompare)(const void *, const void *);

typedef struct QuestCursor {
    u8 data[0x12A];
} QuestCursor;

typedef struct QuestMenu {
    /* 0x000 */ u8 unk000[0x9AC];
    /* 0x9AC */ QuestCursor cursor;
    /* 0xAD6 */ u8 list[1];
} QuestMenu;

/* The selected entry: byte 0x0E holds the kind in its low 7 bits; its top bit clear selects the
 * primary handlers. */
typedef struct QuestEntry {
    /* 0x00 */ u8 unk00[0x0E];
    /* 0x0E */ u8 kindAndAlternate;
} QuestEntry;

extern QuestMenu *g_uiQuest;

extern u32 objectApplyIfUnblocked(QuestCursor *cursor);
extern void qsort(void *list, u32 count, u32 size, SortCompare compare);
extern void arraySortQsort(void *list, u32 count, u32 size, SortCompare compare);

extern int dataTable1bOr1cCompareRecordKeys(const void *, const void *);
extern int dataTableCompareRecordValues(const void *, const void *);
extern int FUN_002b2b34(const void *, const void *);
extern int itemCompareMappedGroupAndKeyDescending(const void *, const void *);
extern int FUN_002fdc2c(const void *, const void *);
extern int FUN_003759f0(const void *, const void *);
extern int entryCompareFlagsCategoryOrder(const void *, const void *);
extern int FUN_002fdb20(const void *, const void *);

/* Sorts the menu's list with the comparison of the selected quest entry's kind (the primary or
 * the alternate one). */
void uiQuestSortListByEntryKind(s32 mode)
{
    QuestMenu *menu = g_uiQuest;

    if (mode == 0) {
        QuestEntry *entry = reinterpret_cast<QuestEntry *>(FUN_0026140c());
        u8 *info = &entry->kindAndAlternate;
        QuestCursor *cursor = &menu->cursor;
        u8 *list = menu->list;
        u32 primary = ~(*info >> 7) & 1;

        if ((*info & 0x7F) == 0x22) {
            if (primary) {
                qsort(list, objectApplyIfUnblocked(cursor), 2, dataTable1bOr1cCompareRecordKeys);
            } else {
                qsort(list, objectApplyIfUnblocked(cursor), 2, dataTableCompareRecordValues);
            }
        }
        if ((*info & 0x7F) == 0x21) {
            if (primary) {
                qsort(list, objectApplyIfUnblocked(cursor), 2, FUN_002b2b34);
            } else {
                qsort(list, objectApplyIfUnblocked(cursor), 2, itemCompareMappedGroupAndKeyDescending);
            }
        }
        if ((*info & 0x7F) == 0x18) {
            if (primary) {
                qsort(list, objectApplyIfUnblocked(cursor), 2, FUN_002fdc2c);
            } else {
                qsort(list, objectApplyIfUnblocked(cursor), 2, FUN_003759f0);
            }
        }
        if ((*info & 0x7F) == 0x19) {
            if (primary) {
                arraySortQsort(list, objectApplyIfUnblocked(cursor), 2, entryCompareFlagsCategoryOrder);
            } else {
                arraySortQsort(list, objectApplyIfUnblocked(cursor), 2, FUN_002fdb20);
            }
        }
    }
}

} /* extern "C" */
