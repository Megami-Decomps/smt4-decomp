/* NON_MATCHING: the placement table pointer and stereo offset get each other's saved registers (r5/r7). */
#include "battle/BtlUiItemDescriptions.h"
#include "shard/S1ListPanel.h"
#include "camp/RenderCtxA.h"
#include "gfx/StereoParallax.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "ui/UiSpriteApi.h"

extern "C" {
extern const char DAT_0052b4b4[];
extern const char DAT_0052b4c4[];
void efctSetSpeed(f32 speed);
void FUN_00185e84(s32 effect, s32 x, s32 y, s32 layer, s32 first, s32 second);
void uiDrawItemCategoryIcon(s32 category, s32 x, s32 y, s32 layer, s32 flags);
const char *dataFindKindRecordWithAocOverrides(s32 category, s32 variant);
} /* extern "C" */

/* Draws a row's label, icon and description at its animated position. */
extern "C" void uiDrawAnimatedItemDescriptionRow(BtlUiA *context, s32 rowIndex,
                                                  const BtlUiItemDescriptionRow *entry, s32 placementIndex)
{
    if (entry == NULL || entry->label == 0 || placementIndex <= 0)
        return;
    const f32 normalSpeed = 1.0f;
    s32 spacing = asdTMTexTableEntryAt(12, 130)->height & 0x7fff;
    TextureTableEntryIV *placement = asdTMTexTableEntryAt(12, placementIndex + 135);
    s32 horizontalOffset = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    const UiSpriteState *animation = &btlUiItemDescriptions(context).animations[rowIndex];
    s32 rowX = vec2GetXInt(animation);
    s32 rowY = vec2GetYInt(animation);
    f32 speed = vec2GetSpeed(animation);
    s32 x = placement->x + rowX + horizontalOffset;
    s32 y = spacing * rowIndex + placement->y + rowY;
    btlDrawLayeredHud(context, x, y, entry->label, speed);
    const char *text;
    if (entry->effect) {
        s16 effect = (s16)entry->effect;
        efctSetSpeed(speed);
        TextureTableEntryIV *icon = asdTMTexTableEntryAt(12, 134);
        FUN_00185e84(effect, icon->x + x, icon->y + y, 26, 0, 0);
        if (effect == -1 || effect == -2)
            text = DAT_0052b4b4;
        else if (effect == -99)
            text = DAT_0052b4c4;
        else
            text = (const char *)aocIndexValueOrDefault(effect);
        TextureTableEntryIV *position = asdTMTexTableEntryAt(12, 135);
        textDrawString((f32)(position->x + x), (f32)(position->y + y), 0.55f, 2, 0.0f, 255, speed, text);
        efctSetSpeed(normalSpeed);
    } else {
        s32 category = entry->category;
        if (category == 0)
            return;
        efctSetSpeed(speed);
        TextureTableEntryIV *icon = asdTMTexTableEntryAt(12, 134);
        uiDrawItemCategoryIcon((s16)category, icon->x + x, icon->y + y, 26, 0);
        text = dataFindKindRecordWithAocOverrides(category, 0);
        TextureTableEntryIV *position = asdTMTexTableEntryAt(12, 135);
        textDrawString((f32)(position->x + x), (f32)(position->y + y), 0.55f, 2, 0.0f, 255, speed, text);
        efctSetSpeed(normalSpeed);
    }
}
