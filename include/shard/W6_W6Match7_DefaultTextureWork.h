#ifndef SHARD_W6_W6MATCH7_DEFAULTTEXTUREWORK_H
#define SHARD_W6_W6MATCH7_DEFAULTTEXTUREWORK_H

#include "common.h"
#include <stddef.h>

struct DefaultTextureStorage {
    union {
        u8 data[0x44];
        struct {
            /* 0x00 */ void *mainData;
            /* 0x04 */ void *subData;
            /* 0x08 */ u32 unk8;
            /* 0x0C */ u8 unkC[0x30];
            /* 0x3C */ u32 mainKind;
            /* 0x40 */ u32 addr;
        } allocation;
    };
};
typedef char DefaultTextureStorageLayoutCheck[
    sizeof(DefaultTextureStorage) == 0x44 &&
    offsetof(DefaultTextureStorage, allocation.mainData) == 0 &&
    offsetof(DefaultTextureStorage, allocation.subData) == 4 &&
    offsetof(DefaultTextureStorage, allocation.mainKind) == 0x3C &&
    offsetof(DefaultTextureStorage, allocation.addr) == 0x40 ? 1 : -1];

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
typedef char DefaultTextureContainerLayoutCheck[
    sizeof(DefaultTextureDescription) == 0x34 &&
    offsetof(DefaultTexture2D, storage) == 0x34 &&
    sizeof(DefaultTexture2D) == 0x78 &&
    offsetof(DefaultTextureCube, faces) == 0x34 &&
    sizeof(DefaultTextureCube) == 0x1CC ? 1 : -1];

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

struct DriverMemoryCallbacks {
    /* 0x00 */ DriverTextureAllocate *allocate;
    /* 0x04 */ DriverTextureRelease *release;
};
typedef char DriverMemoryCallbacksSizeCheck[sizeof(DriverMemoryCallbacks) == 8 ? 1 : -1];

extern "C" {
s32 gfxDefaultTexturesInitialize(DefaultTextureWork *work);
s32 gfxDefaultTexturesInitialize(DefaultTextureWork *work);
}

#endif
