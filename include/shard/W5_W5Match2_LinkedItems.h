#ifndef SHARD_W5_W5MATCH2_LINKEDITEMS_H
#define SHARD_W5_W5MATCH2_LINKEDITEMS_H
#include "common.h"
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
    /* 0x90 */ u32 value;
    /* 0x94 */ union {
        u8 unk94[0x18];
        Label label;
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
#endif
