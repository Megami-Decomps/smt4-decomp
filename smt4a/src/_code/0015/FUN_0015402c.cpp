/* NON_MATCHING: surface field loads, floating-register allocation and format-switch block layout differ. */
#include "common.h"

struct ClearBufferSurface {
    u32 format;
    u32 unk04;
    u32 address;
    u32 unk0C;
    u32 size;
};
union ClearDepthBits { f32 value; u32 bits; };
extern "C" {
void FUN_0017dd84();
void asdGfxCmdBufferForward8(u32, u32, u32, u32, u32, u32, u32, u32);

void FUN_0015402c(ClearBufferSurface *color, ClearBufferSurface *depth,
                  f32 red, f32 green, f32 blue, f32 alpha, f32 depthValue,
                  u32 stencil, u32 clearMask, s32 synchronize)
{
    u32 colorBits = 32;
    u32 depthBits = 32;
    u32 colorAddress = color->address;
    u32 colorSize = color->size;
    u32 depthAddress = depth->address;
    u32 depthSize = depth->size;
    ClearDepthBits value;
    value.value = depthValue;
    u32 packedDepth;
    if (!(depthValue <= 0.0f || ((value.bits << 1) >> 24) == 255)) {
        value.value *= 16777216.0f;
        packedDepth = static_cast<s32>(value.bits) < 0x4B800000 ?
                      static_cast<u32>(value.value) : 0xFFFFFF;
    } else {
        packedDepth = 0;
    }
    u32 packedColor = (static_cast<u32>(red * 255.0f) << 24) |
                      (static_cast<u32>(green * 255.0f) << 16) |
                      (static_cast<u32>(blue * 255.0f) << 8) |
                      static_cast<u32>(alpha * 255.0f);
    switch (color->format) {
    case 0x8056:
    case 0x8057:
    case 0x8D62:
        colorBits = 16;
        break;
    }
    if (depth->format == 0x81A5)
        depthBits = 16;
    if (!(clearMask & 1))
        colorAddress = 0;
    if (!(clearMask & 6))
        depthAddress = 0;
    if (synchronize)
        FUN_0017dd84();
    asdGfxCmdBufferForward8(colorAddress, colorSize, packedColor, colorBits,
                           depthAddress, depthSize, packedDepth | (stencil << 24), depthBits);
}
}
