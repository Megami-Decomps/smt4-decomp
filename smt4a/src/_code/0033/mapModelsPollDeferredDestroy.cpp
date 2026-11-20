#include "map/mapDepart.h"
#include "shard/W4_Match1b_RegisteredHandle.h"
#include "util/BitsAndBytes.h"

/* One deferred map model of the depart work. */
struct DeferredDepartModel {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[2];
    /* 0x03 */ u8 pending;
    /* 0x04 */ u8 unk04[0x24];
    /* 0x28 */ s16 firstFlag;
    /* 0x2A */ s16 secondFlag;
    /* 0x2C */ u8 unk2C[4];
    /* 0x30 */ void *state;
    /* 0x34 */ RegisteredHandle *handle;
    /* 0x38 */ u8 unk38[4];
};

/* The depart work seen by the model cleanup: the final flag pair extends beyond MapDepartExtraA's
 * recovered prefix. */
struct DeferredDepartModels {
    /* 0x000 */ u8 prefix[0xC];
    /* 0x00C */ DeferredDepartModel entries[64];
    /* 0xF0C */ u8 unkF0C[0x36];
    /* 0xF42 */ s16 phase;
    /* 0xF44 */ s16 timer;
    /* 0xF46 */ s16 firstFlag;
    /* 0xF48 */ s16 secondFlag;
};

extern "C" {
extern DeferredDepartModels *DAT_00581280;
extern void *g_handleRegistry;
void ptrListRemoveClearOwner(void *, u32);
s32 FUN_00295e54(s16, s16, u32);

// Unregister stale map models, allow two frames to drain, release them, then wait for the flag pair.
u32 mapModelsPollDeferredDestroy(void)
{
    s32 i;
    DeferredDepartModel *entry;
    switch (DAT_00581280->phase) {
    case 0:
        for (i = 0; i < 64; ++i) {
            entry = &DAT_00581280->entries[i];
            if (entry->active && !flagPairCondition(entry->firstFlag, entry->secondFlag) && entry->handle) {
                RegisteredHandle *handle = DAT_00581280->entries[i].handle;
                if (handle->id)
                    ptrListRemoveClearOwner(g_handleRegistry, handle->id);
                entry->pending = 1;
            }
        }
        ++DAT_00581280->phase;
        DAT_00581280->timer = 0;
        break;
    case 1:
        if (++DAT_00581280->timer >= 2) {
            for (i = 0; i < 64; ++i) {
                entry = &DAT_00581280->entries[i];
                if (entry->active && entry->pending) {
                    if (entry->handle) {
                        delete entry->handle;
                        entry->handle = NULL;
                    }
                    if (entry->state) {
                        clearByte(reinterpret_cast<u8 *>(entry->state));
                        entry->state = NULL;
                    }
                    entry->active = 0;
                    entry->pending = 0;
                }
            }
            ++DAT_00581280->phase;
            DAT_00581280->timer = 0;
        }
        break;
    case 2:
        if (FUN_00295e54(DAT_00581280->firstFlag, DAT_00581280->secondFlag, 1))
            return 1;
        break;
    }
    return 0;
}
}
