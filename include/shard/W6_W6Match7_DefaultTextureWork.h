#ifndef SHARD_W6_W6MATCH7_DEFAULTTEXTUREWORK_H
#define SHARD_W6_W6MATCH7_DEFAULTTEXTUREWORK_H

#include "common.h"

struct DefaultTextureStorage {
    u8 data[0x44];
};

struct DefaultTextureDescription {
    u8 unk00[0x2c];
    u32 storageFormat;
    u8 unk30[4];
};

struct DefaultTexture2D {
    DefaultTextureDescription description;
    DefaultTextureStorage storage;
};

struct DefaultTextureCube {
    DefaultTextureDescription description;
    DefaultTextureStorage faces[6];
};

struct DefaultTextureScratch {
    u32 unk00;
    u8 unk04[0x98];
};

struct DefaultTextureWork {
    DefaultTexture2D *texture2D;
    DefaultTextureCube *cube;
    DefaultTextureScratch *scratch;
    u8 unk0c[0x8a0];
};

struct DefaultTextureGlobals {
    DefaultTextureWork *work;
    u32 initializationFlag;
};

typedef void *DriverTextureAllocate(u32 heap, u32 alignment, u32 flags, u32 size);
typedef void DriverTextureRelease(u32 heap, u32 alignment, u32 flags, void *block);

extern "C" {
s32 gfxDefaultTexturesInitialize(DefaultTextureWork *work);
s32 gfxDefaultTexturesInitialize(DefaultTextureWork *work);
}

#endif
