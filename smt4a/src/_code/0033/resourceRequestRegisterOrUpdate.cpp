/* NON_MATCHING: register allocation only (70 lines): retail keeps the count address in r5 and the zero in r3 (the build: r3 and r5), and in the search loop the count in r2 and the index in ip */
#include "shard/W9_W9Match1_ResourceRequest.h"

struct ResourceRequestRegistry {
    u8 unk0000[0x4850];
    s32 count;
    u32 unk4854;
    RegisteredResourceRequest entries[1]; // 0x4858, stride0x40
};

extern "C" u32 resourceRequestRegisterOrUpdate(ResourceRequestRegistry *registry, const ResourceRequest *request)
{
    s32 i;
    for (i = 0; i < registry->count; ++i)
        registry->entries[i].marked = 0;

    s32 count = registry->count;
    for (i = 0; i < count; ++i) {
        if (registry->entries[i].request.kind == request->kind &&
            registry->entries[i].request.position[0] == request->position[0] &&
            registry->entries[i].request.position[1] == request->position[1] &&
            registry->entries[i].request.position[2] == request->position[2]) {
            registry->entries[i].request.active = 1;
            registry->entries[i].request.flags = request->flags;
            registry->entries[i].request.label = request->label;
            return registry->entries[i].handle;
        }
    }
    registry->entries[count].request.kind = request->kind;
    registry->entries[count].request.option = request->option;
    registry->entries[count].request.variant = request->variant;
    registry->entries[count].request.flags = request->flags;
    registry->entries[count].request.position[0] = request->position[0];
    registry->entries[count].request.position[1] = request->position[1];
    registry->entries[count].request.position[2] = request->position[2];
    registry->entries[count].request.parameter = request->parameter;
    registry->entries[count].request.active = 1;
    registry->entries[count].marked = 0;
    registry->entries[count].handle = count;
    registry->entries[count].request.label = request->label;
    return registry->count++;
}
