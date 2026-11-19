/* NON_MATCHING: readable rebuild of the title button-help draw; retail's inlined state push/pop uses pointer arithmetic on the stack top (`piVar[top + 2]`) in a different register assignment and the float x/y order of textDrawString is inferred, not verified. */
#include "ui/UiSpriteApi.h"
#include "gfx/RenderStateStack.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxTitle.h"

#include "ui/ButtonHelpGlobal.h"

extern "C" {
void FUN_00190e48(void);
void FUN_001f40fc(void *icon, s32 x, s32 y);
void fadeObjectResetIfActive(void *object);
void FUN_002b75ec(u32 sprite, s32 x, s32 y, s32 a, s32 b, s32 c);
void textDrawString(f32 x, f32 y, s32 a, u32 icon, void *object); // declcheck: local (z/width/height not recovered: retail reuses s2-s4)
void renderCtxResetColorScale(RenderCtx *scene);
s32 renderCtxPackPassFlags(s32 a, s32 b);

/* Draws the title screen's button help: its fade or icon sprites and the two button icons. */
u8 FUN_002109cc(void)
{
    ButtonHelpWork *help = g_buttonHelp.work;
    if (help->drawEnabled) {
        renderCtxSelectStereoLayout(g_titleScene);
        renderStackPush(&g_titleScene->stackA, renderCtxPackPassFlags(1, 0));
        if (help->state <= 3 && (help->state < 2 || help->state == 2 || help->state == 3)) {
            FUN_00190e48();
            if (help->panelState) {
                if (help->mode != 1) {
                    fadeObjectResetIfActive(NULL);
                    fadeObjectResetIfActive(&help->panelSprites[1]);
                } else {
                    u32 x = vec2GetXInt(&help->panelSprites[0]);
                    u32 y = vec2GetYInt(&help->panelSprites[0]);
                    texDrawTableEntryAtStoredOrigin(2, 0x12, 0, x, y, 0x10);
                    texDrawTableEntryAtStoredOrigin(2, 0x12, 1, x, y, 0x10);
                }
                if (help->panelState && help->textVisible && help->panelSprites[0].alpha >= 1.0f) {
                    TextureTableEntryIV *first = asdTMTexTableEntryAt(0x12, 0x1D);
                    if (help->text.useDirectoryText)
                        FUN_002b75ec(help->text.directoryText, first->x, first->y, 0x15, 6, 0);
                    else if (help->text.highlightLine)
                        textDrawString((f32)first->x, (f32)first->y, 3, help->text.style, help->text.lines[0].text);
                    else
                        FUN_001f40fc(help->text.lines[0].text, first->x, first->y);
                    TextureTableEntryIV *second = asdTMTexTableEntryAt(0x12, 0x1E);
                    if (help->text.useDirectoryText)
                        FUN_002b75ec(help->text.directoryText, second->x, second->y, 0x15, 6, 1);
                    else if (help->text.highlightLine != 1)
                        textDrawString((f32)second->x, (f32)second->y, 3, help->text.style, help->text.lines[1].text);
                    else
                        FUN_001f40fc(help->text.lines[1].text, second->x, second->y);
                }
            }
        }
        renderStackPop(&g_titleScene->stackA);
        renderCtxApplyTransforms(g_titleScene);
        renderCtxResetColorScale(g_titleScene);
    }
    return 0;
}

} /* extern "C" */
