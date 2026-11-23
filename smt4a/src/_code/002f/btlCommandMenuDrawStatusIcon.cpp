/* NON_MATCHING: both blend changes now match; only the origin used for the unshifted style and the operand order of the Y addition differ. */
#include "battle/ActorCardAnimations.h"
#include "ui/ScreenPoint.h"
#include "ui/UiSpriteApi.h"
#include "shard/S1ListPanel.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "util/BitsAndBytes.h"

extern "C" {
void gfxSelectStatusIconPair(u32 kind, u32 *foreground, u32 *background, s32 alternate);
void efctSetSpeed(f32 speed);

/* Draws a status icon (frame, glow and the two icon sprites) in the plain or alternate style. */
void btlCommandMenuDrawStatusIcon(ActorCardAnimationsA *panel, u32 kind, s32 x, s32 y, f32 speed, s32 alternate)
{
    u32 foreground = 0;
    u32 background = 0;
    gfxSelectStatusIconPair(kind, &foreground, &background, alternate);
    efctSetSpeed(speed);
    if (alternate != 0) {
        ScreenPoint offset = {0, 0};
        if (panel->state == 1) {
            offset.x = vec2GetXInt(&panel->intro);
            offset.y = vec2GetYInt(&panel->intro);
        }
        texDrawTableEntryAtStoredOrigin(2, 13, 170, x + offset.x, y + offset.y, 52);
        texDrawTableEntryAtStoredOrigin(2, 13, 171, x + offset.x, y + offset.y, 52);
        texDrawTableEntryAtStoredOrigin(2, 13, 222, x + offset.x, y + offset.y, 53);
        if (panel->state == 1) {
            efctSetSpeed(vec2GetSpeed(&panel->intro) * speed);
            renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
            texDrawTableEntryAtStoredOrigin(2, 13, 222, x + offset.x, y + offset.y, 54);
            renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
            efctSetSpeed(speed);
        }
        texDrawTableEntryAtStoredOrigin(2, 13, background, x, y, 55);
        texDrawTableEntryAtStoredOrigin(2, 13, foreground, x + offset.x, y + offset.y, 56);
    } else {
        texDrawTableEntryAtStoredOrigin(2, 13, 221, x, y, 44);
        texDrawTableEntryAtStoredOrigin(2, 13, background, x, y, 45);
        texDrawTableEntryAtStoredOrigin(2, 13, foreground, x, y, 46);
    }
    efctSetSpeed(1.0f);
}

} /* extern "C" */
