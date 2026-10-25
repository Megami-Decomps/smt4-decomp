/* NON_MATCHING: corrected integral x/y/tag contract and removed softfp workaround; y/tag spill-register order still differs. */
#include "common.h"

extern "C" {

typedef struct TexDrawItem {
    /* 0x00 */ u8 data[0x14];
} TexDrawItem;

typedef struct TexDrawItemList {
    /* 0x00 */ TexDrawItem *items;
} TexDrawItemList;

typedef struct TexDrawFile {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ TexDrawItemList *list;
} TexDrawFile;

typedef struct TexDrawParams {
    /* 0x00 */ u32 id;
    /* 0x04 */ s32 x;
    /* 0x08 */ s32 y;
    /* 0x0C */ u32 tag;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ s32 width;
    /* 0x18 */ s32 height;
    /* 0x1C */ u8 unk1C[0x10];
    /* 0x2C */ u16 scaleX;
    /* 0x2E */ u16 scaleY;
    /* 0x30 */ u8 unk30[0x10];
} TexDrawParams;

TexDrawFile *asdTMTexTableCallFileC(u32 table, s32 texture);
u32 FUN_00184efc(TexDrawFile *file, TexDrawItem *item, TexDrawParams *params);

/* Draws texture `texture` of `table` at (x, y) with the given size; does nothing for an empty size. */
u32 FUN_00185dd4(u32 id, u32 table, s32 texture, s32 x, s32 y, s32 width, s32 height, u32 tag)
{
    TexDrawParams params;

    if (width == 0 || height == 0) {
        return 0;
    }
    TexDrawFile *file = asdTMTexTableCallFileC(table, texture);
    TexDrawItem *item = &file->list->items[texture % 1000];
    params.id = id | 0x8000;
    params.x = x;
    params.y = y;
    params.tag = tag;
    params.unk10 = 0;
    params.width = width;
    params.height = height;
    params.scaleX = 1;
    params.scaleY = 1;
    return FUN_00184efc(file, item, &params);
}

} /* extern "C" */
