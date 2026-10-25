/* NON_MATCHING: armcc spills the arguments (push {r0-r2}) and hoists the per-component colour addresses out of the vertex loop; retail keeps the parameters in registers, copies the seven parameter words with one ldm/stm and stores the eight colour components with reloads per vertex. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemUtil.h"
#include "shard/asdMemFree.h"

/* A per-vertex colour buffer object: `colors` holds four floats per vertex. */
struct TrackColorBuffer {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ f32 (*colors)[4];
};

/* The vertex buffers of a polygon track, allocated in one block together with its u16 index array. */
struct TrackBuffers {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ TrackColorBuffer *colorsA;
    /* 0x14 */ TrackColorBuffer *colorsB;
    /* 0x18 */ u16 *indices;
    /* 0x1C */ u16 indexData[1];
};

/* The creation parameters of a track (the first word selects the vertex layout). */
struct TrackParams {
    u32 words[7];
};

/* A polygon track effect: its vertex count, the copied creation parameters and the buffers built from them. */
struct PolygonTrack {
    /* 0x00 */ u32 vertexCount;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ TrackParams params;
    /* 0x28 */ TrackBuffers *buffers;
};

extern "C" {

extern const char DAT_004105bc[];
extern const u8 DAT_004736f0[];
extern const u8 DAT_004737ce[];
extern const u8 DAT_00472560[4]; /* vertex colour (rgba bytes) */

void *memAlloc(int, int, int, int size, int align, int);
void bufferObjDestroy(TrackColorBuffer *buffer);
TrackColorBuffer *FUN_002469ec(u32 count, u32 first, const u8 *layout, s32 attributes, s32 stride);
TrackColorBuffer *FUN_002d1480(u32 count, s32 a, s32 b, s32 c, const u8 *layout, s32 stride);
void FUN_00305400(TrackBuffers *buffers, const u32 *params);

/* Copies the creation parameters `params` into the track and rebuilds its vertex buffers (every
 * vertex starts with the track colour); a track without vertices keeps nothing. */
void FUN_0024f8a4(PolygonTrack *track, u32 unused, const TrackParams *params)
{
    track->params = *params;
    if (track->vertexCount != 0) {
        if (track->buffers != NULL) {
            bufferObjDestroy(track->buffers->colorsA);
            bufferObjDestroy(track->buffers->colorsB);
            asdMemFree(track->buffers);
        }
        u16 count = track->vertexCount;
        u16 first = params->words[0];
        asdDebugTrace(DAT_004105bc, 533);
        TrackBuffers *buffers = (TrackBuffers *)memAlloc(0x10000, 0x100, 0, 0x1C + count * 2, 0x10, 1);
        memClear(buffers, 0x1C + count * 2);
        buffers->indices = buffers->indexData;
        buffers->colorsA = FUN_002469ec(count, first, DAT_004736f0, 3, 0x48);
        buffers->colorsB = FUN_002d1480(count, 1, 6, 8, DAT_004737ce, 0x48);
        const f32 scale = 1.0f / 255.0f;
        for (u16 i = 0; i < count; i++) {
            for (u32 c = 0; c < 4; c++)
                buffers->colorsA->colors[i][c] = DAT_00472560[c] * scale * scale;
            for (u32 c = 0; c < 4; c++)
                buffers->colorsB->colors[i][c] = DAT_00472560[c] * scale * scale;
        }
        track->buffers = buffers;
        FUN_00305400(buffers, &params->words[2]);
    }
}

} /* extern "C" */
