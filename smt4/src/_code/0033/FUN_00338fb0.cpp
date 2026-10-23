/* NON_MATCHING: retained-id scan unrolling, owner register allocation, and final mask stores differ. */
#include "common.h"
#include <stddef.h>

extern "C" void FUN_00294f64(void *model);
extern "C" void asdMemFree(void *memory);
extern "C" void memClear(void *memory, u32 size);

// Release unreferenced cached models and clear their transient battle records.
extern "C" void FUN_00338fb0(void *context)
{
    struct CachedModel { u32 unk00; s32 id; };
    struct PendingModel { u32 unk00; s32 id; u8 unk08[0x40]; };
    struct ActionFlag { u32 flags; u8 unk04[0x110]; };
    struct ActionFlags { u8 unk0000[0x488c]; ActionFlag entries[42]; };
    struct UnitMask { u32 words[2]; u8 unk08[0x280]; };
    struct UnitMasks { u8 unk0000[0xa998]; UnitMask entries[42]; };
    struct CacheView {
        u8 unk0000[0x1e98];
        ActionFlags *actions; // 0x1e98
        u8 unk1e9c[0x124];
        UnitMasks *units; // 0x1fc0
        u8 unk1fc4[0x170];
        CachedModel *models[42]; // 0x2134
        s16 retainedIds[42]; // 0x21dc
        u8 unk2230[0xd08];
        void *allocation; // 0x2f38
        u8 unk2f3c[0x640];
        PendingModel pending[50]; // 0x357c
    };
    typedef char LayoutCheck[offsetof(CacheView, models) == 0x2134 &&
        offsetof(CacheView, retainedIds) == 0x21dc &&
        offsetof(CacheView, allocation) == 0x2f38 && offsetof(CacheView, pending) == 0x357c ? 1 : -1];
    // All cache fields extend beyond the shared battle-state prefix.
    CacheView *cache = static_cast<CacheView *>(context);
    if (cache->allocation != NULL) {
        asdMemFree(cache->allocation);
        cache->allocation = NULL;
    }
    for (s32 slot = 0; slot < 42; ++slot) {
        for (s32 pending = 0; pending < 50; ++pending) {
            CachedModel *model = cache->models[slot];
            if (model != NULL && model->id == cache->pending[pending].id) {
                s32 retained;
                for (retained = 0; retained < 42; retained += 2) {
                    if (cache->retainedIds[retained] == static_cast<s16>(model->id) ||
                        cache->retainedIds[retained + 1] == static_cast<s16>(model->id))
                        break;
                }
                if (retained == 42) {
                    FUN_00294f64(model);
                    cache->models[slot] = NULL;
                }
            }
        }
    }
    memClear(cache->pending, sizeof(cache->pending));
    for (s32 index = 0; index < 42; ++index) {
        cache->actions->entries[index].flags = 0;
        cache->units->entries[index].words[0] = 0;
        cache->units->entries[index].words[1] = 0;
    }
}
