/* NON_MATCHING: graphics counters use the retail shared base; list-subobject addressing, preserved registers and cleanup branch scheduling still differ. */
#include "common.h"
#include "shard/S1GfxModel.h"

struct Allocator;
struct AllocatorVTable {
    void* slot0;
    void* slot1;
    void* slot2;
    void (*release)(Allocator* self, void* block);  // 0x0c
};
struct Allocator {
    AllocatorVTable* vtable;
};

// Heap object that knows its allocator (word 1) and is destroyed through its own vtable (slot 0).
struct OwnedObject {
    void (**vtable)(OwnedObject* self);
    Allocator* allocator;
};

// Named resource list entry (12 bytes).
struct ResourceEntry {
    u32 unk00;
    u32 unk04;
    u32 list;       // 0x08
};

// Shared graphics file header reference-counted by the models that use it.
struct SharedFile {
    s32 refCount;       // 0x00
    u8 unk04[0x14];
    s32 resource;       // 0x18
};

extern "C" {

extern GfxModelState g_gfxSettings;
extern u8 DAT_004dae3c;
extern u8 DAT_004dae48;

void asdFileRequestRelease(s32 request);
void indexedListErase(u8* list, s32 node);
void resourceListDestroy(u32 list);
void asdMemFree(u32 block);
void nw_gfx_res_ResGraphicsFile_Cleanup(s32* resource);
s32 lookupListFindByKey(u8* list, u32* key);

static void destroyOwned(OwnedObject** slot)
{
    OwnedObject* object = *slot;
    if (object != NULL) {
        object->vtable[0](object);
        object->allocator->vtable->release(object->allocator, object);
        *slot = NULL;
    }
}

static void freeSlot(u32* slot)
{
    if (*slot != 0) {
        asdMemFree(*slot);
        *slot = 0;
    }
}

static void releaseResourceList(u32* count, u32* entries)
{
    for (s32 i = 0; i < (s32)*count; i++) {
        ResourceEntry* entry = &reinterpret_cast<ResourceEntry*>(*entries)[i];
        resourceListDestroy(entry->list);
        entry->list = 0;
    }
    freeSlot(entries);
    *count = 0;
}

// Destroys a model instance: its resource lists, parts and node table, and the shared
// file when this was the last user.
void FUN_00152894(u32* model, s32 request, u32 unused, s32 unused2)
{
    releaseResourceList(&model[0x26], &model[0x27]);
    releaseResourceList(&model[0x28], &model[0x29]);
    destroyOwned(reinterpret_cast<OwnedObject**>(&model[0x12]));
    destroyOwned(reinterpret_cast<OwnedObject**>(&model[0x13]));
    destroyOwned(reinterpret_cast<OwnedObject**>(&model[0x14]));
    destroyOwned(reinterpret_cast<OwnedObject**>(&model[0x18]));
    destroyOwned(reinterpret_cast<OwnedObject**>(&model[0x1c]));
    freeSlot(&model[0xc]);
    freeSlot(&model[0x15]);
    freeSlot(&model[0x19]);
    for (s32 i = 0; i < (s32)model[10]; i++) {
        destroyOwned(&reinterpret_cast<OwnedObject**>(model[9])[i]);
    }

    SharedFile* shared = reinterpret_cast<SharedFile*>(model[1]);
    s32 remaining = --shared->refCount;
    if ((model[0] & 2) != 0) g_gfxSettings.unk40--;
    if (remaining < 1) {
        s32 resource = reinterpret_cast<SharedFile*>(model[1])->resource;
        if (resource != 0) nw_gfx_res_ResGraphicsFile_Cleanup(&resource);
        u32* file = reinterpret_cast<u32*>(model[1]);
        s32 node = lookupListFindByKey(&DAT_004dae3c, file);
        if (node != 0) {
            file[0] = 0;
            if (*reinterpret_cast<u8*>(&file[1]) == 0) asdMemFree(file[3]);
            file[2] = 0;
            file[5] = 0;
            indexedListErase(&DAT_004dae3c, node);
        }
        asdMemFree(reinterpret_cast<u32>(file));
        g_gfxSettings.loadedModels.count--;
        if (request != 0) asdFileRequestRelease(request);
    }
    asdMemFree(model[9]);
    model[9] = 0;
    s32 node = lookupListFindByKey(&DAT_004dae48, model);
    if (node != 0) indexedListErase(&DAT_004dae48, node);
    asdMemFree(reinterpret_cast<u32>(model));
    g_gfxSettings.loadedModels.instanceCount--;
}

} /* extern "C" */
