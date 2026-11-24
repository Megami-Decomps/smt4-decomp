#include "gfx/ModelTransform.h"
/* NON_MATCHING: written as its siblings FUN_00326650 and FUN_0031b42c (shared EffectColor state in g_vectorScratch,
 * the saved product copied back each pass, colour bytes through a byte swap); like them, the VFP register
 * numbering and the unpack/multiply scheduling differ from retail. */
#include "common.h"
#include "shard/W6_W6Match3_EffectColor.h"
#include "gfx/PackedColorBytes.h"
#include "gfx/VectorScratch.h"

extern "C" {

/* A particle's sprite. */
struct TintObject {
    u16 flags;        /* 0x00: bit 0x100 = tinted */
    u8 pad02[0x0E];
    Matrix44 transform; /* 0x10 */
    u32 color;        /* 0x50: packed colour, high byte first */
};

/* One emitter of the list, stride 0x30. */
struct TintPart {
    TintObject *object;   /* 0x00 */
    u8 pad04[0x10];
    s32 ready;            /* 0x14: live particle count */
    u32 color;            /* 0x18 */
    u8 pad1C[0x14];
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
    /* 0x00 */ TransformVec3 position;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ Vector4 rotation;
    f32 scale;            /* 0x20 */
    u32 tint;             /* 0x24 */
    s32 frame;            /* 0x28 */
    u8 pad2C[4];
    TintList **list;      /* 0x30 */
    TintBlock *block;     /* 0x34 */
};

u32 colorRampBlendWithFade(TintBlock *block, u32 *colorSource);
void renderSubmissionDrawPacket(TintObject *object, u32 frame);

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
static __inline void unpackColor(u32 color, EffectColor *out)
{
    out->red = (f32)(color >> 24) * 0.003921569f;
    out->green = (f32)((color & 0xFFFFFF) >> 16) * 0.003921569f;
    out->blue = (f32)((color & 0xFFFF) >> 8) * 0.003921569f;
    out->alpha = (f32)(color & 0xFF) * 0.003921569f;
}

static __inline void multiplyColor(EffectColor *color, const EffectColor *by)
{
    color->red = color->red * by->red;
    color->green = color->green * by->green;
    color->blue = color->blue * by->blue;
    color->alpha = color->alpha * by->alpha;
}

/* Tints every live emitter of the effect by (block colour * effect tint * part colour), once the
 * effect frame has reached the block's start frame. */
void FUN_00305004(TintEffect *effect)
{
    TintBlock *block = effect->block;
    TintList *list = *effect->list;

    if (effect->frame <= block->startFrame || block->startFrame == 0) {
        s32 partCount = block->partCount;
        u32 blockColor = colorRampBlendWithFade(block, block->colorSource);
        EffectColor saved;
        TintColor color;
        Matrix44 matrix;

        unpackColor(effect->tint, &g_vectorScratch.second.color);
        unpackColor(blockColor, &g_vectorScratch.first.color);
        multiplyColor(&g_vectorScratch.first.color, &g_vectorScratch.second.color);
        effectColorCopy(&g_vectorScratch.first.color, &saved);
        matrixInitializeWithScaleAndOffset(&matrix, &effect->position, &effect->rotation, effect->scale);

        for (s32 n = 0; n < partCount; n++) {
            TintPart *part = &list->part[n];
            if (part->ready > 0) {
                TintObject *object = part->object;
                matrixApplyByMode(&object->transform, &matrix, MODEL_MATRIX_REPLACE);
                unpackColor(part->color, &g_vectorScratch.first.color);
                effectColorCopy(&saved, &g_vectorScratch.second.color);
                multiplyColor(&g_vectorScratch.first.color, &g_vectorScratch.second.color);
                u32 a = (u32)(g_vectorScratch.first.color.red * 255.0f);
                u32 r = (u32)(g_vectorScratch.first.color.green * 255.0f);
                u32 g = (u32)(g_vectorScratch.first.color.blue * 255.0f);
                u32 b = (u32)(g_vectorScratch.first.color.alpha * 255.0f);
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
                renderSubmissionDrawPacket(object, block->frameId & 0xFFFF);
            }
        }
    }
}

} /* extern "C" */
