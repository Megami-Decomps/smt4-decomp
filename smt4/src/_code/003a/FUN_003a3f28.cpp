/* NON_MATCHING: register allocation (retail keeps the screen in r4 and the slot table in r5) and the build merges the identical mode/substep store tails of the variant and category branches, which retail keeps separate. */
#include "shop/ShopScreen.h"
#include "status/StatusCamera.h"

extern "C" {
s32 useCounterIsFinished(void);
void useCounterRelease(void);
s32 useCounterGetCurrentValue(void);
s32 useCounterGetValue(void);
s32 flaggedValueHolderGetTotal(ShopCategoryList *list);
void arraySortQsort(ShopSlot *slots, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 FUN_0039fcd8(const void *, const void *);
s32 halfDifference(const void *, const void *);
s32 equipmentComparePowerThenOrder(const void *, const void *);
s32 FUN_003a0028(const void *, const void *);
s32 FUN_003a0078(const void *, const void *);
s32 FUN_003a0118(const void *, const void *);
s32 FUN_003a0164(const void *, const void *);
s32 FUN_003a05e8(const void *, const void *);
s32 FUN_003a0674(const void *, const void *);
s32 FUN_003a06b8(const void *, const void *);
s32 FUN_003a06fc(const void *, const void *);
s32 FUN_003a075c(const void *, const void *);
s32 recordCompareValues(const void *, const void *);
s32 rankedEntryCompare(const void *, const void *);

/* Once the use counter has finished, leaves the sort state; otherwise sorts the current category's slots by the chosen key. */
void FUN_003a3f28(ShopScreen *screen)
{
    if (useCounterIsFinished()) {
        useCounterRelease();
        gameGlobalsSetSubScreenActive(0);
        buttonHelpSelectMenuPreset(screen);
        if (screen->help.variant == 1) {
            screen->pageTransition.substep = 0;
            if (screen->slot != 8) {
                screen->pageTransition.phase = 15;
            } else {
                screen->pageTransition.phase = 16;
            }
            return;
        }
        if (screen->slot == 7) {
            screen->pageTransition.phase = 6;
            screen->pageTransition.substep = 0;
            return;
        }
        if (screen->slot == 8) {
            screen->pageTransition.phase = 7;
        } else {
            screen->pageTransition.phase = 5;
        }
        screen->pageTransition.substep = 0;
        return;
    }
    ShopSlotTable *table = &screen->lists[screen->slot];
    flaggedValueHolderGetTotal(&screen->slotInfo[screen->slot]);
    switch (useCounterGetCurrentValue()) {
    case 3:
        if (useCounterGetValue() == 0)
            arraySortQsort(table->items, table->count, sizeof(ShopSlot), FUN_003a0164);
        else
            arraySortQsort(table->items, table->count, sizeof(ShopSlot), equipmentComparePowerThenOrder);
        break;
    case 7:
        if (screen->slot == 8) {
            if (useCounterGetValue() == 0)
                arraySortQsort(table->items, table->count, sizeof(ShopSlot), FUN_003a075c);
            else
                arraySortQsort(table->items, table->count, sizeof(ShopSlot), FUN_003a06b8);
        } else if (useCounterGetValue() == 0) {
            arraySortQsort(table->items, table->count, sizeof(ShopSlot), FUN_003a06fc);
        } else {
            arraySortQsort(table->items, table->count, sizeof(ShopSlot), FUN_003a0674);
        }
        break;
    case 12:
        if (useCounterGetValue() == 0)
            arraySortQsort(table->items, table->count, sizeof(ShopSlot), halfDifference);
        else
            arraySortQsort(table->items, table->count, sizeof(ShopSlot), recordCompareValues);
        break;
    case 15:
        if (useCounterGetValue() == 0)
            arraySortQsort(table->items, table->count, sizeof(ShopSlot), FUN_003a05e8);
        else
            arraySortQsort(table->items, table->count, sizeof(ShopSlot), FUN_003a0078);
        break;
    case 16:
        if (useCounterGetValue() == 0)
            arraySortQsort(table->items, table->count, sizeof(ShopSlot), FUN_003a0118);
        else
            arraySortQsort(table->items, table->count, sizeof(ShopSlot), FUN_0039fcd8);
        break;
    case 28:
        if (useCounterGetValue() == 0)
            arraySortQsort(table->items, table->count, sizeof(ShopSlot), FUN_003a0028);
        else
            arraySortQsort(table->items, table->count, sizeof(ShopSlot), rankedEntryCompare);
        break;
    }
}

} /* extern "C" */
