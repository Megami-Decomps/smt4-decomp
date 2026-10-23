/* NON_MATCHING: framebuffer-class selectors and full-resolution tests merge differently, changing control flow and register allocation. */
#include "gfx/RenderTargetState.h"
#include "shard/JobWork.h"

extern "C" {
extern RenderTargetSystemView g_asdGxPresets;
extern s8 DAT_0063ff88[2]; /* Full-resolution enable flags for the two framebuffer classes. */
void FUN_0017d294(void);
void FUN_0017ced4(u32 source, u32 sourceStride, u32 sourceGap, u32 destination,
                 u32 destinationStride, s32 destinationGap, u32 bytes);

/* Copy a framebuffer into a tiled surface, reducing alternate-width output if needed. */
s32 FUN_00154edc(u32 target, JobSurface *destination)
{
    RenderTargetFramebuffer *framebuffer = 0;
    if (target == 0 || target == 1)
        framebuffer = &g_asdGxPresets.framebuffers[0];
    else if (target == 2)
        framebuffer = &g_asdGxPresets.framebuffers[2];

    s32 halfWidth = 0;
    if (!(((target == 0 || target == 1) && g_asdGxPresets.framebuffers[0].format == 0x500) ||
          (target == 2 && g_asdGxPresets.framebuffers[2].format == 0x500)) &&
        !(((target == 0 || target == 1) && DAT_0063ff88[0] != 0) ||
          (target == 2 && DAT_0063ff88[1] != 0)))
        halfWidth = 1;

    u32 width = framebuffer->width;
    s32 height = framebuffer->height;
    s32 bytesPerPixel = 2;
    if (g_asdGxPresets.copy.format == 0x8058)
        bytesPerPixel = 4;
    s32 destinationRowBytes = (destination->width / 8) * bytesPerPixel * 64;
    FUN_0017d294();
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
