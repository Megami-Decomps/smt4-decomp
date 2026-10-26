/* NON_MATCHING: same maths, frame (68 bytes) and addressing as retail (shared EffectColor state, effectColorCopy vector copies, colour bytes through byte-channel bitfields set from a byte swap); VFP register numbering differs (retail: s16 scale, s17-s20 saved product, s21 255.0) and the unpack/multiply scheduling. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
#include "shard/W6_W6Match3_EffectColor.h"
#include "gfx/PackedColorBytes.h"

extern "C" {

struct TintObject {
    u16 flags;        /* 0x00: bit 0x100 = tinted */
    u8 pad02[0x0E];
    u8 transform[0x40]; /* 0x10 */
    u32 color;        /* 0x50: packed colour, high byte first */
};

/* Entry of the part list, stride 0x10. */
struct TintPart {
    TintObject *object;   /* 0x00 */
    s32 ready;            /* 0x04 */
    u32 color;            /* 0x08 */
    u32 pad0C;
};

struct TintList {
    TintPart part[1];
};

struct TintBlock {
    u8 pad00[0x24];
    u32 colorSource[1];   /* 0x24 */
    u32 frameId;          /* 0x28 */
    u8 pad2C[4];
    u8 pad30[4];
    s32 startFrame;       /* 0x34 */
    s32 partCount;        /* 0x38 */
    u8 pad3C[0x20];
    u8 tinted;            /* 0x5C */
};

struct TintEffect {
    u8 pad00[0x20];
    f32 scale;            /* 0x20 */
    u32 tint;             /* 0x24 */
    s32 frame;            /* 0x28 */
    u8 pad2C[4];
    TintList **list;      /* 0x30 */
    TintBlock *block;     /* 0x34 */
};

extern EffectColorProductState DAT_004ea81c;

u32 FUN_00269694(TintBlock *block, u32 *colorSource);
void matrixInitializeWithScaleAndOffset(u8 *matrix, TintEffect *effect, s32 offset, f32 scale);
void matrixApplyByMode(u8 *transform, u8 *matrix, s32 flag);
void FUN_00256a50(TintObject *object, u32 frame);

/* A packed colour word addressed by its byte channels. */
union TintColor {
    u32 value;
    struct {
        u32 red : 8;
        u32 green : 8;
        u32 blue : 8;
        u32 alpha : 8;
    } channels;
};

/* Unpacks the four bytes of a packed colour (high byte first) into 0..1 floats. */
static void unpackColor(u32 color, EffectColor *out)
{
    out->red = (f32)(color >> 24) * 0.003921569f;
    out->green = (f32)((color & 0xFFFFFF) >> 16) * 0.003921569f;
    out->blue = (f32)((color & 0xFFFF) >> 8) * 0.003921569f;
    out->alpha = (f32)(color & 0xFF) * 0.003921569f;
}

static void multiplyColor(EffectColor *color, const EffectColor *by)
{
    color->red = color->red * by->red;
    color->green = color->green * by->green;
    color->blue = color->blue * by->blue;
    color->alpha = color->alpha * by->alpha;
}

/* Tints every ready part of the effect by (block colour * effect tint * part colour), once the
 * effect frame has reached the block's start frame. */
void FUN_0031b42c(TintEffect *effect)
{
    TintBlock *block = effect->block;
    TintList *list = *effect->list;

    if (effect->frame <= block->startFrame || block->startFrame == 0) {
        s32 partCount = block->partCount;
        u32 blockColor = FUN_00269694(block, block->colorSource);
        EffectColor saved;
        TintColor color;
        u8 matrix[0x40];

        unpackColor(effect->tint, &DAT_004ea81c.factor);
        unpackColor(blockColor, &DAT_004ea81c.color);
        multiplyColor(&DAT_004ea81c.color, &DAT_004ea81c.factor);
        effectColorCopy(&DAT_004ea81c.color, &saved);
        matrixInitializeWithScaleAndOffset(matrix, effect, 0, effect->scale);

        for (s32 n = 0; n < partCount; n++) {
            TintPart *part = &list->part[n];
            if (part->ready > 0) {
                TintObject *object = part->object;
                matrixApplyByMode(object->transform, matrix, 0);
                unpackColor(part->color, &DAT_004ea81c.color);
                effectColorCopy(&saved, &DAT_004ea81c.factor);
                multiplyColor(&DAT_004ea81c.color, &DAT_004ea81c.factor);
                u32 a = (u32)(DAT_004ea81c.color.red * 255.0f);
                u32 r = (u32)(DAT_004ea81c.color.green * 255.0f);
                u32 g = (u32)(DAT_004ea81c.color.blue * 255.0f);
                u32 b = (u32)(DAT_004ea81c.color.alpha * 255.0f);
                u32 packed = (a << 24) | ((r & 0xFF) << 16) | ((g & 0xFF) << 8) | (b & 0xFF);
                color.channels.red = packedColorSwap32(packed) >> 24;
                color.channels.green = packedColorSwap32(packed) >> 16;
                color.channels.blue = packedColorSwap32(packed) >> 8;
                color.channels.alpha = packedColorSwap32(packed);
                object->color = color.value;
                if (block->tinted != 0) {
                    object->flags = object->flags | 0x100;
                } else {
                    object->flags = object->flags & 0xFEFF;
                }
                FUN_00256a50(object, block->frameId & 0xFFFF);
            }
        }
    }
}

} /* extern "C" */
