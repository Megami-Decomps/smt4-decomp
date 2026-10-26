/* NON_MATCHING: the 16-bit half-extent encodes now match retail; the 23-bit inverse encodes extract the fraction before the zero test (retail extracts it per path), the float conversions land in swapped VFP registers, and the command-header constants are not folded like retail. */
#include "gfx/ViewportEncoding.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"

extern "C" {
void asdModelCommitCommandRange(u32* begin, u32* end);

void FUN_00154180(u32 x, s32 y, s32 width, s32 height)
{
    f32 widthValue = static_cast<f32>(width);
    f32 heightValue = static_cast<f32>(height);
    u32 halfWidth = gpuViewportEncode<16>(widthValue * 0.5f);
    u32 inverseWidth = gpuViewportEncode<23>(2.0f / widthValue) << 1;
    u32 halfHeight = gpuViewportEncode<16>(heightValue * 0.5f);
    u32 inverseHeight = gpuViewportEncode<23>(2.0f / heightValue) << 1;
    u32* begin = reinterpret_cast<u32 *>(asdGxGetCommandCursor());
    u32* cursor = begin;
    *cursor++ = halfWidth;
    *cursor++ = 0x70041;
    *cursor++ = inverseWidth;
    *cursor++ = 0xF0042;
    *cursor++ = halfHeight;
    *cursor++ = 0x70043;
    *cursor++ = inverseHeight;
    *cursor++ = 0xF0044;
    *cursor++ = x | (static_cast<u32>(y) << 16);
    *cursor++ = 0xF0068;
    asdModelCommitCommandRange(begin, cursor);
}
}
