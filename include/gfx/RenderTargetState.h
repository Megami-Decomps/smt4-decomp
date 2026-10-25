#ifndef GFX_RENDERTARGETSTATE_H
#define GFX_RENDERTARGETSTATE_H

#include "common.h"
#include <stddef.h>

struct RenderTargetBinding {
    /* 0x00 */ u32 mode;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 buffers[3];
    /* 0x14 */ s32 index;
    /* 0x18 */ u8 unk18[0x14];
};
struct RenderTargetFramebuffer {
    union {
        /* 0x00 */ u8 colorBuffer[0x18];
        struct {
            u8 unk00[8];
            /* 0x08 */ u32 buffer;
        } color;
    };
    /* 0x18 */ u8 depthBuffer[0x18];
    /* 0x30 */ s32 width;
    /* 0x34 */ s32 height;
    /* 0x38 */ u32 format;
};
/* View extends beyond AsdGxPresets; it does not alter that shared layout. */
struct RenderTargetSystemView {
    /* 0x000 */ RenderTargetBinding bindings[3];
    /* 0x084 */ s32 sharePrimaryFramebuffer;
    /* 0x088 */ RenderTargetFramebuffer framebuffers[3];
    /* 0x13C */ u8 unk13C[0x30];
    /* 0x16C */ RenderTargetBinding *selectedBinding;
    /* 0x170 */ RenderTargetFramebuffer *selectedFramebuffer;
    union {
        /* 0x174 */ u8 unk174[0x80];
        struct {
            /* 0x174 */ f32 color[3][4];
            /* 0x1A4 */ f32 depth[3];
            /* 0x1B0 */ u32 mask[3];
        } clear;
    };
    /* 0x1F4 */ s32 bindingEnabled;
    union {
        /* 0x1F8 */ u8 unk1F8[8];
        struct {
            /* 0x1F8 */ u32 format;
        } copy;
    };
    /* 0x200 */ u8 fullResolution[2];
};
typedef char RenderTargetBindingSizeCheck[sizeof(RenderTargetBinding) == 0x2C ? 1 : -1];
typedef char RenderTargetFramebufferLayoutCheck[
    sizeof(RenderTargetFramebuffer) == 0x3C &&
    offsetof(RenderTargetFramebuffer, width) == 0x30 ? 1 : -1];
typedef char RenderTargetSystemViewLayoutCheck[
    offsetof(RenderTargetSystemView, framebuffers) == 0x88 &&
    offsetof(RenderTargetSystemView, selectedBinding) == 0x16C &&
    offsetof(RenderTargetSystemView, selectedFramebuffer) == 0x170 &&
    offsetof(RenderTargetSystemView, bindingEnabled) == 0x1F4 &&
    offsetof(RenderTargetSystemView, fullResolution) == 0x200 ? 1 : -1];
typedef char RenderTargetCopyOffsetsCheck[
    offsetof(RenderTargetFramebuffer, color.buffer) == 8 &&
    offsetof(RenderTargetSystemView, copy.format) == 0x1F8 &&
    sizeof(RenderTargetSystemView) == 0x204 ? 1 : -1];
typedef char RenderTargetClearOffsetsCheck[
    offsetof(RenderTargetSystemView, clear.color) == 0x174 &&
    offsetof(RenderTargetSystemView, clear.depth) == 0x1A4 &&
    offsetof(RenderTargetSystemView, clear.mask) == 0x1B0 ? 1 : -1];

#endif
