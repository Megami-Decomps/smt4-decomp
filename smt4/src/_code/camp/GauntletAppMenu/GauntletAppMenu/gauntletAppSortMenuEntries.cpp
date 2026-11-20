#include "camp/GauntletAppMenu/GauntletAppMenu.h"
#include "status/StatusCamera.h"
#include "shard/W6_W6Match6_SortMenu.h"
#include "code/Code0029_VariantA.h"

extern "C" {
extern GauntletAppMenuWork *g_gauntletAppMenu;
void qsort(void *entries, u32 count, u32 size, s32 (*compare)(const void *, const void *));
void arraySortQsort(void *entries, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 itemCompareCategoryPriorityValue(const void *, const void *);
s32 itemCompareCategoryPriorityDescending(const void *, const void *);
s32 appComparePurchaseOrder(const void *, const void *);
s32 entryRefCompareByKindLevelOrder(const void *, const void *);
s32 appCompareFlagsThenSortKey(const void *, const void *);
s32 appCompareFlagsThenSortKeyDescending(const void *, const void *);
s32 gauntletAppCompareBySortKeys(const void *, const void *);
s32 gauntletAppCompareBySortKeysDescending(const void *, const void *);

/* Sorts the menu's entries by the menu's sort preference: its key picks the comparison, bit 7 the order. */
void gauntletAppSortMenuEntries(void)
{
    GauntletAppMenuWork *menu = g_gauntletAppMenu;
    const u8 *preference = &gameDataGetSortPreferences()[GAUNTLET_APP_SORT_PREFERENCE];
    u8 ascending = (*preference & SORT_PREFERENCE_DESCENDING) == 0;

    /* Key 0x21: item category, then value. */
    if ((*preference & SORT_PREFERENCE_KEY_MASK) == 0x21) {
        if (ascending != 0) {
            qsort(menu->list.entries, gridNavigationGetItemCount(menu->list.controller), 4, itemCompareCategoryPriorityValue);
        } else {
            qsort(menu->list.entries, gridNavigationGetItemCount(menu->list.controller), 4, itemCompareCategoryPriorityDescending);
        }
    }
    /* Key 0x15: purchasable first, then the record order. */
    if ((*preference & SORT_PREFERENCE_KEY_MASK) == 0x15) {
        if (ascending != 0) {
            qsort(menu->list.entries, gridNavigationGetItemCount(menu->list.controller), 4, appComparePurchaseOrder);
        } else {
            qsort(menu->list.entries, gridNavigationGetItemCount(menu->list.controller), 4, entryRefCompareByKindLevelOrder);
        }
    }
    /* Key 0x16: flagged entries first, then the record's sort key. */
    if ((*preference & SORT_PREFERENCE_KEY_MASK) == 0x16) {
        if (ascending != 0) {
            qsort(menu->list.entries, gridNavigationGetItemCount(menu->list.controller), 4, appCompareFlagsThenSortKey);
        } else {
            qsort(menu->list.entries, gridNavigationGetItemCount(menu->list.controller), 4, appCompareFlagsThenSortKeyDescending);
        }
    }
    /* Key 3: the record's primary, then secondary key. */
    if ((*preference & SORT_PREFERENCE_KEY_MASK) == 3) {
        if (ascending != 0) {
            arraySortQsort(menu->list.entries, gridNavigationGetItemCount(menu->list.controller), 4, gauntletAppCompareBySortKeys);
        } else {
            arraySortQsort(menu->list.entries, gridNavigationGetItemCount(menu->list.controller), 4, gauntletAppCompareBySortKeysDescending);
        }
    }
}

} /* extern "C" */
