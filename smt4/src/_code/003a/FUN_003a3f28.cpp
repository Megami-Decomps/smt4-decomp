/* NON_MATCHING: register allocation (retail keeps the screen in r4 and the slot table in r5) and the build merges the identical mode/substep store tails of the variant and category branches, which retail keeps separate. */
#include "shop/ShopScreen.h"

extern "C" {
s32 useCounterIsFinished(void);
void useCounterRelease(void);
s32 useCounterGetCurrentValue(void);
s32 useCounterGetValue(void);
void FUN_002a0cc8(s32 value);
void buttonHelpSelectMenuPreset(ShopScreen *screen);
s32 flaggedValueHolderGetTotal(ShopCategoryList *list);
void FUN_0027f3dc(ShopSlot *slots, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 FUN_0039fcd8(const void *, const void *);
s32 FUN_0039fd24(const void *, const void *);
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
s32 FUN_003a63a8(const void *, const void *);
s32 FUN_003a64cc(const void *, const void *);

/* Once the use counter has finished, leaves the sort state; otherwise sorts the current category's slots by the chosen key. */
void FUN_003a3f28(ShopScreen *screen)
{
    if (useCounterIsFinished()) {
        useCounterRelease();
        FUN_002a0cc8(0);
        buttonHelpSelectMenuPreset(screen);
        if (screen->variant == 1) {
            screen->mode = screen->category != 8 ? 15 : 16;
            screen->substep = 0;
            return;
        }
        if (screen->category == 7) {
            screen->mode = 6;
            screen->substep = 0;
            return;
        }
        screen->mode = screen->category == 8 ? 7 : 5;
        screen->substep = 0;
        return;
    }
    ShopSlotTable *table = &screen->tables[screen->category];
    flaggedValueHolderGetTotal(&screen->lists[screen->category]);
    switch (useCounterGetCurrentValue()) {
    case 3:
        if (useCounterGetValue() == 0)
            FUN_0027f3dc(table->slots, table->count, 4, FUN_003a0164);
        else
            FUN_0027f3dc(table->slots, table->count, 4, equipmentComparePowerThenOrder);
        break;
    case 7:
        if (screen->category == 8) {
            if (useCounterGetValue() == 0)
                FUN_0027f3dc(table->slots, table->count, 4, FUN_003a075c);
            else
                FUN_0027f3dc(table->slots, table->count, 4, FUN_003a06b8);
        } else if (useCounterGetValue() == 0) {
            FUN_0027f3dc(table->slots, table->count, 4, FUN_003a06fc);
        } else {
            FUN_0027f3dc(table->slots, table->count, 4, FUN_003a0674);
        }
        break;
    case 12:
        if (useCounterGetValue() == 0)
            FUN_0027f3dc(table->slots, table->count, 4, FUN_0039fd24);
        else
            FUN_0027f3dc(table->slots, table->count, 4, FUN_003a63a8);
        break;
    case 15:
        if (useCounterGetValue() == 0)
            FUN_0027f3dc(table->slots, table->count, 4, FUN_003a05e8);
        else
            FUN_0027f3dc(table->slots, table->count, 4, FUN_003a0078);
        break;
    case 16:
        if (useCounterGetValue() == 0)
            FUN_0027f3dc(table->slots, table->count, 4, FUN_003a0118);
        else
            FUN_0027f3dc(table->slots, table->count, 4, FUN_0039fcd8);
        break;
    case 28:
        if (useCounterGetValue() == 0)
            FUN_0027f3dc(table->slots, table->count, 4, FUN_003a0028);
        else
            FUN_0027f3dc(table->slots, table->count, 4, FUN_003a64cc);
        break;
    }
}

} /* extern "C" */
