/* NON_MATCHING: retail writes the phase/step/previous-phase stores through one writeback pointer and loads the list count with a register-offset ldrh (mov r0,#0x1000; ldrh r1,[r0,r5]), and orders the sort-kind compare tree differently (beq/bge targets); this build uses separate stores, add+ldrh and a different branch layout. */
#include "common.h"

/* One page's sort list: its u32 entries followed by their count (the pages are 0x1002 bytes apart). */
__packed struct SortList {
    /* 0x0000 */ u8 entries[0x1000]; /* four-byte elements */
    /* 0x1000 */ u16 count;
};

/* The sorted menu's state: the phase machine, the page holders and one sort list per page. */
__packed struct SortMenu {
    /* 0x0000 */ u8 unk0000[4];
    /* 0x0004 */ s32 phase;
    /* 0x0008 */ s32 step;
    /* 0x000C */ u8 unk000C[4];
    /* 0x0010 */ s32 previousPhase;
    /* 0x0014 */ s32 reentered;
    /* 0x0018 */ u8 unk0018[0xB40 - 0x18];
    /* 0x0B40 */ s32 page;
    /* 0x0B44 */ u8 unk0B44[0xB60 - 0xB44];
    /* 0x0B60 */ u8 holders[8][0x74];
    /* 0x0F00 */ u8 unk0F00[0xF74 - 0xF00];
    /* 0x0F74 */ SortList lists[8];
};

typedef s32 (*SortCompare)(const void *, const void *);

extern "C" {
u8 useCounterIsFinished(void);
void useCounterRelease(void);
s32 useCounterGetValue(void);
void FUN_003343f0(u8 value);
void FUN_00498ff0(SortMenu *menu);
u32 flaggedValueHolderGetTotal(const void *holder);
u8 useCounterGetCurrentValue(void);
void arraySortQsort(void *entries, u32 count, u32 size, SortCompare compare);
s32 FUN_004938d0(const void *, const void *);
s32 halfDifference(const void *, const void *);
s32 FUN_0049393c(const void *, const void *);
s32 FUN_00493d38(const void *, const void *);
s32 FUN_00493d88(const void *, const void *);
s32 FUN_00493e94(const void *, const void *);
s32 FUN_00493ee0(const void *, const void *);
s32 FUN_004943bc(const void *, const void *);
s32 FUN_00494448(const void *, const void *);
s32 FUN_0049448c(const void *, const void *);
s32 FUN_004944d0(const void *, const void *);
s32 FUN_00494530(const void *, const void *);
s32 recordCompareValues(const void *, const void *);
s32 FUN_0049d0f0(const void *, const void *);

/* Per frame: when the counter finishes, moves to the next phase; otherwise re-sorts the current page's list in the selected order. */
void FUN_0049a2b4(SortMenu *menu)
{
    if (useCounterIsFinished() != 0) {
        useCounterRelease();
        FUN_003343f0(0);
        FUN_00498ff0(menu);
        s32 page = menu->page;
        if (menu->reentered == 1) {
            s32 previous = menu->phase;
            s32 next;
            if (page == 8) {
                next = 0x12;
            } else {
                next = 0x11;
            }
            menu->phase = next;
            menu->step = 0;
            menu->previousPhase = previous;
            return;
        }
        if (page == 7) {
            s32 previous = menu->phase;
            menu->phase = 8;
            menu->step = 0;
            menu->previousPhase = previous;
            return;
        }
        s32 previous = menu->phase;
        s32 next;
        if (page == 8) {
            next = 9;
        } else {
            next = 7;
        }
        menu->phase = next;
        menu->step = 0;
        menu->previousPhase = previous;
    } else {
        SortList *list = &menu->lists[menu->page];
        flaggedValueHolderGetTotal(menu->holders[menu->page]);
        s32 order = useCounterGetCurrentValue();
        if (order == 0xf) {
            if (useCounterGetValue() == 0) {
                arraySortQsort(list->entries, list->count, 4, FUN_004943bc);
                return;
            }
            arraySortQsort(list->entries, list->count, 4, FUN_00493d88);
            return;
        }
        if (order < 0xf) {
            if (order == 3) {
                if (useCounterGetValue() == 0) {
                    arraySortQsort(list->entries, list->count, 4, FUN_00493ee0);
                    return;
                }
                arraySortQsort(list->entries, list->count, 4, FUN_0049393c);
                return;
            }
            if (order == 7) {
                if (menu->page == 8) {
                    if (useCounterGetValue() == 0) {
                        arraySortQsort(list->entries, list->count, 4, FUN_00494530);
                        return;
                    }
                    arraySortQsort(list->entries, list->count, 4, FUN_0049448c);
                    return;
                }
                if (useCounterGetValue() == 0) {
                    arraySortQsort(list->entries, list->count, 4, FUN_004944d0);
                    return;
                }
                arraySortQsort(list->entries, list->count, 4, FUN_00494448);
                return;
            }
            if (order == 0xc) {
                if (useCounterGetValue() == 0) {
                    arraySortQsort(list->entries, list->count, 4, halfDifference);
                    return;
                }
                arraySortQsort(list->entries, list->count, 4, recordCompareValues);
                return;
            }
        } else {
            if (order == 0x10) {
                if (useCounterGetValue() == 0) {
                    arraySortQsort(list->entries, list->count, 4, FUN_00493e94);
                    return;
                }
                arraySortQsort(list->entries, list->count, 4, FUN_004938d0);
                return;
            }
            if (order == 0x1c) {
                if (useCounterGetValue() == 0) {
                    arraySortQsort(list->entries, list->count, 4, FUN_00493d38);
                    return;
                }
                arraySortQsort(list->entries, list->count, 4, FUN_0049d0f0);
                return;
            }
        }
    }
}
}
