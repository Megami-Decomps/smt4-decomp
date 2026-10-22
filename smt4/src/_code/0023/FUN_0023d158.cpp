/* NON_MATCHING: Retail strb r0, [sp, #88] differs from recovered strb r0, [sp, #124]. */
#include "common.h"

// Private views of the source settings and the SDK texture command object.
struct TextureSettingsView {
    u8 unk00[0x14]; // +0x00
    u32 unk14;      // +0x14
    u32 unk18;      // +0x18
    u8 unk1C[0x14]; // +0x1C
    u32 unk30;      // +0x30
    u32 unk34;      // +0x34
    u32 unk38;      // +0x38
    s32 unk3C;      // +0x3C
    s32 unk40;      // +0x40
};

struct TextureCommandView {
    u32 unk00;      // +0x00
    u16 unk04;      // +0x04
    u16 unk06;      // +0x06
    u8 unk08;       // +0x08
    u8 unk09;       // +0x09
    u8 unk0A;       // +0x0A
    u8 unk0B;       // +0x0B
    u8 unk0C;       // +0x0C
    u8 unk0D[0x0F]; // +0x0D
    u8 unk1C;       // +0x1C
    u8 unk1D[0x3B]; // +0x1D
    u8 unk58;       // +0x58
    u8 unk59[0x23]; // +0x59
    u8 unk7C;       // +0x7C
    u8 unk7D[0x23]; // +0x7D
    u8 unkA0;       // +0xA0
    u8 unkA1[7];    // +0xA1
};

extern "C" void nn_gr_CTR_Texture_Texture_sub_object(TextureCommandView *texture);
extern "C" u32 *nn_gr_CTR_Texture_MakeCommand(
    const TextureCommandView *texture, u32 *commands, bool update);

// Configure a texture command object from the supplied settings and emit its commands.
extern "C" u32 *FUN_0023d158(u32 *commands, const TextureSettingsView *settings)
{
    TextureCommandView texture;
    nn_gr_CTR_Texture_Texture_sub_object(&texture);
    texture.unk1C = 0;
    texture.unk00 = settings->unk30;
    texture.unk04 = static_cast<u16>(settings->unk14);
    texture.unk06 = static_cast<u16>(settings->unk18);
    texture.unk08 = static_cast<u8>(settings->unk34);
    texture.unk09 = static_cast<u8>(settings->unk38);
    texture.unk0A = static_cast<u8>(settings->unk38);
    texture.unk0B = settings->unk40 != 0;
    texture.unk58 = 0;
    texture.unk7C = 0;
    texture.unk0C = settings->unk3C != 0 ? 3 : 0;
    texture.unkA0 = 0;
    return nn_gr_CTR_Texture_MakeCommand(&texture, commands, true);
}
