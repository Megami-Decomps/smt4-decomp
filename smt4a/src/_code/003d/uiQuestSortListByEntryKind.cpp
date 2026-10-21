#include "common.h"

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

extern QuestEntry *FUN_0026140c(void);
extern u32 FUN_002c2c68(QuestCursor *cursor);
extern void qsort(void *list, u32 count, u32 size, SortCompare compare);
extern void arraySortQsort(void *list, u32 count, u32 size, SortCompare compare);

extern int dataTable1bOr1cCompareRecordKeys(const void *, const void *);
extern int dataTableCompareRecordValues(const void *, const void *);
extern int FUN_002b2b34(const void *, const void *);
extern int FUN_0034f46c(const void *, const void *);
extern int FUN_002fdc2c(const void *, const void *);
extern int FUN_003759f0(const void *, const void *);
extern int FUN_002417a8(const void *, const void *);
extern int FUN_002fdb20(const void *, const void *);

/* Sorts the menu's list with the comparison of the selected quest entry's kind (the primary or
 * the alternate one). */
void uiQuestSortListByEntryKind(s32 mode)
{
    QuestMenu *menu = g_uiQuest;

    if (mode == 0) {
        QuestEntry *entry = FUN_0026140c();
        u8 *info = &entry->kindAndAlternate;
        QuestCursor *cursor = &menu->cursor;
        u8 *list = menu->list;
        u32 primary = ~(*info >> 7) & 1;

        if ((*info & 0x7F) == 0x22) {
            if (primary) {
                qsort(list, FUN_002c2c68(cursor), 2, dataTable1bOr1cCompareRecordKeys);
            } else {
                qsort(list, FUN_002c2c68(cursor), 2, dataTableCompareRecordValues);
            }
        }
        if ((*info & 0x7F) == 0x21) {
            if (primary) {
                qsort(list, FUN_002c2c68(cursor), 2, FUN_002b2b34);
            } else {
                qsort(list, FUN_002c2c68(cursor), 2, FUN_0034f46c);
            }
        }
        if ((*info & 0x7F) == 0x18) {
            if (primary) {
                qsort(list, FUN_002c2c68(cursor), 2, FUN_002fdc2c);
            } else {
                qsort(list, FUN_002c2c68(cursor), 2, FUN_003759f0);
            }
        }
        if ((*info & 0x7F) == 0x19) {
            if (primary) {
                arraySortQsort(list, FUN_002c2c68(cursor), 2, FUN_002417a8);
            } else {
                arraySortQsort(list, FUN_002c2c68(cursor), 2, FUN_002fdb20);
            }
        }
    }
}

} /* extern "C" */
