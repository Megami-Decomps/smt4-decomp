#include "ui/UiSpriteState.h"
#include "shard/TextureDrawCall.h"

namespace {
// Layout rectangle of a UI element: its offset inside the panel.
struct LayoutRect {
    u8 unk00[8];
    s16 x;                  // 0x08
    s16 y;                  // 0x0A
};
// The panel owner.
struct SlotPanel {
    u8 unk00[0x13C];
    UiSpriteState highlight; // 0x13C: sprite whose scale is the highlight speed
};
}

extern "C" {
f32 vec2GetSpeed(const void *object);
u32 dataTable24Sub0GetRecordS90X(u32 index);
const char *dataTable24Sub0GetRecordS90(u32 index);
s32 sceneSelectionGetSlotId(void);
void efctSetSpeed(f32 speed);
void FUN_002bf380(s32 layer, s32 group, u32 sprite, s32 x, s32 y, s32 order);
LayoutRect *asdTMTexTableEntryAt(u32 group, u32 id);
void textDrawString(u32 layer, u32 color, const char *text, f32 x, f32 y, f32 scale, f32 shear, f32 speed);
void uiFormatIndexedDisplayName(SlotPanel *panel, u32 name, s32 slot, char *buffer);

/* Draw one slot entry: its frame sprites, the selection highlight, its name and its price line. */
void uiSlotEntryDraw(f32 speed, SlotPanel *panel, u32 id, s32 x, s32 y, s32 selected)
{
    char text[64];
    u32 name = dataTable24Sub0GetRecordS90X(id);
    s32 slot = sceneSelectionGetSlotId();
    u32 nameColor;
    u32 detailColor;
    if (selected != 0) {
        FUN_002bf380(2, 0x24, 0x12, x, y, 0x65);
        FUN_002bf288(2, 0x24, 0x95, x, y, 0x6a);
        if (slot >= 0) {
            efctSetSpeed(vec2GetSpeed(&panel->highlight));
            FUN_002bf288(2, 0x24, 0x97, x, y, 0x6d);
            efctSetSpeed(speed);
            FUN_002bf288(2, 0x24, 0x91, x, y, 0x6f);
        } else {
            efctSetSpeed(vec2GetSpeed(&panel->highlight));
            FUN_002bf288(2, 0x24, 0x96, x, y, 0x6f);
            efctSetSpeed(speed);
        }
        nameColor = 0xffffffff;
        detailColor = 0xff;
    } else {
        FUN_002bf380(2, 0x24, 0x11, x, y, 0x65);
        FUN_002bf288(2, 0x24, 0x90, x, y, 0x6a);
        if (slot >= 0) {
            FUN_002bf288(2, 0x24, 0x91, x, y, 0x6f);
        }
        nameColor = 0xff;
        detailColor = 0xffffffff;
    }
    const char *title = dataTable24Sub0GetRecordS90(id);
    LayoutRect *rect = asdTMTexTableEntryAt(0x24, 0xa4);
    textDrawString(2, nameColor, title, rect->x + x, rect->y + y, 0.55f, 0.0f, speed);
    rect = asdTMTexTableEntryAt(0x24, 0xa6);
    uiFormatIndexedDisplayName(panel, name, slot, text);
    textDrawString(2, detailColor, text, rect->x + x, rect->y + y, 0.55f, 0.0f, speed);
}
}
