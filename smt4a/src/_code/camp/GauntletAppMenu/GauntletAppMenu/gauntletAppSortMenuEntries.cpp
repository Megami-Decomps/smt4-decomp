#include "camp/GauntletAppMenu/GauntletAppMenu.h"

extern "C" {
extern GauntletAppMenuWork *g_gauntletAppMenu;
const void *FUN_0026140c();
u32 objectApplyIfUnblocked(const void *controller);
void qsort(void *entries, u32 count, u32 size, s32 (*compare)(const void *, const void *));
void arraySortQsort(void *entries, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 itemCompareCategoryThenValue(const void *, const void *);
s32 gauntletAppCompareCategoryAndValueDescending(const void *, const void *);
s32 appComparePurchaseOrder(const void *, const void *);
s32 entryRefCompareByKindLevelOrder(const void *, const void *);
s32 FUN_00221a08(const void *, const void *);
s32 FUN_002b2c44(const void *, const void *);
s32 gauntletAppCompareBySortKeys(const void *, const void *);
s32 gauntletAppCompareBySortKeysDescending(const void *, const void *);

void gauntletAppSortMenuEntries()
{
    GauntletAppMenuWork *menu = g_gauntletAppMenu;
    struct SortSettings { u8 prefix[13]; u8 mode; };
    const u8 &sortMode = static_cast<const SortSettings *>(FUN_0026140c())->mode;
    u8 ascending = (sortMode & 0x80) == 0;
    if ((sortMode & 0x7f) == 0x21) {
        if (ascending != 0) {
            qsort(menu->list.entries, objectApplyIfUnblocked(menu->list.controller), 4, itemCompareCategoryThenValue);
        } else {
            qsort(menu->list.entries, objectApplyIfUnblocked(menu->list.controller), 4, gauntletAppCompareCategoryAndValueDescending);
        }
    }
    if ((sortMode & 0x7f) == 0x15) {
        if (ascending != 0) {
            qsort(menu->list.entries, objectApplyIfUnblocked(menu->list.controller), 4, appComparePurchaseOrder);
        } else {
            qsort(menu->list.entries, objectApplyIfUnblocked(menu->list.controller), 4, entryRefCompareByKindLevelOrder);
        }
    }
    if ((sortMode & 0x7f) == 0x16) {
        if (ascending != 0) {
            qsort(menu->list.entries, objectApplyIfUnblocked(menu->list.controller), 4, FUN_00221a08);
        } else {
            qsort(menu->list.entries, objectApplyIfUnblocked(menu->list.controller), 4, FUN_002b2c44);
        }
    }
    if ((sortMode & 0x7f) == 3) {
        if (ascending != 0) {
            arraySortQsort(menu->list.entries, objectApplyIfUnblocked(menu->list.controller), 4, gauntletAppCompareBySortKeys);
        } else {
            arraySortQsort(menu->list.entries, objectApplyIfUnblocked(menu->list.controller), 4, gauntletAppCompareBySortKeysDescending);
        }
    }
}
}
