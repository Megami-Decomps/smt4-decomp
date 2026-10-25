#ifndef SHARD_W5_W5MATCH2_LINKEDITEMS_H
#define SHARD_W5_W5MATCH2_LINKEDITEMS_H
#include "common.h"
#include <stddef.h>
struct LinkedItemData {
    u32 words[0x90 / sizeof(u32)];
};
struct LinkedItem {
    struct Label {
        u8 unk00[8];
        char text[0x10];
    };
    /* 0x00 */ union {
        u8 unk00[0x90];
        LinkedItemData data;
    };
    /* 0x90 */ union {
        u32 value;
        void *resource;
    };
    /* 0x94 */ union {
        u8 unk94[0x18];
        Label label;
        struct {
            /* 0x94 */ void *source;
            /* 0x98 */ u32 flags;
        } reference;
    };
    /* 0xAC */ LinkedItem* next;
    /* 0xB0 */ LinkedItem* previous;
};
struct LinkedItems {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u32 count;
    /* 0x84 */ u32 unk84;
    /* 0x88 */ LinkedItem* tail;
    /* 0x8C */ LinkedItem* head;
};
typedef char LinkedItemReferenceLayout[
    offsetof(LinkedItem, reference.source) == 0x94 &&
    offsetof(LinkedItem, reference.flags) == 0x98 &&
    sizeof(LinkedItem) == 0xb4 && sizeof(LinkedItems) == 0x90 ? 1 : -1];
#ifdef __cplusplus
extern "C" {
#endif

void FUN_003ca0ec(LinkedItems *items, LinkedItem *item);

#ifdef __cplusplus
}
#endif

#endif
