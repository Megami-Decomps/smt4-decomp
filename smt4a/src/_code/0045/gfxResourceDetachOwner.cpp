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

/* Releases the storage's block through the driver callback and detaches its address. */
static __inline void storageDetach(ReleasableStorage *storage)
{
    if (storage->address == 0) {
        return;
    }
    if (storage->kind != 0) {
        void **block = &storage->block;
        g_gfxReleaseCallback(storage->kind, 0x102, storage->address, *block);
        *block = NULL;
    }
    storage->address = 0;
}

// Hand a storage block back to the driver unless the storage is flagged as externally owned.
void gfxResourceDetachOwner(ReleasableHandle *handle)
{
    ReleasableStorage *storage = handle->storage;
    if ((storage->flags & 1) == 0) {
        /* Flag 2 storages take their own (identical) release path in the original. */
        if ((storage->flags & 2) != 0) {
            storageDetach(storage);
        } else {
            storageDetach(storage);
        }
    }
}
}
