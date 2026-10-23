#ifndef SHARD_W6_W6MATCH7_MATERIALTEXTURES_H
#define SHARD_W6_W6MATCH7_MATERIALTEXTURES_H

#include "common.h"
#include <stddef.h>

struct NamedModelTexture {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 format;
    /* 0x19 */ u8 mipCount;
    /* 0x1a */ u8 unk1a[2];
    /* 0x1c */ const char* name;
};

struct MaterialTextureSampler {
    /* 0x00 */ u8 targetMode;
    /* 0x01 */ u8 wrapT;
    /* 0x02 */ u8 wrapS;
    /* 0x03 */ u8 filter;
    /* 0x04 */ u8 filterType;
    /* 0x05 */ u8 lodMin;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ f32 lodBias;
    /* 0x0c */ u8 borderColor[4];
};

struct MaterialTextureCommands {
    u32* data;
    u32 size;
};

struct MaterialTextureBinding {
    /* 0x00 */ void* material;
    /* 0x04 */ NamedModelTexture* texture0;
    /* 0x08 */ NamedModelTexture* texture1;
    /* 0x0c */ NamedModelTexture* texture2;
    /* 0x10 */ MaterialTextureCommands commands;
    /* 0x18 */ MaterialTextureSampler* samplers;
    /* 0x1c */ const char* textureNames[3];
    /* 0x28 */ u32 unk28;
};

// Prefix of the model resource used by its material bindings.
struct ModelTextureBindings {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ MaterialTextureBinding* bindings;
    /* 0x38 */ u16 bindingCount;
};

struct ModelTextureResourceTables {
    ModelTextureBindings **models; // 0x00
    u16 modelCount; // 0x04
    u8 unk06[0x1e];
    NamedModelTexture **textures; // 0x24
    u16 textureCount; // 0x28
};
struct ModelTextureResourceOwner {
    u8 unk00[0x3c];
    ModelTextureResourceTables *tables; // 0x3c
    u8 unk40[0x24];
    const u8 *originalCommands; // 0x64
    u8 unk68[0x14];
    u8 *replacementCommands; // 0x7c
};
typedef char MaterialTextureLayoutCheck[
    sizeof(NamedModelTexture) == 0x20 && offsetof(NamedModelTexture, name) == 0x1c &&
    sizeof(MaterialTextureSampler) == 0x10 && sizeof(MaterialTextureBinding) == 0x2c &&
    offsetof(MaterialTextureBinding, textureNames) == 0x1c &&
    offsetof(ModelTextureBindings, bindings) == 0x34 &&
    offsetof(ModelTextureBindings, bindingCount) == 0x38 &&
    offsetof(ModelTextureResourceTables, textures) == 0x24 &&
    offsetof(ModelTextureResourceTables, textureCount) == 0x28 &&
    offsetof(ModelTextureResourceOwner, tables) == 0x3c &&
    offsetof(ModelTextureResourceOwner, originalCommands) == 0x64 &&
    offsetof(ModelTextureResourceOwner, replacementCommands) == 0x7c ? 1 : -1];

extern "C" u32 gfxModelBindTextureByName(ModelTextureBindings* model, const char* name,
                           NamedModelTexture* texture, u8* replacementCommands,
                           const u8* originalCommands);

#endif
