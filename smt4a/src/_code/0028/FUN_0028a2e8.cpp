/* NON_MATCHING: retail spills the reset flag with `push {r0, ...}` and evaluates the first data-table lookup, then the kind test, before the second lookup in a different block order; ours keeps the flag in sl and merges the count tests (147 rows against 145). */
#include "common.h"
#include "gamedata/SearchTable.h"
#include "event/2dEvent/2dEventTex.h"
#include "code/Code002a_VariantA.h"

struct UniteDraftState {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 unk10[0x20];
    /* 0x30 */ u8 filled[16];
};

/* The unite menu as this setup step touches it. */
struct UniteMenu {
    /* 0x0000 */ u8 unk0000[0x438];
    /* 0x0438 */ s16 touchIds[8];
    /* 0x0448 */ u8 unk0448[0x2A];
    /* 0x0472 */ s16 backTouchId;
    /* 0x0474 */ s16 nextTouchId;
    /* 0x0476 */ s16 prevTouchId;
    /* 0x0478 */ u8 unk0478[0x84];
    /* 0x04FC */ u8 list[0x8D80];
    /* 0x927C */ s32 entryIndices[16];
};

extern "C" {

extern UniteMenu *g_unite;

s32 resourceRunOperationIfUnblocked(void *list);
void __aeabi_memset4(void *memory, u32 size, s32 value);
s32 gamePackedFlagTest(u32 flagId);
void gridNavigationConfigure(void *list, s32 count, s32 columns, s32 a, s32 b, s32 c);
void scrollListSetSelectionTracked(void *list, s32 value);
void ifTouchRegionRemove(void);
s32 gridNavigationGetItemCount(void *list);
s16 ifTouchRegionAddRequested(s32 category, s32 index);

/* Rebuilds the unite menu's entry list from SearchTable.tbb (listing every record up to the first
 * one the player has not unlocked) and, when asked, re-registers the touch regions. */
void FUN_0028a2e8(s32 resetTouch)
{
    UniteMenu *menu = g_unite;
    UniteDraftState *draft = (UniteDraftState *)saveGetUserSettingsBlock();
    void *list = menu->list;
    s32 a = resourceRunOperationIfUnblocked(list);
    s32 b = listCursorGetRowIfUnblocked(list);
    s32 count = 0;
    s32 unlocked = 0;
    s32 i;

    __aeabi_memset4(menu->entryIndices, 0x40, -1);
    for (i = 0; i < 16; i++) {
        void *table = dataTableGet(0x24, 0);
        SearchTableRecordA *entries = searchTableRecordsA(table);

        if ((u32)i < dataTableGetCount(table) && entries[i].kind == 2) {
            menu->entryIndices[count++] = i;
            if (draft->filled[unlocked] == 0) {
                break;
            }
            unlocked++;
            continue;
        }
        table = dataTableGet(0x24, 0);
        entries = searchTableRecordsA(table);
        if ((u32)i >= dataTableGetCount(table) || entries[i].flagId == 0 ||
            gamePackedFlagTest(entries[i].flagId) != 0) {
            menu->entryIndices[count++] = i;
        }
    }
    gridNavigationConfigure(list, count, 8, 1, 0, 1);
    scrollListSetSelectionTracked(list, a + b);
    if (resetTouch != 0) {
        for (i = 0; i < 8; i++) {
            menu->touchIds[i] = -1;
            ifTouchRegionRemove();
        }
        menu->prevTouchId = -1;
        menu->backTouchId = -1;
        menu->nextTouchId = -1;
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        for (i = 0; i < gridNavigationGetItemCount(list) && i < 8; i++) {
            menu->touchIds[i] = ifTouchRegionAddRequested(0x1A, 0xA9 + i);
        }
        menu->prevTouchId = ifTouchRegionAddRequested(0x1A, 0x1F0);
        menu->backTouchId = ifTouchRegionAddRequested(0x1A, 0x1EE);
        menu->nextTouchId = ifTouchRegionAddRequested(0x1A, 0x1EF);
    }
}

} /* extern "C" */
