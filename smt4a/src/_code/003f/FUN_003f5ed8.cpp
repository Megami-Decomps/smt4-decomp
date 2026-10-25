/* NON_MATCHING: the visible-window loop remains partially unrolled rather than retail's straight-line stores, changing saved registers and the dialog call frame. */
#include "common.h"

extern "C" {

/* A dialog's work block (only the fields this update touches). */
typedef struct DialogWork {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ u8 *entries;            /* 0x34-byte entries */
    /* 0x024 */ u8 unk024[0x20];
    /* 0x044 */ s32 first;
    /* 0x048 */ s32 offset;
    /* 0x04C */ u8 unk04c[8];
    /* 0x054 */ u32 selectedId;
    /* 0x058 */ u8 list[0x9C];
    /* 0x0F4 */ u8 unk0f4[0x38];
    /* 0x12C */ u8 panel[0x20];
    /* 0x14C */ u8 unk14c[0x1AC];
    /* 0x2F8 */ u8 unk2f8[0x18];
    /* 0x310 */ u8 pulseA[0x8C];
    /* 0x39C */ u8 pulseB[0x118];
    /* 0x4B4 */ u8 pulseC[0x118];
    /* 0x5CC */ s32 blinkTimer;
    /* 0x5D0 */ f32 blink;
    /* 0x5D4 */ u8 unk5d4[0xC];
    /* 0x5E0 */ u16 *selected;
    /* 0x5E4 */ u16 unk5e4;
    /* 0x5E6 */ u16 ids[1];
} DialogWork;

typedef struct DialogWorkView {
    u8 unk0000[0x142];
    s16 panelB;
    s16 panelC;
    s16 panelA;
} DialogWorkView;

void FUN_00163aa4(void *state, f32 scale);
void FUN_00228b04(void *list, s32 arg);
s32 resourceRunOperationIfUnblocked(void *list);
s32 FUN_002a4894(void *list);
s32 ifTouchGetSelectionMode(void);
u32 FUN_001834a4(u32 kind, u32 index);
s32 FUN_003450d4(void *list, u32 layout, void *panel, s32 a, s32 b, s32 c, u8 *flag, s32 d, s32 e);
s32 FUN_001517b4(s32 which, s32 arg);
void eventQueueAddUniqueIfValid(u32 event);
void FUN_003f6abc(DialogWork *work);
void uiSpriteSetKeyframe(void *sprite, s32 a, s32 b);
void uiSpriteSetImageKeyframe(void *sprite, s32 a, ...);
s32 flagsBGetBit1(u32 id);
void gameFlagsSetAlternateMode(u32 id, s32 mode);
void dialogEnterState(DialogWork *work, s32 state, s32 arg);

/* Updates the selection dialog: pulses its three highlights, blinks, refreshes the visible window
 * of ids around the cursor, and reacts to confirm (accept the entry) or cancel. */
void FUN_003f5ed8(DialogWork *work)
{
    FUN_00163aa4(work->pulseA, 1.0f);
    FUN_00163aa4(work->pulseB, 1.0f);
    FUN_00163aa4(work->pulseC, 1.0f);
    work->blinkTimer--;
    if (work->blinkTimer <= 0) {
        work->blinkTimer = 30;
        work->blink = 1.0f;
    }
    if (work->blinkTimer > 15) {
        work->blink -= 0.053333335f;
    }
    if (work->blinkTimer < 15) {
        work->blink += 0.053333335f;
    }
    FUN_00228b04(work->list, 1);
    work->offset = resourceRunOperationIfUnblocked(work->list);
    work->first = FUN_002a4894(work->list);
    u32 id = work->ids[work->first + work->offset];

    if (work->selectedId != id) {
        s32 *window = (s32 *)((u8 *)work + 0x6B4);
        s32 offset = work->offset;

        for (s32 i = 0; i < 9; i++) {
            window[i] = offset + i - 5;
        }
    }
    work->selectedId = id;
    work->selected = (u16 *)(work->entries + id * 0x34);
    s32 touchMode = ifTouchGetSelectionMode();
    u8 flag = 0;
    DialogWorkView *view = (DialogWorkView *)work;

    if (FUN_003450d4(work->list, FUN_001834a4(0x31, 0xAB), work->panel, view->panelA, view->panelB, view->panelC, &flag, 0, 1) != 0) {
        return;
    }
    if ((FUN_001517b4(0, 1) != 0 || touchMode == 6) && *work->selected != 0) {
        eventQueueAddUniqueIfValid(0x100020E);
        FUN_003f6abc(work);
        uiSpriteSetKeyframe((u8 *)work + 0x1F8, 1, 0);
        uiSpriteSetImageKeyframe((u8 *)work + 0x1F8, 0, 0);
        uiSpriteSetKeyframe((u8 *)work + 0x540, 2, 0);
        uiSpriteSetImageKeyframe((u8 *)work + 0x540, 1, 0);
        if (flagsBGetBit1(work->selectedId) != 0) {
            gameFlagsSetAlternateMode(work->selectedId, 0);
        }
        dialogEnterState(work, 5, 0);
    } else if (FUN_001517b4(1, 1) != 0) {
        eventQueueAddUniqueIfValid(0x100020F);
        uiSpriteSetKeyframe((u8 *)work + 0x16C, 2, 0);
        uiSpriteSetImageKeyframe((u8 *)work + 0x16C, 1, 0);
        dialogEnterState(work, 2, 0);
    }
}

}
