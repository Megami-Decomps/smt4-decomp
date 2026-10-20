/* Matches with -Ospace (requested): the container code was built for size. */
#include "common.h"

extern "C" {

typedef struct RecordPart {
    u8 data[0x50];
} RecordPart;

typedef struct RecordBlock {
    u32 data;
} RecordBlock;

typedef struct Record {
    u32 unk00;                 /* 0x00 */
    u32 unk04;                 /* 0x04 */
    u8 unk08;                  /* 0x08 */
    u8 pad09[3];
    u32 unk0c;                 /* 0x0c */
    u32 unk10;                 /* 0x10 */
    u32 unk14;                 /* 0x14 */
    RecordPart part;           /* 0x18 */
    u32 unk68;                 /* 0x68 */
    u32 unk6c;                 /* 0x6c */
    u8 unk70;                  /* 0x70 */
    u8 pad71[3];
    u32 unk74;                 /* 0x74 */
    u32 unk78;                 /* 0x78 */
    u32 unk7c;                 /* 0x7c */
    u32 unk80;                 /* 0x80 */
    u32 unk84;                 /* 0x84 */
    u32 unk88;                 /* 0x88 */
    u32 unk8c;                 /* 0x8c */
    u32 unk90;                 /* 0x90 */
    u32 unk94;                 /* 0x94 */
    u32 unk98;                 /* 0x98 */
    u8 unk9c;                  /* 0x9c */
    u8 unk9d;                  /* 0x9d */
    u8 unk9e;                  /* 0x9e */
    u8 unk9f;                  /* 0x9f */
    u8 unka0;                  /* 0xa0 */
    u8 unka1;                  /* 0xa1 */
    u8 pada2[2];
    u32 unka4;                 /* 0xa4 */
    u8 unka8;                  /* 0xa8 */
    u8 pada9[3];
    RecordBlock block;         /* 0xac */
} Record;

extern void FUN_0010ccc4(RecordPart *dst, const RecordPart *src);
extern void blockCopyAssign(RecordBlock *dst, const RecordBlock *src);

/* Copy-assigns a record member by member. */
Record *FUN_004326fc(Record *dst, const Record *src)
{
    dst->unk04 = src->unk04;
    dst->unk08 = src->unk08;
    dst->unk0c = src->unk0c;
    dst->unk10 = src->unk10;
    dst->unk14 = src->unk14;
    FUN_0010ccc4(&dst->part, &src->part);
    dst->unk68 = src->unk68;
    dst->unk6c = src->unk6c;
    dst->unk70 = src->unk70;
    dst->unk74 = src->unk74;
    dst->unk78 = src->unk78;
    dst->unk7c = src->unk7c;
    dst->unk80 = src->unk80;
    dst->unk84 = src->unk84;
    dst->unk88 = src->unk88;
    dst->unk8c = src->unk8c;
    dst->unk90 = src->unk90;
    dst->unk94 = src->unk94;
    dst->unk98 = src->unk98;
    dst->unk9c = src->unk9c;
    dst->unk9d = src->unk9d;
    dst->unk9e = src->unk9e;
    dst->unk9f = src->unk9f;
    dst->unka0 = src->unka0;
    dst->unka1 = src->unka1;
    dst->unka4 = src->unka4;
    dst->unka8 = src->unka8;
    blockCopyAssign(&dst->block, &src->block);
    return dst;
}

} /* extern "C" */
