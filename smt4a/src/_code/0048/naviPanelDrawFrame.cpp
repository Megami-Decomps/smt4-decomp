/* NON_MATCHING: 6 lines: retail loads &g_uiTextFontSettings into sl right after the render push, before the three
 * preamble calls (naviPanelDrawMap computes its draw depth from it there); this build loads it at the draws. Retail does not
 * compute the depth here, so an unused depth computation that moves the load (IDENTICAL) is not kept. */
#include "classes/Obj532300.h"
#include "camp/RenderCtxA.h"
#include "game/GameStateA.h"
#include "gamedata/MapSaveBlockA.h"
#include "map/MapSceneAccess.h"
#include "shard/NaviMain_GetCurrentMap.h"
#include "shard/TextureDrawCall.h"
#include "ui/AnimatedMessage.h"
#include "ui/UiSpriteApi.h"
#include "util/BitsAndBytes.h"

extern "C" {

u32 lmapMainGetUnkCC(void);
u32 gameFlagsClassify(s32 id);
u32 naviGetActiveStateValue(void *scene); // declcheck: local (its header also declares the other naviMainSetValuePair form)
u32 naviMainSelectPair(void *scene);
u8 *lmapSceneGetObj(void *scene);
void uiDrawNativeSizeTableSprite(u32 id, s32 x, s32 y, u32 first, u32 second);

/* Draws the navigation panel's upper frame over the map (textures of file 0x13), unless the map scene is
 * in the state that hides it, the panel is closing or the current map is one of the two classes without
 * a frame: the plain frame while the map runs, and while it is paused the frame with its two headings
 * blended in at their sprites' opacity. A last piece is added while the save block asks for the second
 * navigation refresh. */
void naviPanelDrawFrame(Obj532300 *panel)
{
    MapSaveBlockA *save = gameFlagsGetBlock();

    if (g_gameState.mapId >= 100) {
        if (lmapMainGetUnkCC() == 8) {
            return;
        }
    } else {
        if (lmapSceneGetUnk0() == 0x22) {
            return;
        }
    }
    renderStackPushIndexed(g_renderCtx, RENDER_STACK_A, renderCtxPackPassFlags(5, 1));

    /* The preamble of naviPanelDrawMap, which draws the panel's map layer just before this one and uses the
     * active map, its pair and the player's pose. This layer uses none of them, but retail still makes the
     * three calls. */
    naviGetActiveStateValue(panel->scene);
    naviMainSelectPair(panel->scene);
    lmapSceneGetObj(panel->scene);

    UiFloatPosition offset;
    offset.x = offset.y = 0.0f;
    if (panel->flags & 0x1000000) {
        words2Copy((const UiFloatPosition *)&panel->cursorRect, &offset);
    }
    if ((panel->flags & 0x1000) == 0) {
        u32 mapClass = gameFlagsClassify(NaviMain_GetCurrentMap((int)panel->scene));

        if (mapClass != 2 && mapClass != 3) {
            s32 x = (s32)((f32)vec2GetXInt(&panel->auxiliary[0]) + offset.x);

            /* the frame's height is read but every piece is drawn at the top */
            vec2GetYInt(&panel->auxiliary[0]);
            if (g_gameState.paused) {
                renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
                efctSetSpeed(vec2GetSpeed(&panel->headings[1]));
                texDrawTableEntryAtStoredOrigin(2, 0x13, 0x112e, x, 0, g_uiTextFontSettings.drawOrder);
                efctSetSpeed(1.0f);
                renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
                uiDrawNativeSizeTableSprite(0x112f, x, 0, g_uiTextFontSettings.drawOrder, 1);
                renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
                efctSetSpeed(vec2GetSpeed(&panel->headings[0]));
                texDrawTableEntryAtStoredOrigin(2, 0x13, 0x1135, x, 0, g_uiTextFontSettings.drawOrder);
                efctSetSpeed(1.0f);
                renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
                uiDrawNativeSizeTableSprite(0x1133, x, 0, g_uiTextFontSettings.drawOrder, 1);
                uiDrawNativeSizeTableSprite(0x1134, x, 0, g_uiTextFontSettings.drawOrder, 1);
                if (save->naviRefreshSecond != 0) {
                    uiDrawNativeSizeTableSprite(0x1243, x, 0, g_uiTextFontSettings.drawOrder, 1);
                }
            } else {
                uiDrawNativeSizeTableSprite(0x112d, x, 0, g_uiTextFontSettings.drawOrder, 1);
                uiDrawNativeSizeTableSprite(0x1131, x, 0, g_uiTextFontSettings.drawOrder, 1);
                uiDrawNativeSizeTableSprite(0x1132, x, 0, g_uiTextFontSettings.drawOrder, 1);
                if (save->naviRefreshSecond != 0) {
                    uiDrawNativeSizeTableSprite(0x1243, x, 0, g_uiTextFontSettings.drawOrder, 1);
                }
            }
        }
    }
    renderCtxPopState(g_renderCtx, RENDER_STACK_A);
}

} /* extern "C" */
