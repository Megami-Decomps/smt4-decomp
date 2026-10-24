/* NON_MATCHING: render-target command writer; the zero-initialised command words are copied from a rodata template with VFP moves in retail, built stores them differently */
#include "common.h"

/* GPUREG headers: consecutive-write commands (mask 0xF, id in the low half). */
#define GPUREG_DEPTHBUFFER_FORMAT   0x000F0116
#define GPUREG_RENDERBUF_DIM        0x000F011B
#define GPUREG_DEPTHBUFFER_ADDR     0x000F011D
#define GPUREG_COLORBUFFER_ADDR     0x000F011E
#define GPUREG_FRAMEBUFFER_FLUSH    0x000F006E

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

extern "C" {
extern u32 *g_commandBufferCursor;

u32 osVirtToPhysAddress(u32 address);
u32 *nw_gfx_internal_FastWordCopyAsm_14(u32 *destination, const u32 *source);
u32 *nw_gfx_internal_FastWordCopyAsm_16(u32 *destination, const u32 *source);

/* Writes the colour/depth buffer setup commands for a render target into the command buffer. */
void FUN_003e3494(RenderTarget *target)
{
    u32 depthMode = 0;
    u32 colorMode = 0;

    if (target->depthFormat != GL_DEPTH_FORMAT_A) {
        if (target->depthFormat == GL_DEPTH_FORMAT_B)
            depthMode = 2;
        else if (target->depthFormat == GL_DEPTH_FORMAT_C)
            depthMode = 3;
    }
    if (target->colorFormat == 0x8057) {
        colorMode = 0x20000;
    } else if (target->colorFormat < 0x8057) {
        if (target->colorFormat == 0x6050)
            colorMode = 2;
        else if (target->colorFormat == 0x8056)
            colorMode = 0x40000;
    } else if (target->colorFormat == 0x8058) {
        colorMode = 2;
    } else if (target->colorFormat == 0x8D62) {
        colorMode = 0x30000;
    }

    if (target->depthAddress != 0) {
        u32 cmd[16] = {1, 0, 1, 0};
        cmd[1] = 0x000F0111;
        cmd[3] = 0x000F0110;
        cmd[4] = target->depthAddress != 0 ? osVirtToPhysAddress(target->depthAddress) >> 3 : 0;
        cmd[5] = 0x802F011C;
        cmd[6] = target->colorAddress != 0 ? osVirtToPhysAddress(target->colorAddress) >> 3 : 0;
        cmd[7] = target->height | ((target->width << 12) - 0x1000) | 0x1000000;
        cmd[8] = target->height | ((target->width << 12) - 0x1000) | 0x1000000;
        cmd[9] = GPUREG_FRAMEBUFFER_FLUSH;
        cmd[10] = depthMode;
        cmd[11] = GPUREG_DEPTHBUFFER_FORMAT;
        cmd[12] = colorMode;
        cmd[13] = 0x000F0117;
        cmd[14] = target->blockMode != 0;
        cmd[15] = GPUREG_RENDERBUF_DIM;
        g_commandBufferCursor = nw_gfx_internal_FastWordCopyAsm_16(g_commandBufferCursor, cmd);
    } else {
        u32 cmd[14] = {1, 0, 1, 0};
        cmd[1] = 0x000F0111;
        cmd[3] = 0x000F0110;
        cmd[4] = colorMode;
        cmd[5] = 0x000F0117;
        cmd[6] = target->colorAddress != 0 ? osVirtToPhysAddress(target->colorAddress) >> 3 : 0;
        cmd[7] = GPUREG_DEPTHBUFFER_ADDR;
        cmd[8] = (target->width << 12) - 0x1000 | 0x1000000 | target->height;
        cmd[9] = GPUREG_COLORBUFFER_ADDR;
        cmd[10] = target->height | ((target->width << 12) - 0x1000) | 0x1000000;
        cmd[11] = GPUREG_FRAMEBUFFER_FLUSH;
        cmd[12] = target->blockMode != 0;
        cmd[13] = GPUREG_RENDERBUF_DIM;
        g_commandBufferCursor = nw_gfx_internal_FastWordCopyAsm_14(g_commandBufferCursor, cmd);
    }
}

} /* extern "C" */
