#include "common.h"
#include "status/StatusCamera.h"

extern "C" {

typedef int (*SortCompare)(const void *, const void *);

typedef struct QuestCursor {
    u8 data[0x12A];
} QuestCursor;

typedef struct QuestMenu {
    /* 0x000 */ u8 unk000[0x660];
    /* 0x660 */ QuestCursor cursor;
    /* 0x78A */ u8 list[1];
} QuestMenu;

/* The selected entry: byte 0x0E holds the kind in its low 7 bits; its top bit clear selects the
 * primary handlers. */
typedef struct QuestEntry {
    /* 0x00 */ u8 unk00[0x0E];
    /* 0x0E */ u8 kindAndAlternate;
} QuestEntry;

extern QuestMenu *g_uiQuest;

extern u32 gridNavigationGetItemCount(QuestCursor *cursor);
extern void qsort(void *list, u32 count, u32 size, SortCompare compare);
extern void arraySortQsort(void *list, u32 count, u32 size, SortCompare compare);

extern int entryCompareFlagsCategoryOrder(const void *, const void *);
extern int dataTable1bOr1cCompareRecordKeys(const void *, const void *);
extern int devilMaskCompare(const void *, const void *);
extern int FUN_001f62ec(const void *, const void *);
extern int questCompareForDisplayOrder(const void *, const void *);
extern int questCompareBySortKey(const void *, const void *);
extern int dataTableCompareRecordValues(const void *, const void *);
extern int FUN_002d04ac(const void *, const void *);
extern int recordCompareKindAndOrder(const void *, const void *);
extern int questCompareBySortKeyThenId(const void *, const void *);

/* Sorts the menu's list with the comparison of the selected quest entry's kind (the primary or
 * the alternate one). */
void uiQuestSortListByEntryKind(s32 mode)
{
    QuestMenu *menu = g_uiQuest;

    if (mode == 0) {
        QuestEntry *entry = reinterpret_cast<QuestEntry *>(gameDataGetSortPreferences());
        u8 *info = &entry->kindAndAlternate;
        QuestCursor *cursor = &menu->cursor;
        u8 *list = menu->list;
        u32 primary = ~(*info >> 7) & 1;

        if ((*info & 0x7F) == 0x22) {
            if (primary) {
                qsort(list, gridNavigationGetItemCount(cursor), 2, dataTable1bOr1cCompareRecordKeys);
            } else {
                qsort(list, gridNavigationGetItemCount(cursor), 2, dataTableCompareRecordValues);
            }
        }
        if ((*info & 0x7F) == 0x21) {
            if (primary) {
                qsort(list, gridNavigationGetItemCount(cursor), 2, FUN_001f62ec);
            } else {
                qsort(list, gridNavigationGetItemCount(cursor), 2, recordCompareKindAndOrder);
            }
        }
        if ((*info & 0x7F) == 0x18) {
            if (primary) {
                qsort(list, gridNavigationGetItemCount(cursor), 2, questCompareBySortKey);
            } else {
                qsort(list, gridNavigationGetItemCount(cursor), 2, questCompareBySortKeyThenId);
            }
        }
        if ((*info & 0x7F) == 0x19) {
            if (primary) {
                qsort(list, gridNavigationGetItemCount(cursor), 2, entryCompareFlagsCategoryOrder);
            } else {
                qsort(list, gridNavigationGetItemCount(cursor), 2, questCompareForDisplayOrder);
            }
        }
        if ((*info & 0x7F) == 0x1A) {
            if (primary) {
                arraySortQsort(list, gridNavigationGetItemCount(cursor), 2, devilMaskCompare);
            } else {
                arraySortQsort(list, gridNavigationGetItemCount(cursor), 2, FUN_002d04ac);
            }
        }
    }
}

} /* extern "C" */
