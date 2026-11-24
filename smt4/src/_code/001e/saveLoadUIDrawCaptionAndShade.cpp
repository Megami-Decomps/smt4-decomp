/* NON_MATCHING: 50 lines; same flow, constants and float maths. Retail addresses the entry-lock byte as (worker + index) + 844 where armcc adds 844 first, and keeps the zero constant in r7 and the parallax in r6 (swapped here). */
#include "gamedata/SaveLoadUITable.h"
#include "camp/RenderCtx.h"
#include "text/TextDraw.h"
#include "camp/RenderCtxTitle.h"
#include "gfx/RenderStateStack.h"
#include "shard/Sys44de28.h"
#include "gfx/StereoParallax.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

struct CaptionRecord {
    u8 pad00[0x54];
};


s32 statusCameraRestore(s32 arg);
void gxResetColorQuadToWhite(void);
void efctSetSpeed(f32 speed);
s32 texDrawCompositeSprite(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 libc_strlen(const char *text);
s32 gxSetUniformQuadColors(f32 *color);
s32 screenDrawShadedRect(s32 x, s32 y, s32 w, s32 h, s32 depth);

/* Draws the save/load screen's title caption and the shading overlay; always returns 0. */
u8 saveLoadUIDrawCaptionAndShade(void)
{
    Worker *ui = g_saveLoadUIFlags.worker;

    if (ui->closing == 0 && ui->visible != 0) {
        if (ui->entryLocked[g_saveLoadUIFlags.lastSlot] == 0) {
            FUN_0029dfc0(0);
            statusCameraRestore(0);
            if (ui->titleShown != 0 && ui->titleBusy == 0) {
                Worker *cursorUi = g_saveLoadUIFlags.worker;
                gxResetColorQuadToWhite();
                renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
                efctSetSpeed(1.0f);
                asdTMTexTableEntryAt(0x36, 0x56);
                TextureTableEntryIV *caption = asdTMTexTableEntryAt(0x36, 0x59);
                s32 parallax = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.305f);
                texDrawCompositeSprite(2, 0x36, 7, parallax, 0, 0xF1);
                s32 entry = cursorUi->isLoad;
                s32 width = caption->placement->width;
                s32 height = caption->placement->height;
                const char *text = saveLoadUIRecords()[entry].caption;
                s32 length = libc_strlen(text);
                s32 half = (s32)((f32)(length * height) * 0.5f);
                f32 offset = (f32)(width - half) * 0.5f;
                textDrawString((f32)caption->x + offset + (f32)parallax, (f32)caption->y, 0.0f, 4, 0.0f, -1, 1.0f, text);
                renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
                efctSetSpeed(1.0f);
            }
        }
        if (ui->shaded != 0 && (ui->isLoad == 0 || ui->cursorBusy == 0)) {
            renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
            efctSetSpeed(ui->shadeSpeed);
            f32 color[4];
            color[0] = 0.0f;
            color[1] = 0.0f;
            color[2] = 0.0f;
            color[3] = 1.0f;
            gxSetUniformQuadColors(color);
            screenDrawShadedRect(0, 0, 400, 240, 245);
            renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
            efctSetSpeed(1.0f);
            gxResetColorQuadToWhite();
        }
    }
    return 0;
}

} /* extern "C" */
