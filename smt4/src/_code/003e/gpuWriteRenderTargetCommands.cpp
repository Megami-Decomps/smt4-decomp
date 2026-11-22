/* NON_MATCHING: 101 lines. The command words are aggregate-initialised with the headers built by a helper, so
 * armcc copies the {1, 0, 1, 0, ...} template (DAT_0040b8b8) with VFP moves and stores the rest, as in retail; the
 * format choices are switches. Remaining: which header constant armcc materialises first (retail 0xF0111, the others
 * derived from it), stores merged into stm here, and two linker-removed calls after the 16-word copy in retail. */
#include "common.h"

#define GL_DEPTH_FORMAT_A 0x81A5
#define GL_DEPTH_FORMAT_B 0x81A6
#define GL_DEPTH_FORMAT_C 0x88F0

/* The render target description handed to the GPU command writer. */
struct RenderTarget {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 width;
    /* 0x08 */ u32 height;
    /* 0x0C */ s32 colorFormat;
    /* 0x10 */ s32 depthFormat;
    /* 0x14 */ u32 colorAddress;
    /* 0x18 */ u32 depthAddress;
    /* 0x1C */ u8 blockMode;
};


/* A GPU command header: register `id`, byte-enable mask `mask`, `extra` further parameter words and bit 31 for
 * writing them to consecutive registers. */
static __inline u32 gpuCommandHeader(u32 id, u32 mask, u32 extra, u32 consecutive)
{
    return id | (mask << 16) | (extra << 20) | (consecutive << 31);
}

extern "C" {
extern u32 *g_commandBufferCursor;

u32 osVirtToPhysAddress(u32 address);
u32 *nw_gfx_internal_FastWordCopyAsm_14(u32 *destination, const u32 *source);
u32 *nw_gfx_internal_FastWordCopyAsm_16(u32 *destination, const u32 *source);

/* Writes the colour/depth buffer setup commands for a render target into the command buffer. */
void gpuWriteRenderTargetCommands(RenderTarget *target)
{
    u32 depthMode = 0;
    u32 colorMode = 0;

    switch (target->depthFormat) {
    case GL_DEPTH_FORMAT_A:
        break;
    case GL_DEPTH_FORMAT_B:
        depthMode = 2;
        break;
    case GL_DEPTH_FORMAT_C:
        depthMode = 3;
        break;
    }
    switch (target->colorFormat) {
    case 0x8057:
        colorMode = 0x20000;
        break;
    case 0x6050:
        colorMode = 2;
        break;
    case 0x8056:
        colorMode = 0x40000;
        break;
    case 0x8058:
        colorMode = 2;
        break;
    case 0x8D62:
        colorMode = 0x30000;
        break;
    }

    if (target->depthAddress == 0) {
        u32 cmd[14] = {
            1, gpuCommandHeader(0x111, 0xF, 0, 0),
            1, gpuCommandHeader(0x110, 0xF, 0, 0),
            colorMode, gpuCommandHeader(0x117, 0xF, 0, 0),
            target->colorAddress != 0 ? osVirtToPhysAddress(target->colorAddress) >> 3 : 0, gpuCommandHeader(0x11D, 0xF, 0, 0),
            (target->width << 12) - 0x1000 | 0x1000000 | target->height, gpuCommandHeader(0x11E, 0xF, 0, 0),
            target->height | ((target->width << 12) - 0x1000) | 0x1000000, gpuCommandHeader(0x06E, 0xF, 0, 0),
            target->blockMode != 0, gpuCommandHeader(0x11B, 0xF, 0, 0),
        };
        g_commandBufferCursor = nw_gfx_internal_FastWordCopyAsm_14(g_commandBufferCursor, cmd);
    } else {
        u32 cmd[16] = {
            1, gpuCommandHeader(0x111, 0xF, 0, 0),
            1, gpuCommandHeader(0x110, 0xF, 0, 0),
            target->depthAddress != 0 ? osVirtToPhysAddress(target->depthAddress) >> 3 : 0, gpuCommandHeader(0x11C, 0xF, 2, 1),
            target->colorAddress != 0 ? osVirtToPhysAddress(target->colorAddress) >> 3 : 0,
            target->height | ((target->width << 12) - 0x1000) | 0x1000000,
            target->height | ((target->width << 12) - 0x1000) | 0x1000000, gpuCommandHeader(0x06E, 0xF, 0, 0),
            depthMode, gpuCommandHeader(0x116, 0xF, 0, 0),
            colorMode, gpuCommandHeader(0x117, 0xF, 0, 0),
            target->blockMode != 0, gpuCommandHeader(0x11B, 0xF, 0, 0),
        };
        g_commandBufferCursor = nw_gfx_internal_FastWordCopyAsm_16(g_commandBufferCursor, cmd);
    }
}

} /* extern "C" */
