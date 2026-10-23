#ifndef GFX_TILEDINDEXMESH_H
#define GFX_TILEDINDEXMESH_H
#include "common.h"
#include <stddef.h>
/* Prefixes used when populating a newly allocated indexed grid mesh. */
struct TiledIndexStorage {
    /* 0x00 */ union {
        u8 unk00[0x48];
        struct {
            u8 unk00[0x18];
            u32 indexCount; /* 0x18 */
        } counts;
    };
    /* 0x48 */ u16 *indices;
};
struct TiledIndexMesh {
    /* 0x00 */ TiledIndexStorage *storage;
};
typedef char TiledIndexStorageOffsetCheck[offsetof(TiledIndexStorage, indices) == 0x48 ? 1 : -1];
typedef char TiledIndexStorageCountOffsetCheck[offsetof(TiledIndexStorage, counts.indexCount) == 0x18 && sizeof(TiledIndexStorage) == 0x4C ? 1 : -1];
#endif
