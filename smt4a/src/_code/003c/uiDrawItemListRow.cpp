#include "shard/W6_W6Match6_ItemIcon.h"
#include "shard/TextureDrawCall.h"
#include "shard/S1ListPanel.h"
#include "text/TextDraw.h"

extern "C" {
s32 recordGetModeForId(u32 id);
void campDrawFrame(s32 x, s32 y, u32 special, f32 effect);
const SpriteInfo *asdTMTexTableEntryAt(u32 group, u32 sprite);
const char *FUN_0015f858(s32 message, u32 variant);
extern const char DAT_0052bfdc[];

// Draw the row decoration and category icon, then its message or the empty-entry label.
void uiDrawItemListRow(s32 x, s32 y, s32 message, s32 category, u32 color, u32 id, f32 effect)
{
    u32 special = 0;
    s32 mode = recordGetModeForId(id);
    if (mode == 1 || mode == 2 || mode == 6) {
        if (color == 0x9FE7FFFF)
            color = 0xF5FF9FFF;
        special = 1;
    }
    campDrawFrame(x, y, special, effect);
    FUN_001835b4(2, 18, 1140, x, y, 196);
    const SpriteInfo *icon = asdTMTexTableEntryAt(18, 1141);
    uiDrawItemCategoryIcon((s16)category, icon->x + x, icon->y + y, 196, 0);
    const SpriteInfo *label = asdTMTexTableEntryAt(18, 1142);
    if (message > 0) {
        const char *text = FUN_0015f858(message, 0);
        if (text)
            textDrawString(3, color, text, (f32)(label->x + x), (f32)(label->y + y), 0.24f, 0.0f, effect);
        return;
    }
    textDrawString(3, color, DAT_0052bfdc, (f32)(label->x + x), (f32)(label->y + y), 0.24f, 0.0f, effect);
}
}
