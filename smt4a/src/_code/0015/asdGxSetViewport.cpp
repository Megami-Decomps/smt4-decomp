/* NON_MATCHING: inverse-extent encodes now match (gpuViewportEncodeInverse); remaining: retail derives the command-header constants arithmetically (orr/add from two loaded words) and issues the stores as post-increment + writeback/strd mix, and converts width before height */
#include "gfx/ViewportEncoding.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"


static __inline u32 encodeInverseExtent(f32 value)
{
    GpuFloatEncoding encoding;
    encoding.value = value;
    s32 exponent = encoding.bits & 0x7FFFFFFF;
    u32 fraction;
    if (exponent != 0) {
        fraction = encoding.ieee.fraction;
        exponent = ((encoding.bits >> 23) & 0xFF) - 64;
        if (exponent < 0) {
            return encoding.ieee.sign << 30;
        }
    } else {
        fraction = encoding.ieee.fraction;
    }
    return fraction | (static_cast<u32>(exponent) << 23) | (encoding.ieee.sign << 30);
}

extern "C" {
void asdModelCommitCommandRange(u32* begin, u32* end);

void asdGxSetViewport(u32 x, s32 y, s32 width, s32 height)
{
    f32 widthValue = static_cast<f32>(width);
    f32 heightValue = static_cast<f32>(height);
    u32 halfWidth = gpuViewportEncode<16>(widthValue * 0.5f);
    u32 inverseWidth = encodeInverseExtent(2.0f / widthValue) << 1;
    u32 halfHeight = gpuViewportEncode<16>(heightValue * 0.5f);
    u32 inverseHeight = encodeInverseExtent(2.0f / heightValue) << 1;
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
