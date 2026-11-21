/* NON_MATCHING: render-stack scheduling, text-draw arguments and the final plain-text branch placement differ. */
#include "ui/UiSpriteApi.h"
#include "common.h"
#include "camp/RenderCtx.h"
#include "Model/MoriModelShadowMap.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

#include "ui/ButtonHelpGlobal.h"

extern "C" {

u32 renderCtxPackPassFlags(u32 a, u32 b);
void FUN_0020bd54(void);
void fadeObjectResetIfActive(void* fade);
void textDrawRangeFaded(u32 iconSet, s32 x, s32 y, s32 a, f32 scale, s32 b, s32 c);
void FUN_002acfc8(void* label, s32 x, s32 y);
void skinObjectUpdateMatrices(RenderCtxA* ctx);
void renderCtxResetColorScale(RenderCtxA* ctx);

// Draws the button-help overlay (confirm/cancel prompts) while the owning menu is in one of
// its first four states.
s32 FUN_002e169c(u32 job)
{
    ButtonHelpWorkA *help = g_buttonHelp.work;
    if (help->drawEnabled == 0) return 0;

    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    if (help->state == 0 || help->state == 1 || help->state == 2 || help->state == 3) {
        FUN_0020bd54();
        if (help->panelState != 0) {
            if (help->mode == 1) {
                s32 x = vec2GetXInt(&help->panelSprites[0]);
                s32 y = vec2GetYInt(&help->panelSprites[0]);
                texDrawTableEntryAtStoredOrigin(2, 10, 0, x, y, 16);
                texDrawTableEntryAtStoredOrigin(2, 10, 1, x, y, 16);
                texDrawTableEntryAtStoredOrigin(2, 10, 163, x, y, 16);
                texDrawTableEntryAtStoredOrigin(2, 10, 164, x, y, 16);
            } else {
                fadeObjectResetIfActive(&help->panelSprites[0]);
                fadeObjectResetIfActive(&help->panelSprites[2]);
                fadeObjectResetIfActive(&help->panelSprites[3]);
                fadeObjectResetIfActive(&help->panelSprites[1]);
            }
            if (help->panelState != 0 && help->textVisible != 0 && help->panelSprites[0].scale[2] >= 1.0f) {
                TextureTableEntryIV* rect = asdTMTexTableEntryAt(10, 29);
                if (help->text.useDirectoryText != 0) {
                    textDrawRangeFaded(help->text.directoryText, rect->x, rect->y, 21, 1.0f, 6, 0);
                } else if (help->text.highlightLine == 0) {
                    FUN_002acfc8(help->text.lines[0].text, rect->x, rect->y);
                } else {
                    textDrawString((f32)rect->x, (f32)rect->y, 0.93f, 2, 0.0f, help->text.style, 1.0f, help->text.lines[0].text);
                }
                rect = asdTMTexTableEntryAt(10, 30);
                if (help->text.useDirectoryText != 0) {
                    textDrawRangeFaded(help->text.directoryText, rect->x, rect->y, 21, 1.0f, 6, 1);
                } else if (help->text.highlightLine != 1) {
                    textDrawString((f32)rect->x, (f32)rect->y, 0.93f, 2, 0.0f, help->text.style, 1.0f, help->text.lines[1].text);
                } else {
                    FUN_002acfc8(help->text.lines[1].text, rect->x, rect->y);
                }
            }
        }
    }
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}

} /* extern "C" */
