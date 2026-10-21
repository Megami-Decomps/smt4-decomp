/* NON_MATCHING: -O2 candidate; two coordinate-conversion scratch registers/schedules and final zero/4.0f register lifetimes differ. */
#include "shard/S1ListPanel.h"
#include "shard/W5_W5Match1_RecordKeys.h"

struct UiCoordinatePair {
    Point2 first;
    Point2 second;
};
struct UiCoordinateLayout {
    u8 items[0x360];
    s32 state;
    s32 selection;
    s32 previousSelection;
    Point2 header;
    Point2 anchors[3];
    Point2 reflected;
    UiCoordinatePair pairs[5];
    Point2 footer[4];
    f32 topY;
    f32 bottomY;
    s32 mode;
    f32 speed;
    f32 offsetX;
    f32 offsetY;
    f32 offsetZ;
};
extern "C" {
u16 *FUN_001834a4(u32 group, s32 index);
void sysMemClear(void *memory, u32 size);
}

static __inline const SpriteInfo *layoutSprite(s32 index)
{
    return (const SpriteInfo *)FUN_001834a4(12, index);
}

extern "C" void uiCoordinateLayoutInitialize(UiCoordinateLayout *layout)
{
    for (s32 i = 0; i < 5; ++i) {
        const SpriteInfo *first = layoutSprite(0x8f + i);
        layout->pairs[i].first.x = (f32)first->x;
        layout->pairs[i].first.y = (f32)first->y;
        const SpriteInfo *second = layoutSprite(0x94 + i);
        layout->pairs[i].second.x = (f32)second->x;
        layout->pairs[i].second.y = (f32)second->y;
    }
    const SpriteInfo *header = layoutSprite(0x61);
    layout->header.x = (f32)header->x;
    layout->header.y = (f32)header->y;
    for (s32 i = 0; i < 3; ++i) {
        const SpriteInfo *sprite = layoutSprite(100 - i);
        layout->anchors[i].x = (f32)sprite->x;
        layout->anchors[i].y = (f32)sprite->y;
    }
    layout->reflected.y = layout->anchors[2].y;
    layout->reflected.x = (layout->anchors[2].x - layout->anchors[1].x)
                       + layout->anchors[2].x;
    for (s32 i = 0; i < 4; ++i) {
        const SpriteInfo *sprite = layoutSprite(0x65 + i);
        layout->footer[i].x = (f32)sprite->x;
        layout->footer[i].y = (f32)sprite->y;
    }
    layout->bottomY = (f32)layoutSprite(0x6a)->y;
    layout->topY = (f32)layoutSprite(0x69)->y;
    sysMemClear(layout->items, sizeof(layout->items));
    layout->selection = -1;
    layout->state = 0;
    layout->previousSelection = -1;
    layout->offsetX = 0.0f;
    layout->offsetY = 0.0f;
    layout->offsetZ = 0.0f;
    layout->speed = 4.0f;
    layout->mode = 4;
}
