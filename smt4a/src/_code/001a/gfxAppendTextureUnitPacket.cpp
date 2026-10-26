/* NON_MATCHING: same structure and row count as retail (single `destination` result, VFP + core copy of the packet); retail hoists the defaults literal above the push and keeps `destination` in r4 (four-register frame112, six-register ldm for the tail words), armcc uses three registers (frame116). */
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" void FUN_001b4128(const void*, u32, u32);

namespace {
struct TextureCommandPacket {
    u32 borderColor;
    u32 header;
    u32 dimensions;
    u32 parameters;
    u32 lod;
    u32 address;
    u32 cubeFaces[6];
    u32 format;
    u32 formatHeader;
};

struct TextureFormatFlags {
    u32 byFormat[14];
};
struct TextureCommandDefaults {
    TextureFormatFlags formatFlags;
    TextureCommandPacket packet;
};
}

extern "C" const TextureCommandDefaults g_textureUnitCommandDefaults;

/* Append the texture-unit packet, or submit it directly when no cursor is supplied. */
extern "C" u32* gfxAppendTextureUnitPacket(void*, u32* destination, const AsdTexture* texture)
{
    TextureCommandPacket packet;
    if (texture != NULL) {
        const TextureFormatFlags formatFlags = g_textureUnitCommandDefaults.formatFlags;
        packet = g_textureUnitCommandDefaults.packet;
        packet.dimensions = static_cast<u32>(texture->dimensions.height) |
            (static_cast<u32>(texture->dimensions.width) << 16);
        packet.parameters = (texture->unk38 << 12) | (texture->unk38 << 8) |
            (texture->unk3c << 2) | (texture->unk40 << 1) |
            formatFlags.byFormat[texture->image.hardwareFormat];
        packet.address = texture->image.physicalAddress >> 3;
        packet.format = texture->image.hardwareFormat;
        if (destination != NULL) {
            *reinterpret_cast<TextureCommandPacket*>(destination) = packet;
            destination += sizeof(packet) / sizeof(u32);
        } else {
            FUN_001b4128(&packet, sizeof(packet), 1);
        }
    } else {
        packet = TextureCommandPacket();
        if (destination != NULL) {
            *reinterpret_cast<TextureCommandPacket*>(destination) = packet;
            destination += sizeof(packet) / sizeof(u32);
        } else {
            FUN_001b4128(&packet, sizeof(packet), 1);
        }
    }
    return destination;
}
