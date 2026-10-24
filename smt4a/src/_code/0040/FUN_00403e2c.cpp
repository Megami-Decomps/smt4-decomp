/* NON_MATCHING: identical calls and branches; retail keeps 0 in r7 (the touched flag) and 1 in r6 across the calls with a 28-byte frame, armcc here allocates r6 for the flag and re-materialises 1. */
#include "common.h"

/* The list menu scene (only the fields this update reads or writes). */
struct ListMenu {
    /* 0x000 */ u8 unk000[0x90];
    /* 0x090 */ u8 list[0x64];
    /* 0x0F4 */ s32 pageCount;
    /* 0x0F8 */ s32 cursor;
    /* 0x0FC */ u8 unk0FC[4];
    /* 0x100 */ u32 selectedId;
    /* 0x104 */ u8 unk104[8];
    /* 0x10C */ u8 area[0x12];
    /* 0x11E */ u8 unk11E[4];
    /* 0x122 */ s16 areaY;
    /* 0x124 */ s16 areaWidth;
    /* 0x126 */ s16 areaX;
    /* 0x128 */ u8 unk128[0x24];
    /* 0x14C */ u8 confirmSprite[0x8C];
    /* 0x1D8 */ u8 backSprite[0x8C];
    /* 0x264 */ u8 unk264[0x8C];
    /* 0x2F0 */ u8 scrollA[0x8C];
    /* 0x37C */ u8 scrollB[0x8C];
    /* 0x408 */ u16 ids[1];
};

struct ListMenuTail {
    /* 0x664 */ u32 selectedCopy;
};

extern "C" {
s32 FUN_001517b4(s32 button, s32 mode);
void FUN_00163aa4(void *scroll, f32 amount);
s32 eventQueueAddUniqueIfValid(u32 event);
void uiSpriteSetKeyframe(void *sprite, s32 key, s32 arg);
void uiSpriteSetImageKeyframe(void *sprite, s32 key, s32 arg);
void FUN_0019de98(s32 a, u32 color);
void FUN_00212724(void);
void FUN_00228b04(void *list, s32 arg);
void useCounterStart(void);
void FUN_0031f208(s32 id);
void sortMenuAcquire(s32 id, s32 arg);
s32 FUN_003450d4(void *list, u32 handle, void *area, s32 x, s32 y, s32 w, u8 *flag, s32 a, s32 b);
u32 FUN_0039b984(void);
void FUN_004029f4(ListMenu *menu, s32 a, s32 b);
void FUN_00404974(ListMenu *menu);
s32 ifTouchGetSelectionMode(void);
u32 FUN_001834a4(u32 a, u32 b);
s32 resourceRunOperationIfUnblocked(void *list);
s32 FUN_002a4894(void *list);

/* Updates the list menu: scrolls its panels, reads the page and cursor, and handles the touch list
 * and the back/confirm/sort buttons. */
void FUN_00403e2c(ListMenu *menu)
{
    FUN_00163aa4(menu->scrollA, 1.0f);
    FUN_00163aa4(menu->scrollB, 1.0f);
    FUN_00228b04(menu->list, 1);
    menu->cursor = resourceRunOperationIfUnblocked(menu->list);
    menu->pageCount = FUN_002a4894(menu->list);
    menu->selectedId = menu->ids[menu->pageCount + menu->cursor];
    ((ListMenuTail *)((u8 *)menu + 0x664))->selectedCopy = FUN_0039b984();
    u8 touched = 0;
    s32 mode = ifTouchGetSelectionMode();
    u32 handle = FUN_001834a4(50, 139);
    if (FUN_003450d4(menu->list, handle, menu->area, menu->areaX, menu->areaY, menu->areaWidth, &touched, 0, 1))
        return;
    if (FUN_001517b4(0, 1) || mode == 6) {
        eventQueueAddUniqueIfValid(0x0100020E);
        FUN_00404974(menu);
        uiSpriteSetKeyframe(menu->backSprite, 1, 0);
        uiSpriteSetImageKeyframe(menu->backSprite, 0, 0);
        FUN_004029f4(menu, 5, 7);
        return;
    }
    if (FUN_001517b4(1, 1)) {
        eventQueueAddUniqueIfValid(0x0100020E | 1);
        uiSpriteSetKeyframe(menu->confirmSprite, 2, 0);
        uiSpriteSetImageKeyframe(menu->confirmSprite, 1, 0);
        FUN_00212724();
        FUN_004029f4(menu, 2, 0);
    } else if (FUN_001517b4(9, 1)) {
        sortMenuAcquire(30, 0);
        FUN_0031f208(52);
        FUN_0031f208(27);
        useCounterStart();
        FUN_0019de98(0, 0xF4F4F4FF);
        eventQueueAddUniqueIfValid(0x0100020E);
        FUN_004029f4(menu, 8, 0);
    }
}

} /* extern "C" */
