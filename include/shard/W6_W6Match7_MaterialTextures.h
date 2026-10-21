#ifndef SHARD_W6_W6MATCH7_MATERIALTEXTURES_H
#define SHARD_W6_W6MATCH7_MATERIALTEXTURES_H

#include "common.h"

struct ModelTextureBindings;
struct NamedModelTexture;

extern "C" u32 gfxModelBindTextureByName(ModelTextureBindings* model, const char* name,
                           NamedModelTexture* texture, u8* replacementCommands,
                           const u8* originalCommands);

#endif
