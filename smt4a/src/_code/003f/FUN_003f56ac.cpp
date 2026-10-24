/* NON_MATCHING: only the key argument `1` of the two uiSpriteSetImageKeyframe calls before the pressed-flag stores: retail passes the register holding the flag value (r5), ours reloads #1 */
#include "common.h"

struct UnlockLogMenu {
    /* 0x000 */ u8 unk000[0x3C];
    /* 0x03C */ s32 entry;
    /* 0x040 */ u8 unk040[0x10];
    /* 0x050 */ s32 selected;
    /* 0x054 */ u8 unk054[0x68];
    /* 0x0BC */ u8 cursor[0x64];
    /* 0x120 */ u8 confirmed;
    /* 0x121 */ u8 unk121[0xD7];
    /* 0x1F8 */ u8 backSprite[0x8C];
    /* 0x284 */ u8 buttonSprite[0x8C];
    /* 0x310 */ u8 unk310[0x118];
    /* 0x428 */ u8 titleSprite[0x8C];
    /* 0x4B4 */ u8 unk4B4[0x8C];
    /* 0x540 */ u8 listSprite[0x8C];
    /* 0x5CC */ u8 unk5CC[0x18];
    /* 0x5E4 */ u8 firstPressed;
    /* 0x5E5 */ u8 secondPressed;
};

extern "C" {
s32 FUN_001517b4(u32 button, u32 mode);
void FUN_00163aa4(void *sprite, f32 speed);
void eventQueueAddUniqueIfValid(u32 event);
void uiSpriteSetKeyframe(void *sprite, s16 key, s32 mode);
void uiSpriteSetImageKeyframe(void *sprite, s32 key, s32 mode);
s32 resourceRunOperationIfUnblocked(void *cursor);
s32 scrollOwnerSetValue(void *cursor, s32 value);
s32 objectApplyIfUnblocked(void *cursor);
s32 flaggedEntryGetValueA(void *cursor);
void dialogEnterState(UnlockLogMenu *menu, u32 state, u32 arg);
void FUN_003f6f68(UnlockLogMenu *menu, u32 state);

/* Menu input: moves the list cursor with the up/down buttons, picks a button with the choice
 * buttons and starts the selection animation. */
void FUN_003f56ac(UnlockLogMenu *menu)
{
    FUN_00163aa4(menu->titleSprite, 1.0f);
    FUN_003f6f68(menu, 7);
    s32 up = FUN_001517b4(9, 0);
    if (up == 0 || resourceRunOperationIfUnblocked(menu->cursor) != 0) {
        if (up != 0) {
            eventQueueAddUniqueIfValid(0x100020d);
            menu->selected--;
            scrollOwnerSetValue(menu->cursor, menu->selected);
        }
        if (FUN_001517b4(10, 0) != 0 && objectApplyIfUnblocked(menu->cursor) >= 7) {
            if (resourceRunOperationIfUnblocked(menu->cursor) != objectApplyIfUnblocked(menu->cursor) - 7 &&
                (flaggedEntryGetValueA(menu->cursor) != 0 || objectApplyIfUnblocked(menu->cursor) >= 7)) {
                eventQueueAddUniqueIfValid(0x100020d);
                menu->selected++;
                scrollOwnerSetValue(menu->cursor, menu->selected);
            }
        }
    }
    if (menu->confirmed != 0) {
        if (FUN_001517b4(8, 1) != 0) {
            eventQueueAddUniqueIfValid(0x1000210);
            uiSpriteSetKeyframe(menu->buttonSprite, 3, 0);
            uiSpriteSetImageKeyframe(menu->buttonSprite, 1, 0);
            menu->firstPressed = 1;
            dialogEnterState(menu, 6, 7);
        }
        if (FUN_001517b4(7, 1) != 0) {
            eventQueueAddUniqueIfValid(0x1000210);
            uiSpriteSetKeyframe(menu->buttonSprite, 2, 0);
            uiSpriteSetImageKeyframe(menu->buttonSprite, 1, 0);
            menu->secondPressed = 1;
            dialogEnterState(menu, 6, 7);
        }
    }
    if (FUN_001517b4(1, 1) != 0) {
        eventQueueAddUniqueIfValid(0x100020f);
        uiSpriteSetKeyframe(menu->backSprite, 2, 0);
        uiSpriteSetImageKeyframe(menu->backSprite, 1, 0);
        uiSpriteSetKeyframe(menu->listSprite, 1, 0);
        uiSpriteSetImageKeyframe(menu->listSprite, 0, 0);
        if (menu->entry != 0) {
            dialogEnterState(menu, 5, 8);
            return;
        }
        dialogEnterState(menu, 5, 3);
    }
}

} /* extern "C" */
