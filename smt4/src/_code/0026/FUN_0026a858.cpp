#include "common.h"

extern "C" {

int bitsetSetBit(void *bits, int bit);
int dataTable00FindById(int id);
int devilGetRecord(int id);
int memClear(void *ptr, int size);
int rt_memcpy_w(void *dst, void *src, int size);

typedef struct SourceA {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ u16 unk0E;
    /* 0x10 */ u16 unk10;
    /* 0x12 */ u16 unk12;
    /* 0x14 */ u16 unk14;
    /* 0x16 */ u8 unk16[0x32];
    /* 0x48 */ u16 unk48;
    /* 0x4A */ u16 unk4A;
    /* 0x4C */ u16 unk4C;
    /* 0x4E */ u16 unk4E;
    /* 0x50 */ u16 unk50;
    /* 0x52 */ u16 unk52;
    /* 0x54 */ u16 unk54;
    /* 0x56 */ u16 unk56;
} SourceA;

typedef struct SourceB {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u16 unk38;
} SourceB;

/* Packed: the three words at 0x0E-0x19 are unaligned. */
typedef __packed struct Record {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u16 unk08;
    /* 0x0A */ u16 unk0A;
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ u32 unk0E;
    /* 0x12 */ u32 unk12;
    /* 0x16 */ u32 unk16;
    /* 0x1A */ u16 unk1A;
    /* 0x1C */ u8 unk1C[0xE];
    /* 0x2A */ u16 unk2A;
    /* 0x2C */ u16 unk2C;
    /* 0x2E */ u8 unk2E[6];
    /* 0x34 */ u16 unk34;
    /* 0x36 */ u16 unk36;
    /* 0x38 */ u16 unk38;
    /* 0x3A */ u16 unk3A;
    /* 0x3C */ u16 unk3C;
    /* 0x3E */ u16 unk3E;
    /* 0x40 */ u16 unk40;
    /* 0x42 */ u16 unk42;
    /* 0x44 */ u8 unk44[2];
    /* 0x46 */ u16 id;
    /* 0x48 */ u8 unk48;
} Record;

/* Builds a record for `id` from its two source tables. */
void FUN_0026a858(int id, Record *record)
{
    SourceA *a = (SourceA *)dataTable00FindById(id);

    memClear(record, 0x604);
    record->id = (s16)id;
    record->unk48 = a->unk02;
    record->unk00 = (s16)a->unk04;
    record->unk02 = (s16)a->unk08;
    record->unk04 = a->unk0C;
    record->unk08 = a->unk10;
    record->unk0A = a->unk12;
    record->unk0C = a->unk14;
    record->unk06 = a->unk0E;
    rt_memcpy_w(record->unk1C, record, 0xe);
    record->unk0E = *(u32 *)&record->unk00;
    record->unk12 = *(u32 *)&record->unk04;
    record->unk16 = *(u32 *)&record->unk08;
    record->unk1A = record->unk0C;
    record->unk34 = a->unk48;
    record->unk36 = a->unk4A;
    record->unk38 = a->unk4C;
    record->unk3A = a->unk4E;
    record->unk3C = a->unk50;
    record->unk3E = a->unk52;
    record->unk40 = a->unk54;
    record->unk42 = a->unk56;
    bitsetSetBit(record, ((SourceB *)devilGetRecord(id))->unk38);
    record->unk2A = *(u16 *)&record->unk0E;
    record->unk2C = ((u16 *)record)[8];
}

} /* extern "C" */
