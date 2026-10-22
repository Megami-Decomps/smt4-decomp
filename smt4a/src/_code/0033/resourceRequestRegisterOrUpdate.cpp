/* NON_MATCHING: compiler folds per-entry member bases and uses five saved registers rather than six; -O2 candidate. */
#include "shard/W9_W9Match1_ResourceRequest.h"

struct ResourceRequestRegistry {
    u8 unk0000[0x4850];
    s32 count;
    u32 unk4854;
    RegisteredResourceRequest entries[1]; // 0x4858, stride0x40
};

extern "C" u32 resourceRequestRegisterOrUpdate(ResourceRequestRegistry *registry, const ResourceRequest *request)
{
    for (s32 i = 0; i < registry->count; ++i)
        registry->entries[i].marked = 0;

    s32 count = registry->count;
    for (s32 i = 0; i < count; ++i) {
        RegisteredResourceRequest *entry = &registry->entries[i];
        if (entry->request.kind == request->kind &&
            entry->request.position[0] == request->position[0] &&
            entry->request.position[1] == request->position[1] &&
            entry->request.position[2] == request->position[2]) {
            entry->request.active = 1;
            entry->request.flags = request->flags;
            entry->request.label = request->label;
            return entry->handle;
        }
    }
    RegisteredResourceRequest *entry = &registry->entries[count];
    entry->request.kind = request->kind;
    entry->request.option = request->option;
    entry->request.variant = request->variant;
    entry->request.flags = request->flags;
    entry->request.position[0] = request->position[0];
    entry->request.position[1] = request->position[1];
    entry->request.position[2] = request->position[2];
    entry->request.parameter = request->parameter;
    entry->request.active = 1;
    entry->marked = 0;
    entry->handle = count;
    entry->request.label = request->label;
    return registry->count++;
}
