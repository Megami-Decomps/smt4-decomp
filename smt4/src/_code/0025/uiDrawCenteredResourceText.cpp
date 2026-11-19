#include "text/TextDraw.h"
#include "shard/S3UiLookup.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void texDrawCompositeSprite(u32 screen, u32 resource, u32 kind, s32 x, s32 y, u32 mode);
void asdTextSetBaseColor(UiTextObject *text, u32 color);
}

/* Place the UI frame and horizontally center its text inside the resource width. */
extern "C" void uiDrawCenteredResourceText(UiCenteredText *owner, const UiTextPlacement *placement, s32 x, s32 y)
{
    if (owner == NULL) {
        return;
    }
    texDrawCompositeSprite(2, 57, 14, placement->x + x, placement->y + y, 111);
    TextureTableEntryIV *metrics = asdTMTexTableEntryAt(57, 158);
    s32 inset = (metrics->placement->width - owner->width) / 2;
    asdTextSetBaseColor(owner->text, 0xFFFFFF00);
    textDrawFaded(owner->text, metrics->x + placement->x + inset + x,
                 placement->y + metrics->y + y, 112, placement->opacity);
}
