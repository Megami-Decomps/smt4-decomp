/* NON_MATCHING: the phase switch matches the retail guards and entry addresses, but the compiler duplicates the zero-return epilogue. */
#include "common.h"

struct DeferredMapModel {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[2];
    /* 0x03 */ u8 destroyPending;
    /* 0x04 */ u8 unk04[0x24];
    /* 0x28 */ s16 map;
    /* 0x2a */ s16 area;
    /* 0x2c */ void *resource;
    /* 0x30 */ void *manager;
    /* 0x34 */ u8 unk34[4];
};

struct DeferredMapModels {
    /* 0x000 */ u8 unk000[0xc];
    /* 0x00c */ DeferredMapModel entries[64];
    /* 0xe0c */ u8 unke0c[0x32];
    /* 0xe3e */ s16 state;
    /* 0xe40 */ s16 delay;
    /* 0xe42 */ s16 map;
    /* 0xe44 */ s16 area;
};

extern "C" {
extern DeferredMapModels *g_deferredMapModels;
void asdMdlManagerMarkDestroy(void *);
void asdMdlManagerDestroy(void *);
void FUN_002e00e0(void *);
s32 FUN_00316d64(s32 map, s32 area);
s32 FUN_001e34fc(s32 map, s32 area, u32 flags);

// Mark stale map models, allow two frames to drain, then release them.
u32 mapModelsPollDeferredDestroy(void)
{
    switch (g_deferredMapModels->state) {
    case 0:
        for (s32 i = 0; i < 64; ++i) {
            DeferredMapModel *entry = &g_deferredMapModels->entries[i];
            if (entry->active && !FUN_00316d64(entry->map, entry->area) && entry->manager) {
                asdMdlManagerMarkDestroy(entry->manager);
                entry->destroyPending = 1;
            }
        }
        break;
    case 1:
        ++g_deferredMapModels->delay;
        if (g_deferredMapModels->delay < 2)
            return 0;
        for (s32 i = 0; i < 64; ++i) {
            DeferredMapModel *entry = &g_deferredMapModels->entries[i];
            if (entry->active && entry->destroyPending) {
                if (entry->manager) {
                    asdMdlManagerDestroy(entry->manager);
                    entry->manager = NULL;
                }
                if (entry->resource) {
                    FUN_002e00e0(entry->resource);
                    entry->resource = NULL;
                }
                entry->active = 0;
                entry->destroyPending = 0;
            }
        }
        break;
    case 2:
        if (FUN_001e34fc(g_deferredMapModels->map, g_deferredMapModels->area, 1))
            return 1;
    default:
        return 0;
    }
    ++g_deferredMapModels->state;
    g_deferredMapModels->delay = 0;
    return 0;
}
}
