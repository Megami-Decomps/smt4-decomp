#include "common.h"

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

extern QuestEntry *FUN_002a0d0c(void);
extern u32 FUN_0029ee54(QuestCursor *cursor);
extern void FUN_002b7bca(void *list, u32 count, u32 size, SortCompare compare);
extern void FUN_0027f3dc(void *list, u32 count, u32 size, SortCompare compare);

extern int entryCompareFlagsCategoryOrder(const void *, const void *);
extern int dataTable1bOr1cCompareRecordKeys(const void *, const void *);
extern int devilMaskCompare(const void *, const void *);
extern int FUN_001f62ec(const void *, const void *);
extern int FUN_002193bc(const void *, const void *);
extern int FUN_00219488(const void *, const void *);
extern int dataTableCompareRecordValues(const void *, const void *);
extern int FUN_002d04ac(const void *, const void *);
extern int recordCompareKindAndOrder(const void *, const void *);
extern int FUN_002f2798(const void *, const void *);

/* Sorts the menu's list with the comparison of the selected quest entry's kind (the primary or
 * the alternate one). */
void uiQuestSortListByEntryKind(s32 mode)
{
    QuestMenu *menu = g_uiQuest;

    if (mode == 0) {
        QuestEntry *entry = FUN_002a0d0c();
        u8 *info = &entry->kindAndAlternate;
        QuestCursor *cursor = &menu->cursor;
        u8 *list = menu->list;
        u32 primary = ~(*info >> 7) & 1;

        if ((*info & 0x7F) == 0x22) {
            if (primary) {
                FUN_002b7bca(list, FUN_0029ee54(cursor), 2, dataTable1bOr1cCompareRecordKeys);
            } else {
                FUN_002b7bca(list, FUN_0029ee54(cursor), 2, dataTableCompareRecordValues);
            }
        }
        if ((*info & 0x7F) == 0x21) {
            if (primary) {
                FUN_002b7bca(list, FUN_0029ee54(cursor), 2, FUN_001f62ec);
            } else {
                FUN_002b7bca(list, FUN_0029ee54(cursor), 2, recordCompareKindAndOrder);
            }
        }
        if ((*info & 0x7F) == 0x18) {
            if (primary) {
                FUN_002b7bca(list, FUN_0029ee54(cursor), 2, FUN_00219488);
            } else {
                FUN_002b7bca(list, FUN_0029ee54(cursor), 2, FUN_002f2798);
            }
        }
        if ((*info & 0x7F) == 0x19) {
            if (primary) {
                FUN_002b7bca(list, FUN_0029ee54(cursor), 2, entryCompareFlagsCategoryOrder);
            } else {
                FUN_002b7bca(list, FUN_0029ee54(cursor), 2, FUN_002193bc);
            }
        }
        if ((*info & 0x7F) == 0x1A) {
            if (primary) {
                FUN_0027f3dc(list, FUN_0029ee54(cursor), 2, devilMaskCompare);
            } else {
                FUN_0027f3dc(list, FUN_0029ee54(cursor), 2, FUN_002d04ac);
            }
        }
    }
}

} /* extern "C" */
