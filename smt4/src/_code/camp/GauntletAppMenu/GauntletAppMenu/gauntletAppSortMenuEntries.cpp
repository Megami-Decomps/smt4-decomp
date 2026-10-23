#include "camp/GauntletAppMenu/GauntletAppMenu.h"

extern "C" {
extern GauntletAppMenuWork *g_gauntletAppMenu;
const void *FUN_002a0d0c();
u32 FUN_0029ee54(const void *controller);
void FUN_002b7bca(void *entries, u32 count, u32 size, s32 (*compare)(const void *, const void *));
void FUN_0027f3dc(void *entries, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 itemCompareCategoryPriorityValue(const void *, const void *);
s32 itemCompareCategoryPriorityDescending(const void *, const void *);
s32 appComparePurchaseOrder(const void *, const void *);
s32 entryRefCompareByKindLevelOrder(const void *, const void *);
s32 FUN_0019d758(const void *, const void *);
s32 FUN_001f64c0(const void *, const void *);
s32 gauntletAppCompareBySortKeys(const void *, const void *);
s32 gauntletAppCompareBySortKeysDescending(const void *, const void *);

void gauntletAppSortMenuEntries()
{
    GauntletAppMenuWork *menu = g_gauntletAppMenu;
    struct SortSettings { u8 prefix[13]; u8 mode; };
    const u8 &sortMode = static_cast<const SortSettings *>(FUN_002a0d0c())->mode;
    u8 ascending = (sortMode & 0x80) == 0;
    if ((sortMode & 0x7f) == 0x21) {
        if (ascending != 0) {
            FUN_002b7bca(menu->list.entries, FUN_0029ee54(menu->list.controller), 4, itemCompareCategoryPriorityValue);
        } else {
            FUN_002b7bca(menu->list.entries, FUN_0029ee54(menu->list.controller), 4, itemCompareCategoryPriorityDescending);
        }
    }
    if ((sortMode & 0x7f) == 0x15) {
        if (ascending != 0) {
            FUN_002b7bca(menu->list.entries, FUN_0029ee54(menu->list.controller), 4, appComparePurchaseOrder);
        } else {
            FUN_002b7bca(menu->list.entries, FUN_0029ee54(menu->list.controller), 4, entryRefCompareByKindLevelOrder);
        }
    }
    if ((sortMode & 0x7f) == 0x16) {
        if (ascending != 0) {
            FUN_002b7bca(menu->list.entries, FUN_0029ee54(menu->list.controller), 4, FUN_0019d758);
        } else {
            FUN_002b7bca(menu->list.entries, FUN_0029ee54(menu->list.controller), 4, FUN_001f64c0);
        }
    }
    if ((sortMode & 0x7f) == 3) {
        if (ascending != 0) {
            FUN_0027f3dc(menu->list.entries, FUN_0029ee54(menu->list.controller), 4, gauntletAppCompareBySortKeys);
        } else {
            FUN_0027f3dc(menu->list.entries, FUN_0029ee54(menu->list.controller), 4, gauntletAppCompareBySortKeysDescending);
        }
    }
}
}
