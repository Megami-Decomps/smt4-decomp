/* NON_MATCHING: armcc schedules the state stores after the flags read-modify-write (and writes back state's address); retail keeps source order. */
#include "common.h"

extern "C" {

typedef struct UiCursorWork {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ s32 state;
    /* 0x00C */ u8 unk00C[4];
    /* 0x010 */ u32 flags;
    /* 0x014 */ u8 unk014[0x4BC];
    /* 0x4D0 */ u8 position[0x14];
    /* 0x4E4 */ u8 spriteBank[0xAC];
    /* 0x590 */ u8 motion[1];
} UiCursorWork;

s32 FUN_00163aa4(void *motion, f32 step);
s32 FUN_002e19f8(void);
s32 vec2GetXInt(void *vec);
s32 vec2GetYInt(void *vec);
void uiSpriteBankApplyPreset(void *bank, s32 preset);
void pointConvertToFloat(void *point, s32 x, s32 y);

/* Step the cursor: apply its sprite preset, then advance its motion and follow its position. */
void FUN_0048ce38(UiCursorWork *work)
{
    switch (work->state) {
    case 0:
        uiSpriteBankApplyPreset(work->spriteBank, 1);
        work->flags |= 0x1000000;
        work->state = 1;
        break;
    case 1: {
        void *motion = work->motion;

        if (FUN_00163aa4(motion, 1.0f) && FUN_002e19f8()) {
            work->state = 2;
            work->flags |= 2;
        }
        pointConvertToFloat(work->position, vec2GetXInt(motion), vec2GetYInt(motion));
        break;
    }
    }
}

} /* extern "C" */
