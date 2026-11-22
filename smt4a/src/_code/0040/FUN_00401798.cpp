/* NON_MATCHING: same instructions and layout as retail (the row search is deadEffectOffsetFind); the layout and row
 * pointers swap r4/r5 and the frame/metrics loads take other scratch registers (102 lines). */
#include "common.h"
#include "gamedata/DeadEffectOffset.h"

extern "C" {

/* The scene metrics the offsets are centred against. */
typedef struct CenterMetrics {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s16 originX;
    /* 0x22 */ s16 originY;
    /* 0x24 */ u16 innerWidth;
    /* 0x26 */ u16 innerHeight;
} CenterMetrics;

typedef struct CenterOwner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 key;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ CenterMetrics *metrics;
} CenterOwner;

typedef struct CenterFrame {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 width;
    /* 0x18 */ s32 height;
} CenterFrame;

typedef struct CenterFrameOwner {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ CenterFrame *frame;
} CenterFrameOwner;

/* The object being laid out: float offsets and the integer positions they were derived from. */
typedef struct CenteredLayout {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ CenterOwner *owner;
    /* 0x08 */ CenterFrameOwner *frameOwner;
    /* 0x0C */ u8 unk0C[0x10];
    /* 0x1C */ f32 offsetX;
    /* 0x20 */ f32 offsetY;
    /* 0x24 */ s16 positionX;
    /* 0x26 */ s16 positionY;
} CenteredLayout;

/* The entry of the layout record: wanted positions at 0x94 / 0x96. */
typedef struct LayoutSource {
    /* 0x00 */ u8 unk00[0x94];
    /* 0x94 */ s16 positionX;
    /* 0x96 */ s16 positionY;
} LayoutSource;


/* Offset that centres a span of `outer` around `position`, measured from the origin. */
static __inline f32 centreOffset(s32 outer, u16 inner, s32 position, s16 origin)
{
    f32 span = (f32)outer;
    s32 shifted = (s32)((span - (f32)inner) * 0.5f) + (position - origin);

    return (f32)shifted - span * 0.5f;
}

void FUN_00401798(CenteredLayout *layout, LayoutSource *source)
{
    f32 offsetY;

    layout->offsetX = 0.0f;
    layout->offsetY = 0.0f;
    layout->positionX = 0;
    layout->positionY = 0;
    if (source != NULL) {
        s16 x = source->positionX;
        s16 y;

        if (x != 0) {
            CenterOwner *owner = layout->owner;
            CenterFrameOwner *frames = layout->frameOwner;

            layout->positionX = x;
            layout->offsetX = centreOffset(frames->frame->width, owner->metrics->innerWidth, x, owner->metrics->originX);
        }
        y = source->positionY;
        if (y == 0) {
            return;
        }
        layout->positionY = y;
        {
            CenterOwner *owner = layout->owner;
            CenterFrameOwner *frames = layout->frameOwner;

            offsetY = -centreOffset(frames->frame->height, owner->metrics->innerHeight, y, owner->metrics->originY);
        }
    } else {
        DeadEffectOffsetRecord *row = deadEffectOffsetFind(layout->owner->key);
        if (row == NULL) {
            return;
        }
        s16 x = row->positionX;
        s16 y;

        if (x != 0) {
            CenterOwner *owner = layout->owner;
            CenterFrameOwner *frames = layout->frameOwner;

            layout->positionX = x;
            layout->offsetX = centreOffset(frames->frame->width, owner->metrics->innerWidth, x, owner->metrics->originX);
        }
        y = row->positionY;
        if (y == 0) {
            return;
        }
        layout->positionY = y;
        {
            CenterOwner *owner = layout->owner;
            CenterFrameOwner *frames = layout->frameOwner;
            f32 span = (f32)frames->frame->height;
            s32 shifted = (s32)((span - (f32)owner->metrics->innerHeight) * 0.5f) + (y - owner->metrics->originY);

            offsetY = span * 0.5f - (f32)shifted;
        }
    }
    layout->offsetY = offsetY;
}

} /* extern "C" */
