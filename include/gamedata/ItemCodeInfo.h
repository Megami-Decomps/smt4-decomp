#ifndef GAMEDATA_ITEM_CODE_INFO_H
#define GAMEDATA_ITEM_CODE_INFO_H
#include "common.h"
#include <stddef.h>

struct ItemProperty {
    const char *key;
    const char *value;
};
struct ItemPropertyResource {
    u8 unk00[0x10];
    const u32 *id; // 0x10
    u32 contentMode; // 0x14
    const ItemProperty *properties; // 0x18
    u32 propertyCount; // 0x1c
};
struct ItemCodeInfo {
    u32 id;
    char code[32];
};
typedef char ItemPropertyResourceLayoutCheck[sizeof(ItemPropertyResource) == 0x20 &&
    offsetof(ItemPropertyResource, properties) == 0x18 ? 1 : -1];
typedef char ItemCodeInfoSizeCheck[sizeof(ItemCodeInfo) == 0x24 ? 1 : -1];
#endif
