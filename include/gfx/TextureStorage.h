#ifndef GFX_TEXTURESTORAGE_H
#define GFX_TEXTURESTORAGE_H

#include "common.h"

struct TextureStorage;
struct TextureStorageSlot {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ TextureStorage *storage;
};
struct TextureStorageNode {
    /* 0x00 */ TextureStorageSlot slots[2];
    /* 0x20 */ u32 unk20;
    /* 0x24 */ TextureStorageNode *next;
};
struct TextureStorageList {
    /* 0x00 */ TextureStorageNode *head;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ TextureStorageNode *current;
};

#endif
