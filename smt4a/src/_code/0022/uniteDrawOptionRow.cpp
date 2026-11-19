#include "camp/Unite/UniteWork.h"
#include "shard/TextureDrawCall.h"
#include "shard/S1ListPanel.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/UiSpriteApi.h"

extern "C" {
void efctSetSpeed(f32 speed);
void texDrawCompositeSprite(u32 screen, u32 table, u32 frame, s32 x, s32 y, u32 priority);
const char *dataTableGetEntry24Member(u32 id);
s32 fontMeasureLineAdvance(const char *text, u32 screen);

/* Draws one unite option row: its frame (pulsing while selected), its active marker and its centred name. */
void uniteDrawOptionRow(UniteWorkA *work, s32 index, s32 x, s32 y, s32 selected, s32 active,
    f32 opacity, f32 fade)
{
    efctSetSpeed(fade);
    u32 color;
    if (selected) {
        texDrawCompositeSprite(2, 26, 11, x, y, 101);
        color = 255;
        efctSetSpeed(0.5f + (vec2GetSpeed((const UiSpriteState *)work->optionPulse.speedObject) * 0.5f) * fade);
    } else if (active) {
        texDrawCompositeSprite(2, 26, 10, x, y, 101);
        color = 0xFFFFFFFF;
    } else {
        texDrawCompositeSprite(2, 26, 9, x, y, 101);
        color = 0xFFFFFFFF;
    }
    if (active)
        texDrawTableEntryAtStoredOrigin(2, 26, 160, x, y, 111);
    else
        texDrawTableEntryAtStoredOrigin(2, 26, 156, x, y, 111);
    opacity *= fade;
    efctSetSpeed(opacity);
    const char *name = dataTableGetEntry24Member(work->optionNamesA.ids[index]);
    const TextureTableEntryIV *anchor = asdTMTexTableEntryAt(26, 164);
    s32 width = fontMeasureLineAdvance(name, 2);
    s32 offset = (anchor->placement->width - width) / 2;
    textDrawString((f32)(anchor->x + (offset + x)), (f32)(anchor->y + y), 0.55f, 2, 0.0f, color, opacity, name);
}
}
