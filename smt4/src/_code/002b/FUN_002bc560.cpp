/* NON_MATCHING: store scheduling and literal-pool order differ (retail keeps one more callee-saved register and groups the stores with stm). */
#include "common.h"

/* One framebuffer attachment: its size, kind, format and antialiasing mode. */
struct GxAttachmentDesc {
    /* 0x00 */ s32 width;
    /* 0x04 */ s32 height;
    /* 0x08 */ u32 kind;
    /* 0x0C */ u32 attachment;
    /* 0x10 */ u32 antialias;
};

struct GxFramebufferDesc {
    /* 0x00 */ f32 scale;
    /* 0x04 */ GxAttachmentDesc color;
    /* 0x18 */ u32 depthFormat;
    /* 0x1C */ s32 depthWidth;
    /* 0x20 */ s32 depthHeight;
    /* 0x24 */ u32 depthKind;
    /* 0x28 */ u32 depthAttachment;
    /* 0x2C */ u32 depthAntialias;
};

struct GxPresets {
    /* 0x000 */ u8 unk000[0x1F8];
    /* 0x1F8 */ f32 scale;
};

extern "C" {

extern GxPresets g_asdGxPresets;

/* Size of a screen buffer: the upper screen (1) is twice as wide, and the antialias modes 0x501
 * (2x1) and 0x502 (2x2) scale it further. */
static __inline void gxScreenBufferSize(s32 screen, u32 antialias, s32 *width, s32 *height)
{
    s32 screenScale = screen == 1 ? 2 : 1;
    s32 xScale = 1;
    s32 yScale = 1;

    switch (antialias) {
    case 0x501:
        xScale = 2;
        break;
    case 0x502:
        xScale = 2;
        yScale = 2;
        break;
    }
    *width = screenScale * xScale * 240;
    *height = yScale * 400;
}

/* Fills the framebuffer description (color and depth-stencil attachments) for a screen. */
void FUN_002bc560(GxFramebufferDesc *desc, s32 screen, u32 antialias)
{
    s32 colorWidth;
    s32 colorHeight;
    s32 depthWidth;
    s32 depthHeight;

    gxScreenBufferSize(screen, antialias, &colorWidth, &colorHeight);
    gxScreenBufferSize(screen, antialias, &depthWidth, &depthHeight);
    desc->scale = g_asdGxPresets.scale;
    desc->color.width = colorWidth;
    desc->color.antialias = antialias;
    desc->depthFormat = 0x88F0; /* GL_DEPTH24_STENCIL8 */
    desc->depthAntialias = antialias;
    desc->depthWidth = depthWidth;
    desc->depthHeight = depthHeight;
    desc->depthKind = 0x30000;
    desc->depthAttachment = 0x821A; /* GL_DEPTH_STENCIL_ATTACHMENT */
    desc->color.height = colorHeight;
    desc->color.kind = 0x20000;
    desc->color.attachment = 0x8CE0; /* GL_COLOR_ATTACHMENT0 */
}

} /* extern "C" */
