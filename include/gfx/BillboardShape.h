/* A prebuilt billboard shape (a render submission packet's `shape`): per-sprite attribute streams the draw turns
 * into camera-facing quads in the shape's vertex buffers. */
#ifndef GFX_BILLBOARDSHAPE_H
#define GFX_BILLBOARDSHAPE_H

#include "common.h"
#include "nw/math/MTX33.h"
#include <stddef.h>

struct AsdTexture;

/* The attribute bits of BillboardShape::attributes; each selects one stream. */
enum {
    BILLBOARD_ATTRIBUTE_POSITION = 0x1,
    BILLBOARD_ATTRIBUTE_COLOR = 0x2,
    BILLBOARD_ATTRIBUTE_SIZE = 0x4,
    BILLBOARD_ATTRIBUTE_TEXCOORD = 0x8,
    BILLBOARD_ATTRIBUTE_ROTATION = 0x20,
    BILLBOARD_ATTRIBUTE_TEXCOORD_ALT = 0x80,
    BILLBOARD_ATTRIBUTE_SHARED_TEXCOORD = 0x80000 /* every sprite uses BillboardShape::sharedTexCoords */
};

enum { BILLBOARD_FLAG_PIVOT = 0x2 }; /* BillboardShape::flags: offset each quad by the pivot */

/* One attribute stream: the address of the current sprite's value and the step to the next. */
struct BillboardStream {
    /* 0x00 */ u32 data;
    /* 0x04 */ u32 stride;
};

/* A sprite's RGBA colour bytes. */
union BillboardColor {
    u32 value;
    struct {
        u8 red;
        u8 green;
        u8 blue;
        u8 alpha;
    } channels;
};

/* The quad vertex buffers a shape fills: four vertices a sprite. */
struct BillboardBuffers {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ nw::math::VEC3 *positions;
    /* 0x34 */ u8 unk34[4];
    /* 0x38 */ u32 *colors;
    /* 0x3C */ f32 *texCoords;
};

struct BillboardShape {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 capacity;
    /* 0x08 */ u32 stride;           /* step of every stream */
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ u32 attributes;       /* BILLBOARD_ATTRIBUTE_* */
    /* 0x18 */ BillboardBuffers *buffers;
    /* 0x1C */ u32 positions;
    /* 0x20 */ u32 texCoords;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ u32 sizes;
    /* 0x2C */ u32 colors;
    /* 0x30 */ u8 unk30[4];
    /* 0x34 */ u32 rotations;
    /* 0x38 */ u32 texCoordsAlt;
    /* 0x3C */ u8 unk3C[4];
    /* 0x40 */ f32 sharedTexCoords[4]; /* left, top, right, bottom */
    /* 0x50 */ u8 unk50[0x10];
    /* 0x60 */ s32 count;
    /* 0x64 */ u8 tint[4];
    /* 0x68 */ u8 unk68[0x40];
    /* 0xA8 */ u32 flags;            /* BILLBOARD_FLAG_* */
    /* 0xAC */ f32 pivot[2];
    /* 0xB4 */ AsdTexture *texture;
};
typedef char BillboardShapeCheck[offsetof(BillboardShape, count) == 0x60 && offsetof(BillboardShape, flags) == 0xa8 &&
                                 offsetof(BillboardShape, texture) == 0xb4 ? 1 : -1];

#endif
