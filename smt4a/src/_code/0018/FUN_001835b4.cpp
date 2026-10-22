/* NON_MATCHING: flags and id trade r4/r5, so retail builds the position address in lr (register allocation only). */
#include "common.h"

extern "C" {

/* Where a texture's image is anchored. */
typedef struct TexOrigin {
    /* 0x00 */ s16 x;
    /* 0x02 */ s16 y;
    /* 0x04 */ u16 mode; // 0: anchored only when flags bit 0 is set, 1: always anchored
    /* 0x06 */ u8 unk06[6];
    /* 0x0C */ u16 flags;
} TexOrigin;

typedef struct TexTableEntry {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ TexOrigin *origin;
    /* 0x10 */ u8 unk10[4];
} TexTableEntry;

typedef struct TexTable {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ TexTableEntry **entries;
} TexTable;

typedef struct SpriteDrawParam {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u32 color;
    /* 0x08 */ f32 x;
    /* 0x0C */ f32 y;
    /* 0x10 */ s32 unk10;
    /* 0x14 */ s32 offsetX;
    /* 0x18 */ s32 offsetY;
    /* 0x1C */ u8 unk1C[0x10];
    /* 0x2C */ u16 scaleX;
    /* 0x2E */ u16 scaleY;
    /* 0x30 */ u8 unk30[0x10];
} SpriteDrawParam;

TexTable *asdTMTexTableCallFileC(u32 file, s32 id);
void FUN_00184efc(TexTable *table, TexTableEntry *entry, SpriteDrawParam *param, s32 arg);

/* Draws texture `id` of the file at (x, y), offset by the texture's anchor when it has one. */
__softfp void FUN_001835b4(u32 flags, u32 file, s32 id, u32 color, f32 x, f32 y)
{
    TexTable *table = asdTMTexTableCallFileC(file, id);
    TexTableEntry *entry = &(*table->entries)[id % 1000];
    TexOrigin *origin = entry->origin;
    SpriteDrawParam param;

    param.flags = flags;
    param.color = color;
    param.x = x;
    param.y = y;
    param.offsetY = 0;
    param.scaleX = 1;
    param.unk10 = 0;
    param.offsetX = 0;
    param.scaleY = 1;
    if (origin != NULL) {
        if (origin->mode == 0 && (origin->flags & 1)) {
            param.flags = flags | 0x8000;
            param.offsetX = origin->x;
            param.offsetY = origin->y;
        }
        if (origin->mode == 1) {
            param.offsetX = origin->x;
            param.offsetY = origin->y;
        }
    }
    FUN_00184efc(table, entry, &param, 0);
}

} /* extern "C" */
