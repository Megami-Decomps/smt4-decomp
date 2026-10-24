/* NON_MATCHING: logic agrees; register numbering/operand load order of the owner->frame and owner->metrics chains differs, and the table-search loop is rotated differently. */
#include "common.h"

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
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ f32 offsetX;
    /* 0x14 */ f32 offsetY;
    /* 0x18 */ s16 positionX;
    /* 0x1A */ s16 positionY;
} CenteredLayout;

/* The entry of the layout record: wanted positions at 0x94 / 0x96. */
typedef struct LayoutSource {
    /* 0x00 */ u8 unk00[0x94];
    /* 0x94 */ s16 positionX;
    /* 0x96 */ s16 positionY;
} LayoutSource;

/* A table row: id and the two wanted positions. */
typedef struct PositionRow {
    u16 id;
    s16 positionX;
    s16 positionY;
    u16 unk06;
} PositionRow;

s32 dataTableGetCount(u32 table);
PositionRow *dataTableGetEntries(void);
u32 dataTableGet(u32 table, u32 index);

/* Offset that centres a span of `outer` around `position`, measured from the origin. */
static __inline f32 centreOffset(s32 outer, u16 inner, s32 position, s16 origin)
{
    f32 span = (f32)outer;
    s32 shifted = (s32)((span - (f32)inner) * 0.5f) + (position - origin);

    return (f32)shifted - span * 0.5f;
}

void FUN_003407d0(CenteredLayout *layout, LayoutSource *source)
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
        u16 key = layout->owner->key;
        u32 table = dataTableGet(0x3B, 0);
        PositionRow *row = dataTableGetEntries();
        s32 count = dataTableGetCount(table);
        s32 i = 0;

        if (count <= 0) {
            return;
        }
        if (row->id != key) {
            do {
                i++;
                row++;
                if (count <= i) {
                    return;
                }
            } while (row->id != key);
        }
        if (row == NULL) {
            return;
        }
        if (row->positionX != 0) {
            CenterOwner *owner = layout->owner;
            CenterFrameOwner *frames = layout->frameOwner;

            layout->positionX = row->positionX;
            layout->offsetX = centreOffset(frames->frame->width, owner->metrics->innerWidth, row->positionX, owner->metrics->originX);
        }
        if (row->positionY == 0) {
            return;
        }
        layout->positionY = row->positionY;
        {
            CenterOwner *owner = layout->owner;
            CenterFrameOwner *frames = layout->frameOwner;
            f32 span = (f32)frames->frame->height;
            s32 shifted = (s32)((span - (f32)owner->metrics->innerHeight) * 0.5f) + (row->positionY - owner->metrics->originY);

            offsetY = span * 0.5f - (f32)shifted;
        }
    }
    layout->offsetY = offsetY;
}

} /* extern "C" */
