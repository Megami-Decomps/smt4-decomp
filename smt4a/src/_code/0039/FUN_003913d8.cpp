/* NON_MATCHING: rewritten from the raw draft (semantics follow the retail asm: three ring rows built in the effect color state, direction (cos, 0, sin, 1)); armcc keeps more values in core registers (push r4-r9, sl) and schedules the per-row copies differently from retail's VFP block copies and 8-byte spill. */
#include "gfx/EffectPrimitiveWork.h"
#include <math.h>

/* Ring of expanding polygons: its emitter carries the radius growth parameters after the common
 * primitive-emitter prefix (0x38: segment count, 0x40/0x50: base radii, 0x54/0x58: extra ring offsets,
 * 0x5C/0x60: initial speed and acceleration, 0x64: run backwards). */
struct RingEmitter {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s32 duration;
    /* 0x38 */ u32 segmentCount;
    /* 0x3C */ u8 unk3C[4];
    /* 0x40 */ f32 innerRadius;
    /* 0x44 */ u8 unk44[0xC];
    /* 0x50 */ f32 radiusBias;
    /* 0x54 */ f32 middleOffset;
    /* 0x58 */ f32 outerOffset;
    /* 0x5C */ f32 speed;
    /* 0x60 */ f32 acceleration;
    /* 0x64 */ u8 reversed;
};

/* The primitive being filled: a vertex count at 0x02, a flag word at 0x54 and the vertex buffer
 * reached through the object at 0x08. */
struct RingPrimitive {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ s16 vertexCount;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ struct RingVertexOwner *vertices;
    /* 0x0C */ u8 unk0C[0x48];
    /* 0x54 */ u32 flags;
};

/* Four vertices (twelve words) per ring segment: the hub, then the points on three rings. */
struct RingSegment {
    /* 0x00 */ f32 hub[3];
    /* 0x0C */ f32 inner[3];
    /* 0x18 */ f32 middle[3];
    /* 0x24 */ f32 outer[3];
};

struct RingVertexOwner {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ RingSegment *segments;
};

extern "C" {
extern EffectColor g_polyDefaultColor;
extern EffectColor g_effectRingScratchColor;
extern EffectColorProductState DAT_006471dc;
f32 FUN_001a1ee0(f32 angle);
f32 FUN_001b63b0(f32 angle);

/* Builds the segments of the ring polygon for the current frame: the ring radius follows the
 * parabola `speed * t + acceleration * t * t / 2`, and each of the three ring rows is the default
 * tint scaled by that row's radius, then by the segment's direction (cosine, 0, sine, 1). The
 * effect color state's two colors are the scratch the rows are built in. */
void FUN_003913d8(EffectPrimitiveWork *work)
{
    s32 frame = work->frame;
    RingPrimitive *primitive = (RingPrimitive *)work->handle->unk00; /* the handle's first word is the ring primitive */
    RingEmitter *emitter = (RingEmitter *)work->emitter;
    s32 duration = emitter->duration;
    if (frame <= duration || duration == 0) {
        f32 speed = emitter->speed;
        if (emitter->reversed != 0) {
            frame = duration - frame;
        }
        f32 acceleration = emitter->acceleration;
        f32 time = (f32)frame;
        if (!(0.0f <= acceleration)) {
            /* A decelerating ring stops growing at its apex. */
            f32 apex = (fabsf(speed) / (acceleration * 0.5f)) * -0.5f;
            if (time > apex) {
                time = apex;
            }
        }
        s32 segments = primitive->vertexCount / 4;
        RingSegment *out = primitive->vertices->segments;
        primitive->flags |= 1;
        f32 segmentCount = (f32)emitter->segmentCount;

        f32 innerRadius = emitter->radiusBias + emitter->innerRadius +
                          (fabsf(speed) + acceleration * time * 0.5f) * time;
        f32 middleRadius = emitter->middleOffset + innerRadius;
        f32 outerRadius = emitter->outerOffset + middleRadius;

        EffectColor *color = &DAT_006471dc.color;
        EffectColor *direction = &DAT_006471dc.factor;
        effectColorCopy(&g_polyDefaultColor, color);
        effectColorCopy(&g_polyDefaultColor, direction);
        color->red *= innerRadius;
        color->green *= innerRadius;
        color->blue *= innerRadius;
        color->alpha *= innerRadius;
        EffectColor innerRow = *color;
        *color = *direction;
        color->red *= middleRadius;
        color->green *= middleRadius;
        color->blue *= middleRadius;
        color->alpha *= middleRadius;
        EffectColor middleRow = *color;
        direction->red *= outerRadius;
        direction->green *= outerRadius;
        direction->blue *= outerRadius;
        direction->alpha *= outerRadius;
        EffectColor outerRow = *direction;

        f32 angle = 0.0f;
        for (s32 i = 0; i < segments; i++) {
            f32 phase = angle * 40.743664f;
            f32 cosine = FUN_001b63b0(phase);
            f32 sine = FUN_001a1ee0(phase);
            out->hub[0] = 0.0f;
            out->hub[1] = 0.0f;
            out->hub[2] = 0.0f;
            angle += 6.2831855f / segmentCount;
            direction->red = cosine;
            direction->green = 0.0f;
            direction->blue = sine;
            direction->alpha = 1.0f;

            *color = innerRow;
            color->red *= direction->red;
            color->green *= direction->green;
            color->blue *= direction->blue;
            color->alpha *= direction->alpha;
            effectColorCopy(color, &g_effectRingScratchColor);
            out->inner[0] = g_effectRingScratchColor.red;
            out->inner[1] = g_effectRingScratchColor.green;
            out->inner[2] = g_effectRingScratchColor.blue;

            *color = middleRow;
            color->red *= direction->red;
            color->green *= direction->green;
            color->blue *= direction->blue;
            color->alpha *= direction->alpha;
            effectColorCopy(color, &g_effectRingScratchColor);
            out->middle[0] = g_effectRingScratchColor.red;
            out->middle[1] = g_effectRingScratchColor.green;
            out->middle[2] = g_effectRingScratchColor.blue;

            *color = outerRow;
            color->red *= direction->red;
            color->green *= direction->green;
            color->blue *= direction->blue;
            color->alpha *= direction->alpha;
            g_effectRingScratchColor = *color;
            out->outer[0] = g_effectRingScratchColor.red;
            out->outer[1] = g_effectRingScratchColor.green;
            out->outer[2] = g_effectRingScratchColor.blue;
            out++;
        }
    }
}

} /* extern "C" */
