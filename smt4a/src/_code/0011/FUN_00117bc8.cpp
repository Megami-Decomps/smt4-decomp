#include "common.h"

extern "C" {

void onlineStringAssign(u8 *dest, const u8 *source);
void FUN_002f6ed2(u8 *dest, const u8 *source);
void FUN_003039f4(u8 *dest, const u8 *source);
void FUN_00303a22(u8 *dest, const u8 *source);
void FUN_00303a2e(u8 *dest, const u8 *source);
void FUN_00303a3a(u8 *dest, const u8 *source);

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u64 value08;
    /* 0x10 */ u32 word10;
    /* 0x14 */ u32 word14;
    /* 0x18 */ u8 part18[8];
    /* 0x20 */ u16 half20;
    /* 0x22 */ u8 unk22[2];
    /* 0x24 */ u8 part24[0x20];
    /* 0x44 */ u8 part44[0x14];
    /* 0x58 */ u8 part58[0x18];
    /* 0x70 */ u8 part70[8];
    /* 0x78 */ u8 part78[8];
    /* 0x80 */ u16 half80;
    /* 0x82 */ u8 byte82;
    /* 0x83 */ u8 unk83;
    /* 0x84 */ u32 word84;
    /* 0x88 */ u32 word88;
    /* 0x8C */ u32 word8C;
    /* 0x90 */ u8 part90[8];
    /* 0x98 */ u8 part98[8];
    /* 0xA0 */ u8 partA0[0xC];
    /* 0xAC */ u8 partAC[1];
} Record;

/* Assignment: copies every plain field and sub-part of `source` into `dest` and returns `dest`. */
Record *FUN_00117bc8(Record *dest, const Record *source)
{
    dest->kind = source->kind;
    dest->value08 = source->value08;
    dest->word10 = source->word10;
    dest->word14 = source->word14;
    onlineStringAssign(dest->part18, source->part18);
    dest->half20 = source->half20;
    FUN_003039f4(dest->part24, source->part24);
    FUN_00303a22(dest->part44, source->part44);
    FUN_00303a22(dest->part58, source->part58);
    FUN_002f6ed2(dest->part70, source->part70);
    FUN_002f6ed2(dest->part78, source->part78);
    dest->half80 = source->half80;
    dest->byte82 = source->byte82;
    dest->word84 = source->word84;
    dest->word88 = source->word88;
    dest->word8C = source->word8C;
    FUN_002f6ed2(dest->part90, source->part90);
    FUN_002f6ed2(dest->part98, source->part98);
    FUN_00303a2e(dest->partA0, source->partA0);
    FUN_00303a3a(dest->partAC, source->partAC);
    return dest;
}

} /* extern "C" */
