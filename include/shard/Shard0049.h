/* Structs shared by the helper functions in code shard 0049. */
#ifndef SHARD_SHARD0049_H
#define SHARD_SHARD0049_H

#include "common.h"
#include <stddef.h>

#include "shard/Shard0048.h"

typedef struct Entry8C {
    /* 0x00 */ u8 data[0x8C];
} Entry8C;

typedef struct Entry80 {
    /* 0x00 */ u8 data[0x80];
} Entry80;

/* Nine equipment pages have matching cursor and item-id tables. */
struct EquipmentMenuCursor {
    u8 data[0x74];
};
struct EquipmentMenuItem {
    s16 id;
    u16 unk02;
};
struct EquipmentMenuPage {
    EquipmentMenuItem items[1024];
    u16 unk1000;
};
class EquipmentMenuResource {
public:
    virtual void unk00();
    virtual void destroy();
    /* 0x04 */ u32 handle;
};
struct EquipmentMenuState {
    /* 0x00000 */ u8 unk00000[0xB40];
    /* 0x00B40 */ s32 page;
    /* 0x00B44 */ u8 unk00b44[0x1C];
    /* 0x00B60 */ EquipmentMenuCursor cursors[9];
    /* 0x00F74 */ EquipmentMenuPage pages[9];
    /* 0x09F86 */ u8 unk09f86[0xC07E];
    /* 0x16004 */ u32 state;
    /* 0x16008 */ u8 unk16008[0x20];
    /* 0x16028 */ EquipmentMenuResource *resource;
};
struct EquipmentMenuReadyState {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 ready;
};

typedef char EquipmentMenuPageSizeCheck[sizeof(EquipmentMenuPage) == 0x1002 ? 1 : -1];
typedef char EquipmentMenuStateOffsetCheck[offsetof(EquipmentMenuState, state) == 0x16004 ? 1 : -1];
typedef char EquipmentMenuResourceOffsetCheck[offsetof(EquipmentMenuState, resource) == 0x16028 ? 1 : -1];

#endif
