/* NON_MATCHING: draws the camp menu's "new" marker for a menu id when the matching notification flag is set; written from the decompilation and the retail disassembly, the id dispatch and render-stack scheduling not compared with retail */
#include "camp/RenderCtx.h"

struct CampNotice {
    /* 0x0000 */ u8 unk0000[0x1AB4];
    /* 0x1AB4 */ f32 iconSpeed;
    /* 0x1AB8 */ u8 unk1AB8[0x17F8];
    /* 0x32B0 */ u8 flags[7];       /* one new-entry flag per camp menu */
};

struct IconFrame {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

#define CAMP_NOTICE_HEADER 0x14
#define CAMP_NOTICE_ICON 0x5B0
#define CAMP_NOTICE_FRAME_PLAIN 0x5B2
#define CAMP_NOTICE_FRAME_ANIMATED 0x5B1
#define CAMP_NOTICE_GLOW 0x5D6

extern "C" {
extern CampNotice *g_camp;
extern RenderCtxA *g_renderCtx;

s32 gameFlagIsSet(u32 flag);
IconFrame *FUN_001834a4(u32 table, u32 index);
void FUN_001835b4(u32 layer, u32 table, u32 sprite, s32 x, s32 y, u32 flags);
f32 jobGetScalarValue(void);
void efctSetSpeed(f32 speed);
s32 packNibblesAndByte(u32 high, u32 low, u32 byte);

void FUN_0026e8b8(s32 menu, s32 x, s32 y, u32 flags, s32 plain)
{
    const u8 *notice = g_camp->flags;
    bool shown;
    switch (menu) {
    case 3:
    case 0x11:
        shown = notice[4] != 0;
        break;
    case 6:
        shown = notice[0] != 0 || notice[1] != 0;
        break;
    case 8:
        shown = notice[5] != 0 || (gameFlagIsSet(0x464) != 0 && gameFlagIsSet(0x4CA) != 0);
        break;
    case 0x1C:
        shown = notice[5] != 0;
        break;
    case 0x1D:
        shown = notice[0] != 0;
        break;
    case 0x1E:
        shown = notice[1] != 0;
        break;
    case 0x33:
        shown = gameFlagIsSet(0x464) != 0 && gameFlagIsSet(0x4CA) != 0;
        break;
    case 0x38:
        shown = gameFlagIsSet(0x45B) != 0 && gameFlagIsSet(0x4C7) != 0;
        break;
    case 0x3B:
        shown = notice[6] != 0;
        break;
    case 0x42:
        shown = notice[2] != 0;
        break;
    case 0x43:
        shown = notice[2] != 0 || notice[3] != 0;
        break;
    case 0x45:
        shown = notice[3] != 0;
        break;
    default:
        return;
    }
    if (!shown)
        return;

    if (plain != 0) {
        IconFrame *frame = FUN_001834a4(CAMP_NOTICE_HEADER, CAMP_NOTICE_FRAME_PLAIN);
        FUN_001835b4(2, CAMP_NOTICE_HEADER, CAMP_NOTICE_ICON, frame->x + x, frame->y + y, flags);
        return;
    }

    IconFrame *frame = FUN_001834a4(CAMP_NOTICE_HEADER, CAMP_NOTICE_FRAME_ANIMATED);
    FUN_001835b4(2, CAMP_NOTICE_HEADER, CAMP_NOTICE_ICON, frame->x + x, frame->y + y, flags);
    u32 active = jobGetScalarValue() != 0.0f;
    efctSetSpeed(g_camp->iconSpeed * (f32)active);
    RenderCtxA *context = g_renderCtx;
    s32 state = packNibblesAndByte(6, 1, 0);
    renderStackSet(&context->stackB, state);
    FUN_001835b4(2, CAMP_NOTICE_HEADER, CAMP_NOTICE_GLOW, frame->x + x, frame->y + y, flags);
    context = g_renderCtx;
    state = packNibblesAndByte(6, 7, 0);
    renderStackSet(&context->stackB, state);
    efctSetSpeed((f32)active);
}

} /* extern "C" */
