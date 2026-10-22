#ifndef GFX_TILEDINDEXMESH_H
#define GFX_TILEDINDEXMESH_H
#include "common.h"
#include <stddef.h>
/* Prefixes used when populating a newly allocated indexed grid mesh. */
struct TiledIndexStorage {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u16 *indices;
};
struct TiledIndexMesh {
    /* 0x00 */ TiledIndexStorage *storage;
};
typedef char TiledIndexStorageOffsetCheck[offsetof(TiledIndexStorage, indices) == 0x48 ? 1 : -1];
#endif
