/* NON_MATCHING: Retail ldr r0, [r4, #48] differs from recovered ldr r1, [r4, #48]. */
#include "common.h"

namespace {

struct TextureSourceView {
    u8 unk00[0x14];             // 0x00
    u32 unk14;                 // 0x14
    u32 unk18;                 // 0x18
    u8 unk1C[0x14];             // 0x1C
    u32 unk30;                 // 0x30
    u32 unk34;                 // 0x34
    u32 unk38;                 // 0x38
    u32 unk3C;                 // 0x3C
    u32 unk40;                 // 0x40
};

struct TextureView {
    u32 unk00;                 // 0x00
    u16 unk04;                 // 0x04
    u16 unk06;                 // 0x06
    u8 unk08;                  // 0x08
    u8 unk09;                  // 0x09
    u8 unk0A;                  // 0x0A
    u8 unk0B;                  // 0x0B
    u8 unk0C;                  // 0x0C
    u8 unk0D[0x0F];            // 0x0D
    u8 unk1C;                  // 0x1C
    u8 unk1D[0x3B];            // 0x1D
    u8 unk58;                  // 0x58
    u8 unk59[0x23];            // 0x59
    u8 unk7C;                  // 0x7C
    u8 unk7D[0x23];            // 0x7D
    u8 unkA0;                  // 0xA0
    u8 unkA1[0x0B];            // 0xA1
};

} // namespace

extern "C" void _ZN2nn2gr3CTR7TextureC1Ev(TextureView* texture);
extern "C" void texCommandListBuild(TextureView* texture, u32 commandList, u32 mode);

// Populate a temporary texture description and build its texture commands.
extern "C" void FUN_00421e9c(u32 commandList, const TextureSourceView* source)
{
    TextureView texture;
    _ZN2nn2gr3CTR7TextureC1Ev(&texture);
    texture.unk1C = 0;
    texture.unk00 = source->unk30;
    texture.unk04 = static_cast<u16>(source->unk14);
    texture.unk06 = static_cast<u16>(source->unk18);
    texture.unk08 = static_cast<u8>(source->unk34);
    texture.unk09 = static_cast<u8>(source->unk38);
    texture.unk0A = static_cast<u8>(source->unk38);
    texture.unk0B = source->unk40 != 0;
    texture.unk0C = source->unk3C != 0 ? 3 : 0;
    texture.unk58 = 0;
    texture.unk7C = 0;
    texture.unkA0 = 0;
    texCommandListBuild(&texture, commandList, 1);
}
