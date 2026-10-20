/* NON_MATCHING: register allocation differs (retail keeps the file base, tables and counters in r0-r6/ip without spilling to r9/sl; ~90 diff lines); the structure and both debug traces agree. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_003ff788[]; /* aocTexCtrl.cpp: __FILE__ */

typedef struct ItemB ItemB;
typedef struct ItemA ItemA;

/* A resource file; its offsets are relative to the start of the file and are turned into pointers once loaded. */
typedef struct ResFile {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 dataOffset;
    /* 0x18 */ u8 unk18[4];
    /* 0x1C */ u32 itemAOffset;
    /* 0x20 */ s32 itemACount;
    /* 0x24 */ u32 itemBOffset;
    /* 0x28 */ s32 itemBCount;
    /* 0x2C */ u32 stringOffset;
} ResFile;

/* 0x14 bytes. */
struct ItemA {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ u8 *data;               /* index into the 0x50-byte records, -1 for none */
    /* 0x10 */ u8 unk10[4];
};

/* 0x10 bytes. */
struct ItemB {
    /* 0x00 */ ItemA *a;               /* index of an ItemA */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 *string;
    /* 0x0C */ u32 unk0c;
};

/* 0x20 bytes. */
typedef struct Node {
    /* 0x00 */ struct Object *owner;
    /* 0x04 */ ItemB *item;
    /* 0x08 */ u8 unk08[0x18];
} Node;

/* 0x2C bytes. */
typedef struct Object {
    /* 0x00 */ Node *nodes;
    /* 0x04 */ ResFile *file;
    /* 0x08 */ ResFile *file2;
    /* 0x0C */ u8 unk0c[0x20];
} Object;

typedef struct Loader {
    /* 0x00 */ ResFile *file;
    /* 0x04 */ Object **result;
} Loader;

void *FUN_002b73a8(u32 size, u32 align);

/* Resolves the resource file's offsets into pointers and builds the object that lists its B items. */
u32 FUN_003934d0(Loader *loader)
{
    ResFile *file = loader->file;
    u8 *data = (u8 *)file + file->dataOffset;
    ItemB *itemsB = (ItemB *)((u8 *)file + file->itemBOffset);
    u8 *strings = (u8 *)file + file->stringOffset;
    ItemA *itemsA = (ItemA *)((u8 *)file + file->itemAOffset);
    Object *obj;
    ItemA *a;
    ItemB *b;
    Node *node;
    int i;

    a = itemsA;
    for (i = 0; i < file->itemACount; i++) {
        if ((s32)a->data == -1) {
            a->data = NULL;
        } else {
            a->data = data + (s32)a->data * 0x50;
        }
        a++;
    }
    b = itemsB;
    for (i = 0; i < file->itemBCount; i++) {
        b->a = itemsA + (s32)b->a;
        b->string = b->string + (u32)strings;
        b++;
    }
    asdDebugTrace(DAT_003ff788, 62);
    obj = (Object *)FUN_002b73a8(0x2c, 0);
    if (file->itemBCount <= 0) {
        obj->nodes = NULL;
    } else {
        asdDebugTrace(DAT_003ff788, 65);
        obj->nodes = (Node *)FUN_002b73a8(file->itemBCount << 5, 0);
    }
    node = obj->nodes;
    b = itemsB;
    for (i = 0; i < file->itemBCount; i++) {
        node->owner = obj;
        node->item = b;
        node++;
        b++;
    }
    obj->file = file;
    obj->file2 = file;
    *loader->result = obj;
    return 1;
}

} /* extern "C" */
