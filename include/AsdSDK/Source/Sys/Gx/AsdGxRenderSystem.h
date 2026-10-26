/* AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.cpp: GPU buffers and render targets (nngx, GL-style).
 *
 * Textures and index buffers are described by an AsdGxTexture (a GL-like object: target, size,
 * format, data type, and the heap its pixels live in), made from one of the presets in the
 * render system's table. Formats and types are the GL enums. */
#ifndef ASDSDK_SOURCE_SYS_GX_ASDGXRENDERSYSTEM_H
#define ASDSDK_SOURCE_SYS_GX_ASDGXRENDERSYSTEM_H

#include "common.h"
#include <stddef.h>
#include "AsdSDK/AsdMemAlloc.h"

#define ASD_GL_TEXTURE_2D 0xde1
#define ASD_GL_UNSIGNED_SHORT 0x1403
#define ASD_GL_UNSIGNED_INT 0x1405

/* One entry of the render system's preset table (0x78 bytes; only the fields the code reads). */
typedef struct AsdGxPreset {
    /* 0x00 */ u32 format;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08[0xc];
    /* 0x14 */ u32 typeSelector;   /* 0: unsigned short, 2: unsigned int */
    /* 0x18 */ u8 unk18[0x60];
} AsdGxPreset;

/* The render system's presets: two kinds follow an unknown prefix. */
typedef struct AsdGxPresets {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ AsdGxPreset small;  /* kinds 0 and 1 */
    /* 0x100 */ AsdGxPreset large; /* kind 2 */
} AsdGxPresets;

/* A GL-like texture or buffer object. */
typedef struct AsdGxTexture {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 target;         /* ASD_GL_TEXTURE_2D */
    /* 0x08 */ u32 location;       /* heap id (ASD_HEAP_*) the pixels live in */
    /* 0x0c */ u32 flags;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ s32 width;
    /* 0x18 */ s32 height;
    /* 0x1c */ u32 format;
    /* 0x20 */ u32 type;           /* GL data type */
    /* 0x24 */ void *pixels;
    /* 0x28 */ u32 byteSize;
    /* 0x2c */ u32 unk2c;
    /* 0x30 */ u32 handle;         /* the nngx object */
    /* 0x34 */ u32 unk34;
} AsdGxTexture;

struct AsdGxDrawCommand {
    /* 0x00 */ u32 target;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ u32 index;
    /* 0x18 */ u32 first;
    /* 0x1C */ u32 second;
    /* 0x20 */ u32 values[1];
};
typedef char AsdGxDrawCommandOffsetsCheck[
    offsetof(AsdGxDrawCommand, index) == 0x14 &&
    offsetof(AsdGxDrawCommand, first) == 0x18 &&
    offsetof(AsdGxDrawCommand, second) == 0x1C &&
    offsetof(AsdGxDrawCommand, values) == 0x20 ? 1 : -1];

extern "C" {
s32 textureGetIndexedResource(u32 index);
}

#endif
