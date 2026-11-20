#include "camp/Unite/UniteWork.h"
#include "camp/Unite/UniteDraw.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "gamedata/GameDataAccess.h"
#include "shard/TextureDrawCall.h"

extern "C" {

/* Draws a list button's strip: the frame at the screen's fade, the plate and caption (the highlighted set for
 * the button kinds 1, 2 and 6) and the shine at the slide sprite's offset and opacity. */
void largeGridDrawButtonStrip(UniteWorkA *work, s32 x, s32 y, f32 scale, s32 button)
{
    efctSetSpeed(vec2GetSpeed(&work->sprites.fade) * scale);
    texDrawTableEntryAtStoredOrigin(2, 26, 408, x, y, 121);
    texDrawTableEntryAtStoredOrigin(2, 26, 409, x, y, 121);
    texDrawTableEntryAtStoredOrigin(2, 26, 410, x, y, 121);
    efctSetSpeed(scale);
    texDrawTableEntryAtStoredOrigin(2, 26, 411, x, y, 126);
    s32 kind = recordGetModeForId(work->buttonsA.regions[button]);
    if (kind == 1 || kind == 2 || kind == 6) {
        texDrawTableEntryAtStoredOrigin(2, 26, 660, x, y, 126);
    } else {
        texDrawTableEntryAtStoredOrigin(2, 26, 587, x, y, 126);
    }
    if (kind == 1 || kind == 2 || kind == 6) {
        texDrawTableEntryAtStoredOrigin(2, 26, 657, x, y, 126);
        texDrawTableEntryAtStoredOrigin(2, 26, 658, x, y, 126);
    } else {
        texDrawTableEntryAtStoredOrigin(2, 26, 412, x, y, 126);
        texDrawTableEntryAtStoredOrigin(2, 26, 413, x, y, 126);
    }
    efctSetSpeed(vec2GetSpeed(&work->sprites.slide) * scale);
    if (kind == 1 || kind == 2 || kind == 6) {
        texDrawTableEntryAtStoredOrigin(2, 26, 659, x + vec2GetXInt(&work->sprites.slide), y + vec2GetYInt(&work->sprites.slide), 131);
    } else {
        texDrawTableEntryAtStoredOrigin(2, 26, 414, x + vec2GetXInt(&work->sprites.slide), y + vec2GetYInt(&work->sprites.slide), 131);
    }
    efctSetSpeed(scale);
}

} /* extern "C" */
