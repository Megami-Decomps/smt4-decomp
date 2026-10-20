/* nn::gr clear-buffer helpers: the render target pieces they read. */
#ifndef S2_GR_CLEAR_H
#define S2_GR_CLEAR_H

#include "common.h"

typedef struct GrSurface GrSurface;
typedef struct GrBufferSet GrBufferSet;
typedef struct GrRenderTarget GrRenderTarget;

/* A colour or depth buffer. */
struct GrSurface {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 width;
    /* 0x08 */ u32 height;
    /* 0x0c */ s32 format;    /* GL-style format enum */
    /* 0x10 */ s32 depthFormat; /* GL-style depth format enum */
    /* 0x14 */ u32 address;   /* start of the buffer */
    /* 0x18 */ u32 depthAddress; /* start of the depth buffer, 0 if there is none */
};

typedef struct GrBufferSetVtbl {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ GrSurface *(*getSurface)(GrBufferSet *set);
} GrBufferSetVtbl;

struct GrBufferSet {
    /* 0x00 */ const GrBufferSetVtbl *vtbl;
};

struct GrRenderTarget {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ GrBufferSet *buffers;
};

/* Which parts of a render target a clear touches. */
#define GR_CLEAR_COLOR 0x4000
#define GR_CLEAR_DEPTH 0x100

#endif
