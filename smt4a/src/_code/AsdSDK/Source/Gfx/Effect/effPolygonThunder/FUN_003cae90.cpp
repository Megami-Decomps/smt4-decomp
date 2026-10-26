/* NON_MATCHING: the trace, level clamp, colour bytes (packedColorBytesSet per vertex) and hoisted colour parts now match retail's shape (row counts equal or within 2); remaining: saved-register/spill assignment (retail spills params to a 88-byte frame, loads the ramp pair with one vldmia) and the allocation-size/trace argument order. */
#include "AsdSDK/AsdDebug.h"
#include "gfx/PackedColorBytes.h"

/* Packed vertex colour data of one strip vertex: three RGBA colours and two copies. */
struct ThunderVertex {
    /* 0x00 */ PackedColorBytes color0;
    /* 0x04 */ PackedColorBytes color1;
    /* 0x08 */ PackedColorBytes color2;
    /* 0x0C */ PackedColorBytes copy1;
    /* 0x10 */ PackedColorBytes copy0;
};

struct ThunderVertexBuffer {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ ThunderVertex *vertices;
};

struct ThunderStrip {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ s16 vertexValues;     /* five values per vertex */
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ ThunderVertexBuffer *buffer;
};

/* One entry of the result block: the strip and its index marker. */
struct ThunderEntry {
    /* 0x00 */ ThunderStrip *strip;
    /* 0x04 */ s32 marker;
    /* 0x08 */ u32 unk08;
};

struct ThunderBlock {
    /* 0x00 */ ThunderEntry *entries;
    /* 0x04 */ ThunderEntry storage[1];
};

/* The effect parameters. */
struct ThunderParams {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 strips;
    /* 0x3C */ u32 segments;
    /* 0x40 */ u8 unk40[0x28];
    /* 0x68 */ f32 fadeIn;           /* fraction of the bolt that fades in */
    /* 0x6C */ f32 fadeOut;          /* fraction at which it starts to fade out */
    /* 0x70 */ u32 color0;           /* 0xAARRGGBB */
    /* 0x74 */ u32 color1;
    /* 0x78 */ u32 color2;
};

extern "C" {
extern u8 DAT_005c1eec[];


void *memAlloc(u32 pool, u32 category, u32 flags, u32 size, u32 alignment, u32 zero);
ThunderStrip *FUN_00350d90(u32 segments, const u8 *signature, u32 valuesPerVertex, u32 vertexSize);

/* Allocates the strip block of `bytes` bytes, recording the allocation site first. */
static ThunderBlock *allocStripBlock(u32 bytes)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effPolygonThunder.cpp", 1181);
    return static_cast<ThunderBlock *>(memAlloc(0x10000, 0x100, 0, bytes, 0x10, 1));
}

ThunderBlock *FUN_003cae90(ThunderParams *params)
{
    u32 stripCount = params->strips;
    ThunderBlock *block = allocStripBlock(stripCount * sizeof(ThunderEntry) + 4);
    block->entries = block->storage;

    u32 segments = params->segments;
    segments = segments > 3 ? segments : 3;
    params->segments = segments;
    if ((segments & 1) == 0) {
        segments++;
        params->segments = segments;
    }

    u32 color0 = params->color0;
    u32 color1 = params->color1;
    u32 color2 = params->color2;
    s32 spanCells = params->segments + 1;
    u32 rgb0 = color0 & 0xFFFFFF;
    u32 rgb1 = color1 & 0xFFFFFF;
    u32 rgb2 = color2 & 0xFFFFFF;
    s32 fadeInEnd = (s32)(params->fadeIn * (f32)spanCells);
    s32 fadeOutStart = (s32)(params->fadeOut * (f32)spanCells);
    f32 envelope = stripCount != 0 ? 1.0f : 0.0f;

    ThunderEntry *entry = block->entries;
    for (u32 strip = 0; strip < stripCount; strip++) {
        ThunderStrip *bolt = FUN_00350d90((u16)params->segments, DAT_005c1eec, 5, 0x48);
        entry->strip = bolt;
        u32 vertexCount = bolt->vertexValues / 5;
        ThunderVertex *vertex = bolt->buffer->vertices;
        for (u32 i = 0; i < vertexCount; i++) {
            if (i == 0 || (i & 1) != 0) {
                if ((s32)i < fadeInEnd)
                    envelope = (f32)i / (f32)fadeInEnd;
                else if ((s32)i <= fadeOutStart)
                    envelope = 1.0f;
                else
                    envelope = (f32)(vertexCount - i - 1) / (f32)(vertexCount - fadeOutStart);
            }
            packedColorBytesSet(&vertex->color0, rgb0 | ((u32)((f32)(color0 >> 24) * envelope) << 24));
            packedColorBytesSet(&vertex->color1, rgb1 | ((u32)((f32)(color1 >> 24) * envelope) << 24));
            packedColorBytesSet(&vertex->color2, rgb2 | ((u32)((f32)(color2 >> 24) * envelope) << 24));
            vertex->copy1 = vertex->color1;
            vertex->copy0 = vertex->color0;
            vertex++;
        }
        entry->marker = (s32)(strip * -4) - 1;
        entry++;
    }
    return block;
}

} /* extern "C" */
