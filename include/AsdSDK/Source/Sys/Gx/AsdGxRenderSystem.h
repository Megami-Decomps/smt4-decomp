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

/* A display buffer ring (0x2C bytes): the nngx display buffers one screen cycles through. */
typedef struct AsdGxDisplayBuffers {
    /* 0x00 */ u32 mode;               /* the nngx display: 0x400 top, 0x410 top right eye, 0x401 bottom */
    /* 0x04 */ u32 count;              /* buffers in the ring */
    /* 0x08 */ u32 buffers[3];         /* nngx display buffer ids */
    /* 0x14 */ s32 index;              /* the buffer drawn next */
    /* 0x18 */ u32 width;
    /* 0x1C */ u32 height;
    /* 0x20 */ u32 addresses[3];       /* the buffers' physical addresses */
} AsdGxDisplayBuffers;

/* One render buffer of a framebuffer (0x18 bytes). */
typedef struct AsdGxRenderBuffer {
    /* 0x00 */ u32 format;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 buffer;             /* the nngx render buffer */
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 typeSelector;       /* 0: unsigned short, 2: unsigned int */
} AsdGxRenderBuffer;

/* A framebuffer (0x3C bytes): color and depth buffers, size and mode. */
typedef struct AsdGxFramebuffer {
    /* 0x00 */ AsdGxRenderBuffer color;
    /* 0x18 */ AsdGxRenderBuffer depth;
    /* 0x30 */ s32 width;
    /* 0x34 */ s32 height;
    /* 0x38 */ u32 mode;               /* antialias mode 0x500..0x502; 0x500 also means no output */
} AsdGxFramebuffer;

/* A clear color: the color is passed by value apart from its alpha. */
typedef struct AsdGxColor3 {
    f32 red, green, blue;
} AsdGxColor3;
typedef struct AsdGxClearColor {
    /* 0x0 */ AsdGxColor3 rgb;
    /* 0xC */ f32 alpha;
} AsdGxClearColor;

/* The render system's screen state (g_asdGxPresets): a display buffer ring and a framebuffer for
 * each of the three screen targets (0: top left, 1: top right, 2: bottom), the command lists,
 * the selected target, clear values and the stereo mode. */
typedef struct AsdGxPresets {
    /* 0x000 */ AsdGxDisplayBuffers displays[3];
    /* 0x084 */ s32 sharePrimaryFramebuffer;  /* the bottom target draws into framebuffer 0 */
    /* 0x088 */ AsdGxFramebuffer framebuffers[3];
    /* 0x13C */ u8 commandLists[0x14];
    /* 0x150 */ s32 currentList;
    /* 0x154 */ u8 unk154[0x18];
    /* 0x16C */ AsdGxDisplayBuffers *selectedDisplay;
    /* 0x170 */ AsdGxFramebuffer *selectedFramebuffer;
    /* 0x174 */ AsdGxClearColor clearColors[3];
    /* 0x1A4 */ f32 clearDepths[3];
    /* 0x1B0 */ u32 clearStencils[3];
    /* 0x1BC */ u32 elapsedFrames;          /* vertical blanks since the last frame was submitted */
    /* 0x1C0 */ s32 interval;
    /* 0x1C4 */ f32 frameTime;              /* microseconds per frame at the current interval */
    /* 0x1C8 */ s32 stereoMode;             /* 1: stereoscopic 3D */
    /* 0x1CC */ s32 pendingStereoMode;
    /* 0x1D0 */ u8 forceBlackCleared;
    /* 0x1D1 */ u8 unk1D1[0x23];
    /* 0x1F4 */ s32 displayMode;            /* 1: the display buffers are not bound (suspended) */
    /* 0x1F8 */ u32 colorFormat;            /* GL format of the color buffers (0x8058: RGBA8) */
    /* 0x1FC */ u32 parameter;
    /* 0x200 */ u8 fullResolution[2];       /* per screen: keep the antialiased size; 0 forces mode 0x500 on bind */
    /* 0x202 */ u8 pad202[2];
} AsdGxPresets;

typedef char AsdGxPresetsOffsets[
    sizeof(AsdGxDisplayBuffers) == 0x2C && sizeof(AsdGxFramebuffer) == 0x3C &&
    offsetof(AsdGxPresets, sharePrimaryFramebuffer) == 0x84 &&
    offsetof(AsdGxPresets, framebuffers) == 0x88 &&
    offsetof(AsdGxPresets, commandLists) == 0x13C &&
    offsetof(AsdGxPresets, selectedDisplay) == 0x16C &&
    offsetof(AsdGxPresets, clearColors) == 0x174 &&
    offsetof(AsdGxPresets, clearDepths) == 0x1A4 &&
    offsetof(AsdGxPresets, elapsedFrames) == 0x1BC &&
    offsetof(AsdGxPresets, stereoMode) == 0x1C8 &&
    offsetof(AsdGxPresets, forceBlackCleared) == 0x1D0 &&
    offsetof(AsdGxPresets, displayMode) == 0x1F4 &&
    offsetof(AsdGxPresets, colorFormat) == 0x1F8 &&
    offsetof(AsdGxPresets, fullResolution) == 0x200 &&
    sizeof(AsdGxPresets) == 0x204 ? 1 : -1];

extern "C" {
extern AsdGxPresets g_asdGxPresets;
}

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

extern "C" {
s32 textureGetIndexedResource(u32 index);
}

#endif
