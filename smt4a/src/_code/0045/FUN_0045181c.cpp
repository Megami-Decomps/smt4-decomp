/* NON_MATCHING: readable rewrite of a raw draft; retail lays out the flag-2 arm inline with the epilogue and the shared release call after the other arm (call block cross-jumped, &storage->block in r5); the build orders the blocks differently. */
#include "common.h"
#include "shard/W6_W6Match7_DefaultTextureWork.h"

namespace {
struct ReleasableStorage {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 flags;
    /* 0x0C */ u32 address;
    /* 0x10 */ u8 unk10[0xc];
    /* 0x1C */ void *block;
    /* 0x20 */ u32 kind;
};
struct ReleasableHandle {
    ReleasableStorage *storage;
};
}

extern "C" {
extern DriverTextureRelease *g_gfxReleaseCallback;

static __inline void driverReleaseBlock(u32 kind, u32 address, void **block)
{
    g_gfxReleaseCallback(kind, 0x102, address, *block);
    *block = NULL;
}

// Hand a storage block back to the driver unless the storage is flagged as externally owned.
void FUN_0045181c(ReleasableHandle *handle)
{
    ReleasableStorage *storage = handle->storage;
    if ((storage->flags & 1) == 0) {
        u32 address = storage->address;
        if ((storage->flags & 2) == 0) {
            if (address == 0)
                return;
            if (storage->kind != 0)
                driverReleaseBlock(storage->kind, address, &storage->block);
        } else {
            if (address == 0)
                return;
            if (storage->kind != 0)
                driverReleaseBlock(storage->kind, address, &storage->block);
        }
        storage->address = 0;
    }
}
}
