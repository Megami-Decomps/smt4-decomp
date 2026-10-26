/* NON_MATCHING: the blink arms and label coordinates now match; retail evaluates the label y argument before x and keeps both in caller-saved registers. */
#include "shard/S3SceneWidget.h"
#include "shard/TextureDrawCall.h"
#include "ui/UiSpriteState.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "text/TextDraw.h"

extern "C" {
void efctSetSpeed(f32);
f32 vec2GetSpeed(const void *object);
const UiLayoutEntryPrefixIV *asdTMTexTableEntryAt(u32, u32);
void FUN_002bf380(u32, u32, u32, s32, s32, s32);

void FUN_0022ade4(SceneWidget *work, s32 row, s32 entryIndex, s32 state, s32 fade)
{
    // Rows lie in the byte-aligned unk632 padding; adding their alignment would shift it.
    struct SceneRowSpritesView {
        u8 unk000[0x654];
        UiSpriteState rows[10];
    };
    typedef char SceneRowSpriteOffset[offsetof(SceneRowSpritesView, rows) == 0x654 ? 1 : -1];
    f32 scale = vec2GetSpeed(&reinterpret_cast<SceneRowSpritesView *>(work)->rows[row]);
    efctSetSpeed(scale);
    s32 x, y;
    if (state) {
        const UiLayoutEntryPrefixIV *layout = asdTMTexTableEntryAt(42, row + 21);
        x = layout->x;
        y = layout->y;
        FUN_002bf380(2, 42, 1, x, y, fade);
    } else {
        const UiLayoutEntryPrefixIV *layout = asdTMTexTableEntryAt(42, row + 5);
        x = layout->x;
        y = layout->y;
        FUN_002bf380(2, 42, 0, x, y, fade);
    }
    f32 opacity = static_cast<f32>(256 - fade) / 256.0f;
    s32 labelX, labelY;
    u32 color, layer;
    if (state) {
        const UiLayoutEntryPrefixIV *label = asdTMTexTableEntryAt(42, 20);
        labelX = label->x;
        labelY = label->y;
        color = state == 2 ? 0x72e027ff : 0xffffffff;
        layer = 3;
    } else {
        const UiLayoutEntryPrefixIV *label = asdTMTexTableEntryAt(42, 4);
        labelX = label->x;
        labelY = label->y;
        color = 0x323232ff;
        layer = 2;
    }
    textDrawString(layer, color, reinterpret_cast<const char *>(work->entries[entryIndex]),
                 static_cast<f32>(labelX + x), static_cast<f32>(labelY + y),
                 opacity, 0.0f, scale);
    if (state) {
        const UiLayoutEntryPrefixIV *layout = asdTMTexTableEntryAt(42, row + 21);
        s32 markX = layout->x;
        s32 markY = layout->y;
        if (work->frame < 8) {
            FUN_002bf288(2, 42, 18, markX, markY, fade);
        } else {
            FUN_002bf288(2, 42, 19, markX, markY, fade);
        }
    }
}
}
