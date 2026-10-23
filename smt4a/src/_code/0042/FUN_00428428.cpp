/* NON_MATCHING: format switches lower to comparisons and Result failure tests lower to signed compares. */
#include "common.h"
#include <stddef.h>

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
    if (result >> 31) {
        return result;
    }
    if (!available) {
        return 0xc8813890;
    }
    ResourceMappingInfo info;
    if (count) {
        for (u32 i = 0; i < count; ++i) {
            result = FUN_0050028c(resource, &info, &keys[i], 1);
            if (result >> 31) {
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
            if (result >> 31) {
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
