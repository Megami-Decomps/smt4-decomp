/* NON_MATCHING: row-sprite speed addressing, conditional label-coordinate loads and blink branch placement differ. */
#include "shard/S3SceneWidget.h"
#include "ui/UiSpriteState.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
void efctSetSpeed(f32);
const UiLayoutEntryPrefixIV *FUN_002bf4f8(u32, u32);
void FUN_002bf380(u32, u32, u32, s32, s32, s32);
void FUN_002bf288(u32, u32, u32, s32, s32, s32);
void FUN_002be5a4(u32, u32, const char *, f32, f32, f32, f32, f32);

void FUN_0022ade4(SceneWidget *work, s32 row, s32 entryIndex, s32 state, s32 fade)
{
    // Rows lie in the byte-aligned unk632 padding; adding their alignment would shift it.
    struct SceneRowSpritesView {
        u8 unk000[0x654];
        UiSpriteState rows[10];
    };
    typedef char SceneRowSpriteOffset[offsetof(SceneRowSpritesView, rows) == 0x654 ? 1 : -1];
    f32 scale = reinterpret_cast<SceneRowSpritesView *>(work)->rows[row].unk20;
    efctSetSpeed(scale);
    s32 x, y;
    if (state) {
        const UiLayoutEntryPrefixIV *layout = FUN_002bf4f8(42, row + 21);
        x = layout->x;
        y = layout->y;
        FUN_002bf380(2, 42, 1, x, y, fade);
    } else {
        const UiLayoutEntryPrefixIV *layout = FUN_002bf4f8(42, row + 5);
        x = layout->x;
        y = layout->y;
        FUN_002bf380(2, 42, 0, x, y, fade);
    }
    f32 opacity = static_cast<f32>(256 - fade) / 256.0f;
    const UiLayoutEntryPrefixIV *label;
    u32 color, layer;
    if (state) {
        label = FUN_002bf4f8(42, 20);
        color = state == 2 ? 0x72e027ff : 0xffffffff;
        layer = 3;
    } else {
        label = FUN_002bf4f8(42, 4);
        color = 0x323232ff;
        layer = 2;
    }
    FUN_002be5a4(layer, color, reinterpret_cast<const char *>(work->entries[entryIndex]),
                 static_cast<f32>(label->x + x), static_cast<f32>(label->y + y),
                 opacity, 0.0f, scale);
    if (state) {
        const UiLayoutEntryPrefixIV *layout = FUN_002bf4f8(42, row + 21);
        if (work->frame >= 8) {
            FUN_002bf288(2, 42, 19, layout->x, layout->y, fade);
            return;
        }
        FUN_002bf288(2, 42, 18, layout->x, layout->y, fade);
    }
}
}
