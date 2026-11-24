/* NON_MATCHING: 188 lines (132 by shape); the same calls, branches, frame and saved registers as retail. The second
 * sprite's rotation is set through uiSpriteSetRotation, which armlink inlined (`mov r0, r5; vstr s0, [r0, #48]`,
 * config/inlined.txt; a direct copy gave 168/96 lines with `ldr; str` but the call is what retail holds). What differs:
 * - the progress is read through r8 here (r7 in retail); retail keeps the UI block in r8 and the slot's 0xE100 base
 *   in r6 (r6 and r8 here), and loads the zero for the render stacks' dirty flags into fp before the `loaded >= 9` branch (after it here);
 * - the second pairSetHalves loads the position with one vldmia in retail (y, then x, separately here);
 * - retail places the early exits' epilogue between the test readout's state test and its block (at the end
 *   here), and jumps over the mid-function pool one instruction later in the readout's first text draw. */
#include <stdio.h>
#include "battle/BtlUiGlobal.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "camp/RenderCtxSelect.h"
#include "sys/RuntimeObjects_Smt4.h"
#include "ui/AnimatedMessage.h"
#include "gfx/StereoParallax.h"
#include "text/TextDraw.h"
#include "ui/UiSpriteApi.h"
#include "util/BitsAndBytes.h"
#include "code/Code002b.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

enum {
    BTL_UI_TEXTURE_TABLE = 14,
    BTL_UI_TEST_TABLE = 15,
    BTL_UI_PANEL_TEST = 14      /* the panel state that shows the test readout */
};

extern "C" {

extern u16 g_btlUiTestTextureIds[];      /* the test textures' ids, in thousands */

void btlDrawFloatingNumbers(BtlUi *ui, s32 pass);
void effectRenderTransformedInstance(UiSpriteState *sprite, f32 horizontalOffset);
void titleDrawLogo(BtlUiObjB *panel);
void spriteRowListDraw(BtlUiObjA *object);
void FUN_0033cc84(u32 panel);
void renderCtxResetColorScale(RenderCtx *context);

/* The battle UI's upper-screen draw task: once the UI's nine texture nodes are loaded, draws the floating numbers,
 * the twelve action slots (the second sprite of a slot additively), the event panel, the first widget and the
 * marker panel, the panel's fade sprite, and in the test builds' states the notice and the depth readout. */
s32 btlUiDrawUpperScreen(u32 job)
{
    BtlUi *ui = g_btlUi.ui;
    s32 loaded;
    s32 i;
    char text[64];

    if (ui == NULL) {
        return 0;
    }
    loaded = 0;
    for (i = 0; i < 5; i++) {
        if (asdTMTexTableNodeIsLoaded(20, i)) {
            loaded++;
        }
    }
    for (i = 0; i < 4; i++) {
        if (asdTMTexTableNodeIsLoaded(21, i)) {
            loaded++;
        }
    }
    if (loaded >= 9) {
        renderCtxSelectStereoLayout(g_titleScene);
        renderCtxPushACounted(g_titleScene, renderCtxPackPassFlags(1, 0));
        btlDrawFloatingNumbers(ui, 1);
        s32 parallax = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.8f);
        for (i = 0; i < 12; i++) {
            if (ui->objD.actionRequests.slots[i].state == 0) {
                continue;
            }
            pairSetHalves((Obj *)&ui->objD.actionRequests.slots[i].firstSprite, (s16)(s32)ui->objD.actionRequests.slots[i].position[0], (s16)(s32)ui->objD.actionRequests.slots[i].position[1]);
            effectRenderTransformedInstance(&ui->objD.actionRequests.slots[i].firstSprite, (f32)parallax);
            if (ui->objD.actionRequests.slots[i].secondSprite.updated) {
                renderCtxSetStackTop(g_titleScene, RENDER_STACK_B, packNibblesAndByte(6, 1, 0));
                pairSetHalves((Obj *)&ui->objD.actionRequests.slots[i].secondSprite, (s16)(s32)ui->objD.actionRequests.slots[i].position[0], (s16)(s32)ui->objD.actionRequests.slots[i].position[1]);
                uiSpriteSetRotation(&ui->objD.actionRequests.slots[i].secondSprite, ui->objD.actionRequests.slots[i].progress);
                effectRenderTransformedInstance(&ui->objD.actionRequests.slots[i].secondSprite, (f32)parallax);
                effectRenderTransformedInstance(&ui->objD.actionRequests.slots[i].secondSprite, (f32)parallax);
                renderCtxSetStackTop(g_titleScene, RENDER_STACK_B, packNibblesAndByte(6, 7, 0));
            }
        }
        titleDrawLogo(&ui->objB);
        spriteRowListDraw(&ui->objA);
        FUN_0033cc84(ui->panelState.unk20);
        if (ui->panelState.spriteActive) {
            efctSetSpeed(vec2GetSpeed(&ui->objD.sprite));
            texDrawTableEntryAtStoredOrigin(2, BTL_UI_TEXTURE_TABLE, 0x106, 0, 0, 101);
            efctSetSpeed(1.0f);
        }
        if (g_btlUi.testNotice) {
            textDrawString(0.0f, 100.0f, 0.0f, 3, 0.0f, 0xFFFFFFFF, 1.0f,
                           "\x96\xa2\x8eg\x97p\x82\xcc\x83""f\x81[\x83^\x82\xc8\x82\xcc\x82\xc5\x95\\\x8e\xa6\x82\xc5\x82\xab\x82\xdc\x82\xb9\x82\xf1\x81""B");
            textDrawString(0.0f, 124.0f, 0.0f, 3, 0.0f, 0xFFFFFFFF, 1.0f,
                           "\x92S\x93\x96\x82\xc9\x8am\x94""F\x82\xb5\x82\xc4\x89\xba\x82\xb3\x82\xa2\x81""B");
        }
        if (ui->panelState.state == BTL_UI_PANEL_TEST) {
            f32 shade[4];

        shade[0] = 0.0f;
        shade[1] = 0.0f;
        shade[2] = 0.0f;
        shade[3] = 0.33333334f;

            renderCtxSelectTexture(g_titleScene, NULL);
            FUN_002b7638(0.0f, 0.0f, 400.0f, 240.0f, (u32)shade, (u32)shade, (u32)shade, (u32)shade, 0.7f);
            texDrawTableEntryAtStoredOrigin(2, BTL_UI_TEST_TABLE, g_btlUiTestTextureIds[g_btlUi.testTexture] * 1000,
                                            (s32)renderCtxCalculateStereoParallax(g_titleScene, g_btlUi.testBustUpDepth),
                                            0, 151);
            s32 winOffset = (s32)renderCtxCalculateStereoParallax(g_titleScene, g_btlUi.testWinDepth);
            const TextureTableEntryIV *entry = asdTMTexTableEntryAt(BTL_UI_TEXTURE_TABLE, 0x43);
            texDrawTableEntryAtStoredOrigin(2, BTL_UI_TEXTURE_TABLE, 0,
                                            entry->x + (winOffset + entry->placement->width / 2),
                                            entry->y + entry->placement->height / 2, 201);
            entry = asdTMTexTableEntryAt(BTL_UI_TEXTURE_TABLE, 0x45);
            texDrawTableEntryAtStoredOrigin(2, BTL_UI_TEXTURE_TABLE, 2,
                                            entry->x + (winOffset + entry->placement->width / 2),
                                            entry->y + entry->placement->height, 211);
            entry = asdTMTexTableEntryAt(BTL_UI_TEXTURE_TABLE, 0x3D);
            textDrawString((f32)(entry->x + winOffset), (f32)entry->y, 0.0f, 3, 0.0f, 0xFF, 1.0f,
                           "\x83""e\x83X\x83g\x83\x81\x83""b\x83Z\x81[\x83W\x82\xc5\x82\xb7\x81""B");
            sprintf(text, "tex = %d", g_btlUi.testTexture);
            textDrawString(16.0f, 8.0f, 0.0f, 2, 0.0f, 0xFFFFFFFF, 1.0f, text);
            sprintf(text, "bustUp depth = %f", g_btlUi.testBustUpDepth);
            textDrawString(16.0f, 20.0f, 0.0f, 2, 0.0f, 0xFFFFFFFF, 1.0f, text);
            sprintf(text, "win depth = %f", g_btlUi.testWinDepth);
            textDrawString(16.0f, 32.0f, 0.0f, 2, 0.0f, 0xFFFFFFFF, 1.0f, text);
            textDrawString(0.0f, (f32)(g_btlUi.testCursor * 12 + 8), 0.0f, 2, 0.0f, 0xFFFFFFFF, 1.0f, "\x81\x84");
        }
        renderCtxPopCounted(g_titleScene, RENDER_STACK_A);
        renderCtxSetStackTop(g_titleScene, RENDER_STACK_B, packNibblesAndByte(6, 7, 0));
        renderCtxApplyTransforms(g_titleScene);
        renderCtxResetColorScale(g_titleScene);
        return 0;
    }
    return 0;
}

} /* extern "C" */
