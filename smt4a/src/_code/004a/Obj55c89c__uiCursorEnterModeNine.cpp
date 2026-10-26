#include "common.h"
#include "classes/Obj55c89c.h"
#include "test/BustupViewer.h"

extern "C" {

/* The cursor sprite embedded at 0x5E8 of the owner. */
typedef struct CursorSprite {
    /* 0x00 */ u8 unk00[0x8A];
    /* 0x8A */ s8 visible;
    /* 0x8B */ u8 unk8B;
} CursorSprite;

typedef struct CursorOwner {
    /* 0x0000 */ u8 unk0000[0x14];
    /* 0x0014 */ u32 nextState;
    /* 0x0018 */ u32 nextStep;
    /* 0x001C */ u8 unk001C[0x7A];
    /* 0x0096 */ u8 unk0096[0x32];
    /* 0x00C8 */ u8 position[0x520];
    /* 0x05E8 */ CursorSprite cursor;
    /* 0x0674 */ u8 unk0674[0xA200];
    /* 0xA874 */ u16 mode;
} CursorOwner;

void FUN_00163aa4(CursorSprite *sprite, f32 rate);
s8 uiSpriteGetCompletionState(const void *record);
s32 vec2GetXInt(CursorSprite *sprite);
s32 vec2GetYInt(CursorSprite *sprite);
void pointConvertToFloat(void *point, s32 x, s32 y);
s32 FUN_0026c3a0(void);
s32 utilityReturnSuccess(void *object);
void FUN_002c8538(s32 value);
void FUN_0033449c(s32 value);

/* Enters mode 9: updates the cursor sprite, copies its position, and switches to state 14 when the cursor is up. */
}

extern "C" void _ZN9Obj55c89c21uiCursorEnterModeNineEv(CursorOwner *owner)
{
    CursorSprite *cursor = &owner->cursor;
    owner->mode = 9;
    FUN_00163aa4(cursor, 1.0f);
    pointConvertToFloat(owner->position, vec2GetXInt(cursor), vec2GetYInt(cursor));
    if (FUN_0026c3a0() == 0) {
        return;
    }
    if (uiSpriteGetCompletionState(cursor) == 0) {
        return;
    }
    if (FUN_002e19f8() == 0) {
        return;
    }
    if (utilityReturnSuccess(owner->unk0096) != 0) {
        return;
    }
    FUN_002c8538(0);
    FUN_0033449c(0);
    owner->nextState = 14;
    owner->nextStep = 0;
}
