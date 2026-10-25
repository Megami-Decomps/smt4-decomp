/* NON_MATCHING: VFP register allocation and the scheduling of the per-vertex color stores differ from retail. */
#include "common.h"
#include "gfx/RenderSubmission.h"

extern "C" {

/* One RGBA texel of a vertex strip, written from a packed word through its byte channels. */
typedef RenderSubmissionColor StripColor;

static __inline void stripColorSet(StripColor *color, u32 word)
{
    color->channels.red = __rev(word) >> 24;
    color->channels.green = __rev(word) >> 16;
    color->channels.blue = __rev(word) >> 8;
    color->channels.alpha = __rev(word);
}

/* One vertex's four colors (0x10 bytes). */
typedef struct StripVertexColors {
    StripColor corner[4];
} StripVertexColors;

/* One vertex's four texture offsets (0x20 bytes): only the first component of each is set. */
typedef struct StripVertexOffsets {
    f32 offset[4][2];
} StripVertexOffsets;

/* The mesh buffers the strip is written into. */
typedef struct StripMesh {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ StripVertexColors *colors;
    /* 0x3C */ StripVertexOffsets *offsets;
} StripMesh;

typedef struct StripOwner {
    /* 0x00 */ StripMesh *mesh;
    /* 0x04 */ u8 unk04[0x50];
    /* 0x54 */ u32 unk54;
    /* 0x58 */ u32 flags;       /* 0x20 and 0x04: the mesh data was written */
} StripOwner;

typedef struct StripHost {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ StripOwner *owner;
} StripHost;

/* The strip's parameters (only the fields read here). */
typedef struct StripParams {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 rings;          /* how many copies of the first ring the strip repeats */
    /* 0x3C */ u8 unk3c[0x3C];
    /* 0x78 */ f32 fadeInEnd;      /* fraction of the ring over which the alpha fades in */
    /* 0x7C */ f32 fadeOutStart;   /* fraction after which it fades out */
    /* 0x80 */ u8 unk80[0xC];
    /* 0x8C */ s32 segments;
    /* 0x90 */ f32 width;
} StripParams;

void *rt_memcpy(void *destination, const void *source, u32 size);
void *__aeabi_memcpy4(void *destination, const void *source, u32 size);

/* Builds the vertex strip of a ribbon effect: the first ring gets white colors fading in and out
 * along its length plus its offsets, and the remaining rings are copies of it. */
void FUN_00327f18(StripHost *host, StripParams *params)
{
    u32 rings = params->rings;

    if (rings == 0) {
        return;
    }
    StripOwner *owner = host->owner;
    StripVertexColors *firstColors = owner->mesh->colors;

    owner->flags |= 0x20;
    StripVertexOffsets *firstOffsets = host->owner->mesh->offsets;
    host->owner->flags |= 0x20 | 0x04;

    s32 segments = params->segments;
    u32 vertices = segments + 1;
    s32 fadeInEnd = (s32)(params->fadeInEnd * (f32)segments);
    s32 fadeOutStart = (s32)(params->fadeOutStart * (f32)segments);
    f32 step = params->width * 0.33333334f;
    StripVertexColors *colors = firstColors;
    StripVertexOffsets *offsets = firstOffsets;

    for (u32 i = 0; i < vertices; i++) {
        f32 fade;

        if ((s32)i < fadeInEnd) {
            fade = (f32)i / (f32)fadeInEnd;
        } else {
            fade = 1.0f;
            if (fadeOutStart < (s32)i) {
                fade = (f32)(u32)(segments - i) / (f32)(segments - fadeOutStart);
            }
        }
        u8 alpha = (u8)(u32)(fade * 255.0f);

        stripColorSet(&colors->corner[0], 0x00FFFFFF);
        stripColorSet(&colors->corner[1], 0x00FFFFFF | (alpha << 24));
        colors->corner[2] = colors->corner[1];
        stripColorSet(&colors->corner[3], 0x00FFFFFF);
        offsets->offset[0][0] = 0.0f;
        offsets->offset[1][0] = step;
        offsets->offset[2][0] = step * 2.0f;
        offsets->offset[3][0] = step * 3.0f;
        colors++;
        offsets++;
    }
    for (u32 ring = 1; ring < rings; ring++) {
        rt_memcpy(colors, firstColors, vertices * sizeof(StripVertexColors));
        colors += vertices;
        __aeabi_memcpy4(offsets, firstOffsets, vertices * sizeof(StripVertexOffsets));
        offsets += vertices;
    }
}

}
