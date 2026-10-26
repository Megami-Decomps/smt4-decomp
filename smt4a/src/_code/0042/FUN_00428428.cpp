/* NON_MATCHING: result tests (nnResultIsFailure) and the five-label jump table now match retail; remaining: register allocation (retail keeps resource/keys in r8/r9, the flags in r3 and the globals in r7/r5). */
#include "common.h"
#include <stddef.h>
#include "nn/Result.h"

struct ResourceMappingKey { u32 words[2]; };
struct ResourceMappingInfo {
    u32 value;
    u8 kind;
    u8 tag;
    u16 unk06;
};
struct ResourceMappingPacket { u32 value, flags; };
typedef char ResourceMappingLayout[sizeof(ResourceMappingKey) == 8 &&
    sizeof(ResourceMappingInfo) == 8 && offsetof(ResourceMappingInfo, kind) == 4 &&
    offsetof(ResourceMappingInfo, tag) == 5 && sizeof(ResourceMappingPacket) == 8 ? 1 : -1];

static inline u32 resourceMappingFlags(u8 kind)
{
    switch (kind) {
    case 0: return 0x8c;
    case 1: return 0xd;
    case 2: return 0;
    case 3: return 0x10;
    case 4: return 0x30;
    default: return 0;
    }
}

extern "C" {
extern u32 DAT_00589368;
extern ResourceMappingPacket DAT_0062d000[];
u32 FUN_00500254(u32 resource, u32 *count);
u32 FUN_0050028c(u32 resource, ResourceMappingInfo *info, const ResourceMappingKey *key, u32 count);
u32 FUN_00500350(u32 resource, u32 *key, ResourceMappingInfo *info, u32 count, u32 index);

u32 FUN_00428428(u32 resource, const ResourceMappingKey *keys, u32 count)
{
    u32 available;
    u32 result = FUN_00500254(resource, &available);
    if (nnResultIsFailure(result)) {
        return result;
    }
    if (!available) {
        return 0xc8813890;
    }
    ResourceMappingInfo info;
    if (count) {
        for (u32 i = 0; i < count; ++i) {
            result = FUN_0050028c(resource, &info, &keys[i], 1);
            if (nnResultIsFailure(result)) {
                return result;
            }
            u32 flags = resourceMappingFlags(info.kind);
            DAT_0062d000[i].value = info.tag | ((info.value & 0xff0fffff) << 8);
            DAT_0062d000[i].flags = flags | 0x40000;
        }
        DAT_00589368 = count;
    } else {
        u32 key;
        for (u32 i = 0; i < available; ++i) {
            result = FUN_00500350(resource, &key, &info, 1, i);
            if (nnResultIsFailure(result)) {
                return result;
            }
            u32 flags = resourceMappingFlags(info.kind);
            DAT_0062d000[i].value = info.tag | ((info.value & 0xff0fffff) << 8);
            DAT_0062d000[i].flags = flags | 0x40000;
        }
        DAT_00589368 = available;
    }
    return 0;
}
}
