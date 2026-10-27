/* NON_MATCHING: rewritten from the raw draft (curve color x job/emitter color, quantized per vertex); retail spills the submission pointer (push {r0,...}, reloads it from the stack), stores the unpacked color channels separately and schedules the VFP work differently. */
#include "gfx/RenderSubmission.h"
#include "gfx/EffectColorUnpack.h"

/* A polygon-track emitter: the common emitter prefix (color at 0x24, draw mode at 0x28, last frame at
 * 0x34) followed by the vertex count, its color curve and the alpha envelope the curve is sampled with. */
struct PolygonTrackEmitter {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 color;
    /* 0x28 */ u32 drawMode;
    /* 0x2C */ u8 unk2C[8];
    /* 0x34 */ u32 frame;
    /* 0x38 */ u32 vertexCount;
    /* 0x3C */ u8 colorCurve[0x24];
    /* 0x60 */ u8 envelope[0x20];
    /* 0x80 */ u32 duration;
    /* 0x84 */ u8 unk84[0x35];
    /* 0xB9 */ u8 depthEnabled;
};

/* The primitive's vertex color array: four floats per vertex at 0x04. */
struct PolygonTrackPrimitive {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ EffectColor *colors;
    /* 0x08 */ u8 unk08[0x0A];
    /* 0x12 */ u16 flags;
};

extern "C" {
extern EffectColorProductState DAT_006471dc;
extern u8 DAT_005c1130; /* the default vertex color, one byte per channel */
extern u8 DAT_005c1131;
extern u8 DAT_005c1132;
extern u8 DAT_005c1133;
/* The curve sampler: (curve, envelope, frame, duration); the emitter's own color is sampled with only its first two arguments. */
u32 FUN_0038136c(const void *curve, const void *envelope, ...);
void FUN_00381758(PolygonTrackPrimitive *primitive, const f32 *rotation, const f32 *scale);
void FUN_003380a0(PolygonTrackPrimitive *primitive, u32 drawMode);

/* Fills a polygon track's per-vertex colors for the current frame: each vertex that is still inside
 * the emitter's duration gets the sampled curve color times the job and emitter colors, the rest the
 * default color. */
void FUN_003952f0(RenderSubmission *submission)
{
    PolygonTrackEmitter *emitter = (PolygonTrackEmitter *)submission->owner;
    PolygonTrackPrimitive *primitive = (PolygonTrackPrimitive *)submission->resource->packet;
    u32 *entries = (u32 *)submission->resource->unk00;
    if (submission->frame > emitter->frame && emitter->frame != 0) {
        return;
    }

    u32 emitterColor = FUN_0038136c(emitter, &emitter->color);
    effectColorUnpack(submission->color, &DAT_006471dc.factor);
    effectColorUnpack(emitterColor, &DAT_006471dc.color);
    DAT_006471dc.color.red *= DAT_006471dc.factor.red;
    DAT_006471dc.color.green *= DAT_006471dc.factor.green;
    DAT_006471dc.color.blue *= DAT_006471dc.factor.blue;
    DAT_006471dc.color.alpha *= DAT_006471dc.factor.alpha;
    u32 base = effectColorPack(&DAT_006471dc.color);

    u32 duration = emitter->duration;
    for (u32 i = 0; i < emitter->vertexCount; i++) {
        EffectColor *out = &primitive->colors[(u16)i];
        if (*entries < duration) {
            u32 curveColor = FUN_0038136c(emitter->colorCurve, emitter->envelope, *entries, duration);
            effectColorUnpack(curveColor, &DAT_006471dc.factor);
            effectColorUnpack(base, &DAT_006471dc.color);
            DAT_006471dc.color.red *= DAT_006471dc.factor.red;
            DAT_006471dc.color.green *= DAT_006471dc.factor.green;
            DAT_006471dc.color.blue *= DAT_006471dc.factor.blue;
            DAT_006471dc.color.alpha *= DAT_006471dc.factor.alpha;
            effectColorUnpack(effectColorPack(&DAT_006471dc.color), out);
        } else {
            out->red = (f32)DAT_005c1130 * (1.0f / 255.0f);
            out->green = (f32)DAT_005c1131 * (1.0f / 255.0f);
            out->blue = (f32)DAT_005c1132 * (1.0f / 255.0f);
            out->alpha = (f32)DAT_005c1133 * (1.0f / 255.0f);
        }
        entries += 12;
    }
    FUN_00381758(primitive, submission->rotation, submission->scale);
    if (emitter->depthEnabled != 0) {
        primitive->flags |= 0x100;
    } else {
        primitive->flags &= ~0x100;
    }
    FUN_003380a0(primitive, (u16)emitter->drawMode);
}
}
