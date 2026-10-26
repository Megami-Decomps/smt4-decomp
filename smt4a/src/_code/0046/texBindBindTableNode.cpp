#include "common.h"

extern "C" {

typedef struct TexBindItem {
    /* 0x00 */ u8 data[0x14];
} TexBindItem;

typedef struct TexBindItemList {
    /* 0x00 */ TexBindItem *items;
} TexBindItemList;

typedef struct TexBindBank {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ TexBindItemList *list;
    /* 0x08 */ u8 unk08[0x18];
} TexBindBank;

typedef struct TexBindModel {
    /* 0x00 */ TexBindBank *banks;
} TexBindModel;

typedef struct TexBindHandle {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ TexBindModel **model;
} TexBindHandle;

typedef struct TexBindDesc {
    /* 0x00 */ u32 words[0xF];
} TexBindDesc;

TexBindHandle *packageFindFileRefByName(u32 owner, u32 kind, u32 texture);
u32 asdTMTexTableGetNode(s32 table, u32 texture);
__softfp void FUN_001ab8e0(TexBindDesc *desc, u32 source, u32 a, u32 b, f32 scale);
void FUN_0019b770(TexBindItem *item, TexBindDesc *desc, u32 node, s32 flags);

/* Returns item `index` of the model's banks (1000 items per bank). */
static __inline TexBindItem *texBindModelGetItem(TexBindModel **model, s32 index)
{
    TexBindBank *bank = &(*model)->banks[index / 1000];
    return &bank->list->items[index % 1000];
}

/* Binds a texture table node to the model item selected by `table` (0x19: item 0, otherwise item 1). */
__softfp void texBindBindTableNode(u32 owner, u32 unused, u32 source, s32 table, u32 texture, u32 a, u32 b, f32 scale)
{
    u32 kind = 0x17;
    if (table == 0x19) {
        kind = 0x3B;
    }
    TexBindHandle *handle = packageFindFileRefByName(owner, kind, texture);
    TexBindModel **model = handle != NULL ? handle->model : NULL;
    u32 node = asdTMTexTableGetNode(table, texture);
    TexBindDesc desc;

    FUN_001ab8e0(&desc, source, a, b, scale);
    s32 index = 1;
    if (table == 0x19) {
        index = 0;
    }
    TexBindItem *item = texBindModelGetItem(model, index);
    FUN_0019b770(item, &desc, node, 0);
}

} /* extern "C" */
