/* NON_MATCHING: retail pools 0x88F0 as its own literal (the build derives it from 0x8CE0) and groups the attachment stores into other stm runs. */
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

/* One framebuffer attachment: its size, kind, format and antialiasing mode. */
struct GxAttachmentDesc {
    /* 0x00 */ s32 width;
    /* 0x04 */ s32 height;
    /* 0x08 */ u32 kind;
    /* 0x0C */ u32 attachment;
    /* 0x10 */ u32 antialias;
};

struct GxFramebufferDesc {
    /* 0x00 */ u32 colorFormat;
    /* 0x04 */ GxAttachmentDesc color;
    /* 0x18 */ u32 depthFormat;
    /* 0x1C */ GxAttachmentDesc depth;
};

extern "C" {
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

/* Returns the framebuffer description (color and depth-stencil attachments) for a screen. */
GxFramebufferDesc gxMakeScreenFramebufferDesc(s32 screen, u32 antialias)
{
    GxFramebufferDesc desc;

    desc.colorFormat = g_asdGxPresets.colorFormat;
    gxScreenBufferSize(screen, antialias, &desc.color.width, &desc.color.height);
    desc.color.kind = 0x20000;
    desc.color.attachment = 0x8CE0; /* GL_COLOR_ATTACHMENT0 */
    desc.color.antialias = antialias;
    desc.depthFormat = 0x88F0; /* GL_DEPTH24_STENCIL8 */
    gxScreenBufferSize(screen, antialias, &desc.depth.width, &desc.depth.height);
    desc.depth.kind = 0x30000;
    desc.depth.attachment = 0x821A; /* GL_DEPTH_STENCIL_ATTACHMENT */
    desc.depth.antialias = antialias;
    return desc;
}

} /* extern "C" */
