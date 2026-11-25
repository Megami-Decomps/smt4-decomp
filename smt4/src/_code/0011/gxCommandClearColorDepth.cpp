/* NON_MATCHING: the code matches retail's except the register allocation: retail keeps the colour width in r4
 * and the depth width in r6 (the build swaps them), multiplies red into s5 (the build blue), and moves the depth
 * value's bits into a core register after the sign test rather than at entry. */
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include "shard/W6_W6Match8_GpuDepth.h"

extern "C" {
void asdGxCommandBufferTerminateAndSubmit();
void asdGfxCmdBufferForward8(u32, u32, u32, u32, u32, u32, u32, u32);

/* Fills the colour and depth buffers the clear mask selects (bit 0 colour, bits 1-2 depth and stencil) with the
 * clear colour (RGBA8) and the 24-bit depth plus 8-bit stencil, optionally submitting the pending commands first. */
void gxCommandClearColorDepth(AsdGxRenderBuffer *color, AsdGxRenderBuffer *depth, u32 stencil, u32 clearMask,
                  s32 synchronize, f32 red, f32 green, f32 blue, f32 alpha, f32 depthValue)
{
    u32 colorBits, depthBits;
    colorBits = depthBits = 32;
    u32 colorFormat = color->format;
    u32 colorAddress = color->buffer;
    u32 colorBytes = color->bytes;
    u32 depthFormat = depth->format;
    u32 depthAddress = depth->buffer;
    u32 depthBytes = depth->bytes;
    u32 packedDepth = gpuDepthEncodeUnorm24(depthValue);
    packedDepth |= stencil << 24;
    u32 redByte = (u32)(red * 255.0f);
    u32 greenByte = (u32)(green * 255.0f);
    u32 blueByte = (u32)(blue * 255.0f);
    u32 alphaByte = (u32)(alpha * 255.0f);
    u32 packedColor = (redByte << 24) | (greenByte << 16) | (blueByte << 8) | alphaByte;
    switch (colorFormat) {
    case 0x8056: /* GL_RGBA4 */
    case 0x8057: /* GL_RGB5_A1 */
    case 0x8D62: /* GL_RGB565 */
        colorBits = 16;
        break;
    case 0x8058: /* GL_RGBA8 */
        break;
    }
    if (depthFormat == 0x81A5) /* GL_DEPTH_COMPONENT16 */
        depthBits = 16;
    if (!(clearMask & 1))
        colorAddress = 0;
    if (!(clearMask & 6))
        depthAddress = 0;
    if (synchronize)
        asdGxCommandBufferTerminateAndSubmit();
    asdGfxCmdBufferForward8(colorAddress, colorBytes, packedColor, colorBits,
                           depthAddress, depthBytes, packedDepth, depthBits);
}
} /* extern "C" */
