/* NON_MATCHING: row-position base rebasing and VFP allocation differ from retail. */
#include "shard/S1ListPanel.h"
#include <stddef.h>

struct ItemRowEntry {
    s16 label; // 0x00
    u8 unk02[2];
    s32 effect; // 0x04
    s32 category; // 0x08
};
struct ItemRowAnimation {
    u8 position[0x20];
    f32 speed; // 0x20
    u8 unk24[0x68];
};
struct ItemRowContext {
    u8 unk00000[0x128ac];
    ItemRowAnimation rows[1]; // 0x128ac
};
typedef char CheckItemRowSize[sizeof(ItemRowAnimation) == 0x8c ? 1 : -1];
typedef char CheckItemRowOffset[offsetof(ItemRowContext, rows) == 0x128ac ? 1 : -1];
extern "C" {
extern RenderCtx *g_renderCtx;
extern const char DAT_0052b4b4[];
extern const char DAT_0052b4c4[];
SpriteInfo *FUN_001834a4(s32 group, s32 index);
f32 FUN_001879d0(RenderCtx *context, f32 value);
s32 vec2GetXInt(const void *position);
s32 vec2GetYInt(const void *position);
void FUN_004abc68(ItemRowContext *context, s32 x, s32 y, s32 label);
void efctSetSpeed(f32 speed);
void FUN_00185e84(s32 effect, s32 x, s32 y, s32 layer, s32 first, s32 second);
const char *FUN_0014bd84(s32 effect);
void uiDrawItemCategoryIcon(s32 category, s32 x, s32 y, s32 layer, s32 flags);
const char *FUN_0015f858(s32 category, s32 variant);
void FUN_00162790(s32 mode, u32 alpha, const char *text, f32 x, f32 y, f32 scale, f32 depth, f32 speed);
}

// Draw a row's label, effect or category icon, and description at its animated position.
extern "C" void uiDrawAnimatedItemDescriptionRow(ItemRowContext *context, s32 rowIndex, const ItemRowEntry *entry, s32 placementIndex)
{
    if (entry == NULL)
        return;
    if (entry->label == 0 || placementIndex <= 0)
        return;
    s32 spacing = FUN_001834a4(12, 130)->bounds.height & 0x7fff;
    SpriteInfo *placement = FUN_001834a4(12, placementIndex + 135);
    s32 horizontalOffset = static_cast<s32>(FUN_001879d0(g_renderCtx, 0.26f));
    ItemRowAnimation *row = &context->rows[rowIndex];
    s32 rowX = vec2GetXInt(row->position);
    s32 rowY = vec2GetYInt(row->position);
    f32 speed = row->speed;
    s32 x = placement->x + rowX + horizontalOffset;
    s32 y = spacing * rowIndex + placement->y + rowY;
    FUN_004abc68(context, x, y, entry->label);
    const char *text;
    if (entry->effect) {
        s16 effect = static_cast<s16>(entry->effect);
        efctSetSpeed(speed);
        SpriteInfo *icon = FUN_001834a4(12, 134);
        FUN_00185e84(effect, icon->x + x, icon->y + y, 26, 0, 0);
        if (effect == -1 || effect == -2)
            text = DAT_0052b4b4;
        else if (effect == -99)
            text = DAT_0052b4c4;
        else
            text = FUN_0014bd84(effect);
    } else {
        s32 category = entry->category;
        if (category == 0)
            return;
        efctSetSpeed(speed);
        SpriteInfo *icon = FUN_001834a4(12, 134);
        uiDrawItemCategoryIcon(static_cast<s16>(category), icon->x + x, icon->y + y, 26, 0);
        text = FUN_0015f858(category, 0);
    }
    SpriteInfo *position = FUN_001834a4(12, 135);
    FUN_00162790(2, 255, text, static_cast<f32>(position->x + x), static_cast<f32>(position->y + y), 0.55f, 0.0f, speed);
    efctSetSpeed(1.0f);
}
