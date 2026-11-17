#include "common.h"
#include "gamedata/Table00Lookup.h"
#include "gamedata/DevilRecord.h"
#include "AsdSDK/AsdMemUtil.h"
#include "code/Code0026_Smt4.h"

extern "C" {

int bitsetSetBit(void *bits, int bit);
int __aeabi_memcpy4(void *dst, void *src, int size);

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
    Table00Record *a = dataTable00FindById(id);

    reinterpret_cast<int>(memClear(record, 0x604));
    record->id = (s16)id;
    record->unk48 = a->level;
    record->unk00 = (s16)a->maxHp;
    record->unk02 = (s16)a->maxMp;
    record->unk04 = a->stats[0];
    record->unk08 = a->stats[2];
    record->unk0A = a->stats[3];
    record->unk0C = a->stats[4];
    record->unk06 = a->stats[1];
    __aeabi_memcpy4(record->unk1C, record, 0xe);
    record->unk0E = *(u32 *)&record->unk00;
    record->unk12 = *(u32 *)&record->unk04;
    record->unk16 = *(u32 *)&record->unk08;
    record->unk1A = record->unk0C;
    record->unk34 = a->skills[0];
    record->unk36 = a->skills[1];
    record->unk38 = a->skills[2];
    record->unk3A = a->skills[3];
    record->unk3C = a->skills[4];
    record->unk3E = a->skills[5];
    record->unk40 = a->skills[6];
    record->unk42 = a->skills[7];
    bitsetSetBit(record, devilGetRecord(id)->innateFlag);
    record->unk2A = *(u16 *)&record->unk0E;
    record->unk2C = ((u16 *)record)[8];
}

} /* extern "C" */
