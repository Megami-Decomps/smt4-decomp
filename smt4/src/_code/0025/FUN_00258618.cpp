/* NON_MATCHING: matrix element store scheduling differs (retail stores the -1.0/-0.0 pair separately and the constants are loaded in another order) */
#include "camp/RenderCtx.h"

/* A 4x4 matrix stored row by row. */
struct Matrix44 {
    f32 m[16];
};

/* The size of the target screen. */
struct ScreenSize {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 width;
    /* 0x18 */ s32 height;
};

/* An object that carries a screen size at 0x0c. */
struct ScreenHolder {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ ScreenSize *screen;
};

/* The logo's placement box. */
struct LogoBox {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s16 offsetX;
    /* 0x22 */ u8 unk22[2];
    /* 0x24 */ u16 width;
};

struct LogoObject {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ LogoBox *box;
};

/* The title screen's draw request: the logo to draw and the screen holder. */
struct TitleLogoRequest {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ LogoObject *logo;
    /* 0x08 */ ScreenHolder *holder;
};

extern "C" {
extern RenderCtx *g_titleScene;
void FUN_002f5288(ScreenHolder *holder, s32 mode);
void FUN_00343324(RenderCtx *context, const Matrix44 *projection, s32 mode);
s32 packNibblesAndByte(u32 first, u32 second, u32 third);
s32 FUN_002865c0(u32 kind, f32 value);
s32 FUN_002c5d80(u32 kind, u8 enabled);
s32 flagsPackFourBooleans(u8 first, u8 second, u8 third, u8 fourth);
u32 FUN_003deab0(LogoObject *logo, s32 mode);
void FUN_0023e024(LogoObject *logo, u32 handle, f32 *position, s32 color, s32 mode, f32 scale);
void FUN_002c198c(RenderCtx *context);
void FUN_002c18e4(RenderCtx *context);

/* Draws the title logo under a flat orthographic projection the size of the screen, with the
   render states the logo needs pushed for the draw and popped afterwards. */
void FUN_00258618(TitleLogoRequest *request)
{
    FUN_002f5288(request->holder, 0);
    ScreenSize *screen = request->holder->screen;
    f32 width = (f32)screen->width;
    f32 height = (f32)screen->height;
    Matrix44 projection;
    f32 inverseWidth = 1.0f / width;
    f32 inverseHeight = 1.0f / -height;
    projection.m[0] = inverseWidth * 2.0f;
    projection.m[1] = 0.0f;
    projection.m[2] = 0.0f;
    projection.m[3] = -(width * inverseWidth);
    projection.m[4] = 0.0f;
    projection.m[5] = inverseHeight * 2.0f;
    projection.m[6] = 0.0f;
    projection.m[7] = -(height * inverseHeight);
    projection.m[8] = 0.0f;
    projection.m[9] = 0.0f;
    projection.m[10] = -1.0f;
    projection.m[11] = -0.0f;
    projection.m[12] = 0.0f;
    projection.m[13] = 0.0f;
    projection.m[14] = 0.0f;
    projection.m[15] = 1.0f;
    FUN_00343324(g_titleScene, &projection, 0);

    renderCtxPushB(g_titleScene, packNibblesAndByte(6, 7, 0));
    renderCtxPushC(g_titleScene, FUN_002865c0(6, 0.0f));
    renderCtxPushA(g_titleScene, FUN_002c5d80(5, 1));
    renderCtxPushG(g_titleScene, flagsPackFourBooleans(1, 1, 1, 1));

    LogoBox *box = request->logo->box;
    f32 position[3];
    position[0] = 0.0f + (f32)-box->offsetX;
    position[1] = (f32)request->holder->screen->height - 143.0f;
    position[0] = position[0] + (f32)(s32)((f32)(request->holder->screen->width - box->width) * 0.5f);
    position[2] = 0.0f;
    FUN_0023e024(request->logo, FUN_003deab0(request->logo, 0), position, -1, 1, 1.0f);

    renderStackPop(&g_titleScene->additional.stackG);
    renderStackPop(&g_titleScene->additional.stackC);
    renderStackPop(&g_titleScene->stackA);
    renderStackPop(&g_titleScene->stackB);
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
}

} /* extern "C" */
