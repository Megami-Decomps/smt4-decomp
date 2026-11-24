/* NON_MATCHING: 44 lines (raw and by shape). The projection is nn::math's inlined MTX44Ortho and now schedules as
 * retail's (constants, the zero stores, then the six computed elements), but the frame is 8 bytes larger with the
 * logo position below the matrix (retail: the matrix at sp+8, the position at sp+72, 84 bytes), which moves every
 * sp offset; two vnmul results take other registers, and the centring offset is added as centre + x where retail
 * adds x + centre. */
#include "camp/RenderCtx.h"
#include "code/Code0028.h"
#include "gfx/RenderTransformState.h"
#include "camp/RenderCtxTitle.h"
#include "camp/Unite/UniteEffectState.h"

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

extern "C" {
void FUN_002f5288(ScreenHolder *holder, s32 mode);
s32 packNibblesAndByte(u32 first, u32 second, u32 third);
s32 flagsPackFourBooleans(u8 first, u8 second, u8 third, u8 fourth);
u32 FUN_003deab0(LogoObject *logo, s32 mode);
void spriteDrawPartGroup(LogoObject *logo, u32 handle, f32 *position, s32 color, s32 mode, f32 scale); // declcheck: local (the shared declaration does not compile here or changes this unit)
void renderCtxResetColorScale(RenderCtx *context);

/* nn::math::MTX44Ortho (an SDK header inline; smt4a keeps an out-of-line copy, FUN_0015a050): the orthographic
   projection of the box (left, right, bottom, top) with depth taken from nearZ to farZ. It works the six
   computed elements out first, then stores the constant ones and the computed ones. */
static __inline void mtx44Ortho(Matrix44 *matrix, f32 left, f32 right, f32 bottom, f32 top, f32 nearZ, f32 farZ)
{
    f32 tmp1, tmp2, tmp3;
    f32 m00, m03, m11, m13, m22, m23;
    f32 *const m = matrix->values;

    tmp1 = 1.0f / (right - left);
    m00 = 2.0f * tmp1;
    m03 = -(right + left) * tmp1;

    tmp2 = 1.0f / (top - bottom);
    m11 = 2.0f * tmp2;
    m13 = -(top + bottom) * tmp2;

    tmp3 = 1.0f / (farZ - nearZ);
    m22 = tmp3;
    m23 = nearZ * tmp3;

    m[1] = 0.0f;
    m[2] = 0.0f;

    m[4] = 0.0f;
    m[6] = 0.0f;

    m[8] = 0.0f;
    m[9] = 0.0f;

    m[12] = 0.0f;
    m[13] = 0.0f;
    m[14] = 0.0f;
    m[15] = 1.0f;

    m[0] = m00;
    m[3] = m03;
    m[5] = m11;
    m[7] = m13;
    m[10] = m22;
    m[11] = m23;
}

/* Draws the title logo under a flat orthographic projection the size of the screen, with the
   render states the logo needs pushed for the draw and popped afterwards. */
void titleLogoDraw(UniteRenderTarget *request)
{
    FUN_002f5288(request->holder, 0);
    ScreenSize *screen = request->holder->screen;
    Matrix44 projection;
    f32 width = (f32)screen->width;
    f32 height = (f32)screen->height;
    mtx44Ortho(&projection, 0.0f, width, height, 0.0f, 0.0f, -1.0f);
    renderCtxSetMatrices((RenderTransformState *)g_titleScene, &projection, NULL, NULL);

    renderCtxPushB(g_titleScene, packNibblesAndByte(6, 7, 0));
    renderCtxPushC(g_titleScene, gxPackFadeKindAlphaWord(6, 0.0f));
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(5, 1));
    renderCtxPushG(g_titleScene, flagsPackFourBooleans(1, 1, 1, 1));

    LogoBox *box = request->texture->box;
    f32 position[3];
    position[0] = 0.0f;
    position[1] = 0.0f;
    position[2] = 0.0f;
    position[0] += (f32)-box->offsetX;
    position[1] = (f32)request->holder->screen->height - 143.0f;
    position[0] += (f32)(s32)((f32)(request->holder->screen->width - box->width) * 0.5f);
    spriteDrawPartGroup(request->texture, FUN_003deab0(request->texture, 0), position, -1, 1, 1.0f);

    renderStackPop(g_titleScene->stacks + RENDER_STACK_G);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_C);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_B);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
}

} /* extern "C" */
