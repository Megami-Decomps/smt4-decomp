/* NON_MATCHING: the target getters' blocks now match retail; retail copies the target into r2 and builds the
 * framebuffer pointer in r0 before moving it to r5, so the registers differ from there on. */
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include "shard/JobWork.h"

extern "C" {
void asdGxCmdBufferFinalizeBlock(void);
void FUN_0017ced4(u32 source, u32 sourceStride, u32 sourceGap, u32 destination,
                 u32 destinationStride, s32 destinationGap, u32 bytes);

/* The screen target getters (0 and 1: top, 2: bottom): inline copies of stateValuesGetBySelector and
 * asdGxPresetsGetEnable, and the framebuffer they read. */
static __inline s32 gxTargetFullResolution(u32 selector)
{
    if (selector == 0 || selector == 1) {
        return (s8)g_asdGxPresets.fullResolution[0];
    }
    if (selector == 2) {
        return (s8)g_asdGxPresets.fullResolution[1];
    }
    return 0;
}

static __inline u32 gxTargetMode(u32 selector)
{
    if (selector == 0 || selector == 1) {
        return g_asdGxPresets.framebuffers[0].mode;
    }
    if (selector == 2) {
        return g_asdGxPresets.framebuffers[2].mode;
    }
    return 0;
}

static __inline AsdGxFramebuffer *gxTargetFramebuffer(u32 selector)
{
    AsdGxFramebuffer *framebuffer = NULL;
    if (selector == 0 || selector == 1) {
        framebuffer = &g_asdGxPresets.framebuffers[0];
    } else if (selector == 2) {
        framebuffer = &g_asdGxPresets.framebuffers[2];
    }
    return framebuffer;
}

/* Copy a framebuffer into a tiled surface, reducing alternate-width output if needed. */
s32 gxCopyFramebufferToSurface(u32 target, JobSurface *destination)
{
    AsdGxFramebuffer *framebuffer = gxTargetFramebuffer(target);

    s32 halfWidth = 0;
    if (gxTargetMode(target) != 0x500 && gxTargetFullResolution(target) == 0)
        halfWidth = 1;

    u32 width = framebuffer->width;
    s32 height = framebuffer->height;
    s32 bytesPerPixel = 2;
    if (g_asdGxPresets.colorFormat == 0x8058)
        bytesPerPixel = 4;
    s32 destinationRowBytes = (destination->width / 8) * bytesPerPixel * 64;
    asdGxCmdBufferFinalizeBlock();
    if (halfWidth) {
        width >>= 1;
        u32 rowBytes = (width >> 3) * bytesPerPixel * 64;
        FUN_0017ced4(framebuffer->color.buffer, rowBytes, rowBytes, destination->buffer,
                     rowBytes, destinationRowBytes - rowBytes, width * height * bytesPerPixel);
    } else {
        u32 rowBytes = (width >> 3) * bytesPerPixel * 64;
        FUN_0017ced4(framebuffer->color.buffer, rowBytes, 0, destination->buffer,
                     rowBytes, destinationRowBytes - rowBytes, width * height * bytesPerPixel);
    }
    return halfWidth;
}
}
