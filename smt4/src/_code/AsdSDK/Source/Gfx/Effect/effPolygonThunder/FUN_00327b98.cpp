/* NON_MATCHING: builds the lightning strips of a polygon thunder effect (one strip per bolt, vertex colours fading in and out along the bolt); written from the decompilation and the retail disassembly, float conversions and the vertex store layout not compared with retail */
#include "AsdSDK/AsdDebug.h"

/* Packed vertex colour data of one strip vertex: three RGBA colours and two copies. */
struct ThunderVertex {
    /* 0x00 */ u8 color0[4];
    /* 0x04 */ u8 color1[4];
    /* 0x08 */ u8 color2[4];
    /* 0x0C */ u32 copy1;
    /* 0x10 */ u32 copy0;
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
extern u8 DAT_0047372c[];

void *memAlloc(u32 pool, u32 category, u32 flags, u32 size, u32 alignment, u32 zero);
ThunderStrip *FUN_0024505c(u32 segments, const u8 *signature, u32 valuesPerVertex, u32 vertexSize);

/* Writes the colour (rgb of `rgb`, alpha scaled by `envelope`) into a vertex colour. */
static __inline void thunderColor(u8 *out, u32 rgb, u32 argb, f32 envelope)
{
    out[0] = (u8)rgb;
    out[1] = (u8)(rgb >> 8);
    out[2] = (u8)(rgb >> 16);
    out[3] = (u8)(u32)((f32)(argb >> 24) * envelope);
}

ThunderBlock *FUN_00327b98(ThunderParams *params)
{
    u32 stripCount = params->strips;
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Effect\\effPolygonThunder.cpp", 1181);
    ThunderBlock *block = static_cast<ThunderBlock *>(memAlloc(0x10000, 0x100, 0, stripCount * sizeof(ThunderEntry) + 4, 0x10, 1));
    block->entries = block->storage;

    if (params->segments < 4)
        params->segments = 3;
    if ((params->segments & 1) == 0)
        params->segments++;

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
        ThunderStrip *bolt = FUN_0024505c(params->segments, DAT_0047372c, 5, 0x48);
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
            thunderColor(vertex->color0, rgb0, color0, envelope);
            thunderColor(vertex->color1, rgb1, color1, envelope);
            thunderColor(vertex->color2, rgb2, color2, envelope);
            vertex->copy1 = *reinterpret_cast<u32 *>(vertex->color1);
            vertex->copy0 = *reinterpret_cast<u32 *>(vertex->color0);
            vertex++;
        }
        entry->marker = (s32)(strip * -4) - 1;
        entry++;
    }
    return block;
}

} /* extern "C" */
