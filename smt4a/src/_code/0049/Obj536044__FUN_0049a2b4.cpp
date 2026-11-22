/* NON_MATCHING: 6 lines, scheduling of the two addresses formed before flaggedValueHolderGetTotal: retail
 * multiplies the slot for both, then starts the list address and forms the holder's; the build finishes the list
 * address first. (A single-use `cursor = &slotInfo[slot]` local before the list leaves one swapped pair; it is not
 * written.) The case order is the source order that compiles closest: retail lays the case bodies out as 0xC, 0x1C,
 * 7, 3, 0x10, 0xF, and this order differs from it only in where case 0xC sits (written in that layout order the
 * function is 46 lines off, in ascending order 114). */
#include "classes/Obj536044.h"
#include "shard/Shard004A.h"

typedef s32 (*SortCompare)(const void *, const void *);

extern "C" {
u8 useCounterIsFinished(void);
void useCounterRelease(void);
s32 useCounterGetValue(void);
void gameGlobalsSetMenuOpenFlag(u8 value);
void FUN_00498ff0(Obj536044 *menu);
u8 useCounterGetCurrentValue(void);
void arraySortQsort(void *entries, u32 count, u32 size, SortCompare compare);
s32 FUN_004938d0(const void *, const void *);
s32 halfDifference(const void *, const void *);
s32 FUN_0049393c(const void *, const void *);
s32 FUN_00493d38(const void *, const void *);
s32 contentCompareKindValueAscending(const void *, const void *);
s32 FUN_00493e94(const void *, const void *);
s32 FUN_00493ee0(const void *, const void *);
s32 contentCompareKindValueDescending(const void *, const void *);
s32 FUN_00494448(const void *, const void *);
s32 FUN_0049448c(const void *, const void *);
s32 FUN_004944d0(const void *, const void *);
s32 FUN_00494530(const void *, const void *);
s32 recordCompareValues(const void *, const void *);
s32 rankedEntryCompare(const void *, const void *);

} /* extern "C" */

/* Per frame: when the counter finishes, moves to the next state; otherwise re-sorts the slot's list in the
 * selected order. */
void Obj536044::FUN_0049a2b4()
{
    if (useCounterIsFinished() != 0) {
        useCounterRelease();
        gameGlobalsSetMenuOpenFlag(0);
        FUN_00498ff0(this);
        if (mode == 1) {
            if (slot != 8) {
                changeState(0x11);
            } else {
                changeState(0x12);
            }
            return;
        }
        if (slot == 7) {
            changeState(8);
            return;
        }
        if (slot == 8) {
            changeState(9);
        } else {
            changeState(7);
        }
        return;
    }
    EquipmentMenuPage *list = &lists[slot];
    flaggedValueHolderGetTotal(&slotInfo[slot].holder);
    switch (useCounterGetCurrentValue()) {
    case 0x1C:
        if (useCounterGetValue() == 0) {
            arraySortQsort(list->items, list->count, 4, FUN_00493d38);
            return;
        }
        arraySortQsort(list->items, list->count, 4, rankedEntryCompare);
        return;
    case 7:
        if (slot == 8) {
            if (useCounterGetValue() == 0) {
                arraySortQsort(list->items, list->count, 4, FUN_00494530);
                return;
            }
            arraySortQsort(list->items, list->count, 4, FUN_0049448c);
            return;
        }
        if (useCounterGetValue() == 0) {
            arraySortQsort(list->items, list->count, 4, FUN_004944d0);
            return;
        }
        arraySortQsort(list->items, list->count, 4, FUN_00494448);
        return;
    case 3:
        if (useCounterGetValue() == 0) {
            arraySortQsort(list->items, list->count, 4, FUN_00493ee0);
            return;
        }
        arraySortQsort(list->items, list->count, 4, FUN_0049393c);
        return;
    case 0xC:
        if (useCounterGetValue() == 0) {
            arraySortQsort(list->items, list->count, 4, halfDifference);
            return;
        }
        arraySortQsort(list->items, list->count, 4, recordCompareValues);
        return;
    case 0x10:
        if (useCounterGetValue() == 0) {
            arraySortQsort(list->items, list->count, 4, FUN_00493e94);
            return;
        }
        arraySortQsort(list->items, list->count, 4, FUN_004938d0);
        return;
    case 0xF:
        if (useCounterGetValue() == 0) {
            arraySortQsort(list->items, list->count, 4, contentCompareKindValueDescending);
            return;
        }
        arraySortQsort(list->items, list->count, 4, contentCompareKindValueAscending);
        return;
    }
}
