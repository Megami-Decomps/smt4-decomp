#include "ui/UiSpriteApi.h"
#include "camp/RenderCtx.h"
#include "gfx/RenderStateStack.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxTitle.h"
#include "text/TextDraw.h"

#include "ui/ButtonHelpGlobal.h"

extern "C" {
void FUN_00190e48(void);
void buttonHelpDrawHighlightedLine(void *icon, s32 x, s32 y);
void fadeObjectResetIfActive(void *object);
void textDrawRangeFaded(const void *text, s32 x, s32 y, s32 fade, u32 start, s32 length, f32 scale);
void renderCtxResetColorScale(RenderCtx *scene);

/* Draws the title screen's button help: its fade or icon sprites and the two button icons. */
u8 FUN_002109cc(void)
{
    ButtonHelpWork *help = g_buttonHelp.work;
    if (!help->drawEnabled)
        return 0;
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
    if (help->state == 0 || help->state == 1 || help->state == 2 || help->state == 3) {
        FUN_00190e48();
        if (help->panelState) {
            if (help->mode == 1) {
                u32 x = vec2GetXInt(&help->panelSprites[0]);
                u32 y = vec2GetYInt(&help->panelSprites[0]);
                texDrawTableEntryAtStoredOrigin(2, 0x12, 0, x, y, 0x10);
                texDrawTableEntryAtStoredOrigin(2, 0x12, 1, x, y, 0x10);
            } else {
                fadeObjectResetIfActive(&help->panelSprites[0]);
                fadeObjectResetIfActive(&help->panelSprites[1]);
            }
            if (help->panelState && help->textVisible && help->panelSprites[0].scale[2] >= 1.0f) {
                TextureTableEntryIV *first = asdTMTexTableEntryAt(0x12, 0x1D);
                if (help->text.useDirectoryText)
                    textDrawRangeFaded((const void *)help->text.directoryText, first->x, first->y, 0x15, 6, 0, 1.0f);
                else if (help->text.highlightLine == 0)
                    buttonHelpDrawHighlightedLine(help->text.lines[0].text, first->x, first->y);
                else
                    textDrawString((f32)first->x, (f32)first->y, 0.93f, 3, 0.0f, help->text.style, 1.0f, help->text.lines[0].text);
                TextureTableEntryIV *second = asdTMTexTableEntryAt(0x12, 0x1E);
                if (help->text.useDirectoryText)
                    textDrawRangeFaded((const void *)help->text.directoryText, second->x, second->y, 0x15, 6, 1, 1.0f);
                else if (help->text.highlightLine == 1)
                    buttonHelpDrawHighlightedLine(help->text.lines[1].text, second->x, second->y);
                else
                    textDrawString((f32)second->x, (f32)second->y, 0.93f, 3, 0.0f, help->text.style, 1.0f, help->text.lines[1].text);
            }
        }
    }
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
    return 0;
}

} /* extern "C" */
