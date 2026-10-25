#include "camp/RenderCtx.h"
#include "ui/PartyPanelState.h"

/* The information window's draw view. */
struct InfoWindowDrawState {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 state;
    /* 0x0C */ u8 unk0C[0xC];
    /* 0x18 */ s32 firstX;
    /* 0x1C */ s32 secondX;
    /* 0x20 */ u8 open;
    /* 0x21 */ u8 framed;
    /* 0x22 */ u8 scrollEnabled;
    /* 0x23 */ u8 timed;
    /* 0x24 */ u8 unk24[0x20];
    /* 0x44 */ TimerSlot transition;
    /* 0xD0 */ u8 unkD0[0xE8];
    /* 0x1B8 */ u32 text;
};

extern "C" {
extern InfoWindowDrawState *g_infoWin;
extern RenderCtx *g_titleScene;

void FUN_002c39a4(RenderCtx *context);
s32 FUN_002c5d80(u32 preset, u32 index);
s32 vec2GetXInt(const void *position);
s32 vec2GetYInt(const void *position);
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 scale);
void FUN_002bf288(s32 layer, s32 group, s32 image, s32 x, s32 y, s32 priority);
void *FUN_002bf4f8(u32 group, u32 image);
void FUN_002b659c(s32 x, s32 y, s32 width, s32 height);
void FUN_002b75ec(u32 text, s32 x, s32 y, s32 layer, f32 scale, s32 mode, s32 index);
void FUN_002b64b8(void);

struct InfoWindowSprite {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ s16 *size;
};

/* Draw the information window: frame, clipped scrolling text and decorations. */
s32 infoWinDraw(u32 job)
{
    InfoWindowDrawState *window = g_infoWin;
    if (window->state == 0) {
        return 0;
    }
    if (window->open == 0) {
        return 0;
    }
    FUN_002c39a4(g_titleScene);
    renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
    s32 x = vec2GetXInt(&window->transition) + (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.27f);
    s32 y = vec2GetYInt(&window->transition);
    FUN_002bf288(2, 14, 135, x, y, 21);
    FUN_002bf288(2, 14, 136, x, y, 21);
    if (window->framed != 0) {
        InfoWindowSprite *frame = (InfoWindowSprite *)FUN_002bf4f8(14, 135);
        FUN_002b659c(frame->x + x, frame->y + y, frame->size[0], frame->size[1]);
        InfoWindowSprite *textBox = (InfoWindowSprite *)FUN_002bf4f8(14, 137);
        if (window->timed != 0) {
            FUN_002b75ec(window->text, textBox->x + x, textBox->y + y, 201, 1.0f, 6, 0);
        } else {
            FUN_002b75ec(window->text, textBox->x + window->firstX + x, textBox->y + y, 201, 1.0f, 6, 0);
            if (window->scrollEnabled != 0) {
                FUN_002b75ec(window->text, textBox->x + window->secondX + x, textBox->y + y, 201, 1.0f, 6, 0);
            }
        }
        FUN_002b64b8();
    }
    FUN_002bf288(2, 14, 134, x, y, 31);
    FUN_002bf288(2, 14, 258, x, y, 31);
    renderStackPop(&g_titleScene->stackA);
    return 0;
}

}
