#include "shard/W5_W5Match1_RecordKeys.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct UiCoordinatePair {
    Point2 first;
    Point2 second;
};
struct UiCoordinateLayout {
    /* 0x000 */ u8 items[0x360];
    /* 0x360 */ s32 state;
    /* 0x364 */ s32 selection;
    /* 0x368 */ s32 previousSelection;
    /* 0x36C */ Point2 header;
    /* 0x374 */ Point2 anchors[3];
    /* 0x38C */ Point2 reflected;
    /* 0x394 */ UiCoordinatePair pairs[5];
    /* 0x3E4 */ Point2 footer[4];
    /* 0x404 */ f32 topY;
    /* 0x408 */ f32 bottomY;
    /* 0x40C */ s32 mode;
    /* 0x410 */ f32 speed;
    /* 0x414 */ f32 offset[3];
};
typedef char UiCoordinateLayoutSizeCheck[sizeof(UiCoordinateLayout) == 0x420 ? 1 : -1];
extern "C" {
void sysMemClear(void *memory, u32 size);
}

/* Sets the layout's three offset components. */
static __inline void uiCoordinateLayoutSetOffset(UiCoordinateLayout *layout, f32 x, f32 y, f32 z)
{
    layout->offset[0] = x;
    layout->offset[1] = y;
    layout->offset[2] = z;
}

/* Reads the layout's anchor points from texture table 12 and resets its state, offset, speed and mode. */
extern "C" void uiCoordinateLayoutInitialize(UiCoordinateLayout *layout)
{
    for (s32 i = 0; i < 5; ++i) {
        const TextureTableEntryIV *point = asdTMTexTableEntryAt(12, i + 0x8f);
        layout->pairs[i].first.x = point->x;
        layout->pairs[i].first.y = point->y;
        point = asdTMTexTableEntryAt(12, i + 0x94);
        layout->pairs[i].second.x = point->x;
        layout->pairs[i].second.y = point->y;
    }
    const TextureTableEntryIV *header = asdTMTexTableEntryAt(12, 0x61);
    layout->header.x = header->x;
    layout->header.y = header->y;
    for (s32 i = 0; i < 3; ++i) {
        const TextureTableEntryIV *point = asdTMTexTableEntryAt(12, 100 - i);
        layout->anchors[i].x = point->x;
        layout->anchors[i].y = point->y;
    }
    layout->reflected.y = layout->anchors[2].y;
    layout->reflected.x = (layout->anchors[2].x - layout->anchors[1].x) + layout->anchors[2].x;
    for (s32 i = 0; i < 4; ++i) {
        const TextureTableEntryIV *point = asdTMTexTableEntryAt(12, i + 0x65);
        layout->footer[i].x = point->x;
        layout->footer[i].y = point->y;
    }
    layout->bottomY = asdTMTexTableEntryAt(12, 0x6a)->y;
    layout->topY = asdTMTexTableEntryAt(12, 0x69)->y;
    sysMemClear(layout->items, sizeof(layout->items));
    layout->selection = -1;
    layout->state = 0;
    layout->previousSelection = -1;
    uiCoordinateLayoutSetOffset(layout, 0.0f, 0.0f, 0.0f);
    layout->speed = 4.0f;
    layout->mode = 4;
}
