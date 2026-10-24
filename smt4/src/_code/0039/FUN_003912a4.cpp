/* NON_MATCHING: register allocation and the inlined render-state push scheduling only (extra scratch register for the entry address; the two stack-argument stores of FUN_002bf380 use stm where retail uses two str) */
#include "camp/RenderCtx.h"
#include "ui/NumberPanelWork.h"

/* The record list held by a selection screen (observed fields). */
struct SelectionList {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 count; /* rows shown */
    /* 0x08 */ u8 unk08[0x38];
};

/* A selection screen with a scrolling list and a number panel (observed fields). */
struct SelectionScreen {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x23C];
    /* 0x240 */ SelectionList list;
    /* 0x280 */ u8 unk280[0x68];
    /* 0x2E8 */ NumberPanelWork panel;
};

extern "C" {

extern RenderCtx *g_titleScene;

s16 numberPanelGetValue(const NumberPanelWork *panel);
s16 numberPanelGetFirst(const NumberPanelWork *panel);
s16 numberPanelGetSecond(const NumberPanelWork *panel);
void FUN_002c39a4(RenderCtx *context);
void FUN_002bed3c(void);
void efctSetSpeed(f32 speed);
s32 FUN_002c5d80(u32 first, u32 second);
void FUN_002bf380(s32 layer, s32 group, s32 id, s32 x, s32 y, s32 size);
s32 FUN_0029e924(const SelectionList *list);
s32 FUN_00240d5c(const SelectionList *list);
s32 flaggedValueHolderGetTotal(const SelectionList *list);
void FUN_003909d0(SelectionScreen *screen, s32 row, s32 index, s32 selected);
void FUN_002332e8(NumberPanelWork *panel, s32 first, s32 second);
void FUN_00290994(u32 sprite, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 value,
                  s32 first, s32 second, s32 size, s32 k);
void FUN_002c198c(RenderCtx *context);
void FUN_002c18e4(RenderCtx *context);

/* Draws the selection screen: its frame, the visible rows and the number panel's scroll bar. */
void FUN_003912a4(SelectionScreen *screen)
{
    if ((screen->flags & 0x10000) != 0) {
        return;
    }
    FUN_002c39a4(g_titleScene);
    FUN_002bed3c();
    efctSetSpeed(1.0f);
    renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
    FUN_002bf380(2, 0x3a, 7, 0, 0, 0x81);
    s32 top = FUN_0029e924(&screen->list);
    FUN_00240d5c(&screen->list);
    s32 rows = screen->list.count;
    for (s32 row = 0; row < rows; row++) {
        FUN_003909d0(screen, row, top + row, flaggedValueHolderGetTotal(&screen->list) == top + row);
    }
    FUN_002332e8(&screen->panel, FUN_0029e924(&screen->list), FUN_00240d5c(&screen->list));
    s32 value = numberPanelGetValue(&screen->panel);
    s32 first = numberPanelGetFirst(&screen->panel);
    s32 second = numberPanelGetSecond(&screen->panel);
    if (static_cast<u8>(screen->panel.position) == 0) {
        value = -1;
        first = -1;
        second = -1;
    }
    FUN_00290994(screen->panel.sprite, 0, 0, 0x3a, 0x4b, 0x4c, 0x4d, 0x47, 0x49, 0x48, 0x4a, value, first, second,
                 0x81, 0);
    renderStackPop(&g_titleScene->stackA);
    FUN_002bed3c();
    efctSetSpeed(1.0f);
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
}

}
