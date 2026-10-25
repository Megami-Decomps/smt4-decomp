#include "gamedata/UnitStats.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

typedef struct DevilRecord {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 level;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ u16 stat0;
    /* 0x16 */ u16 stat1;
    /* 0x18 */ u8 unk18[2];
    /* 0x1A */ u16 stat2;
    /* 0x1C */ u16 stat6;
    /* 0x1E */ u16 stat3;
    /* 0x20 */ u16 stat4;
    /* 0x22 */ u16 stat5;
    /* 0x24 */ u8 unk24[0x14];
    /* 0x38 */ u16 bit;       /* index of the bit set in the block's bit set */
    /* 0x3A */ u8 unk3A[2];
    /* 0x3C */ u16 resist[8];
    /* 0x4C */ u8 unk4C[2];
} DevilRecord;


extern DevilRecord *devilGetRecord(u32 id);
extern void bitsetSetBit(void *bits, u32 bit);
extern void unitRecalculateEffectiveStats(StatBlock *block);

void FUN_0029dc74(u32 id, StatBlock *block)
{
    DevilRecord *record = devilGetRecord(id);

    memClear(block, 0x604);
    block->id = id;
    block->level = record->level;
    block->base[0] = record->stat0;
    block->base[1] = record->stat1;
    block->base[2] = record->stat2;
    block->base[4] = record->stat3;
    block->base[5] = record->stat4;
    block->base[6] = record->stat5;
    block->base[3] = record->stat6;
    block->cur[0] = 0;
    block->cur[1] = 0;
    block->cur2 = record->stat2;
    block->cur3 = record->stat3;
    block->cur4 = record->stat4;
    block->cur5 = record->stat5;
    block->cur6 = record->stat6;
    block->resist[0] = record->resist[0];
    block->resist[1] = record->resist[1];
    block->resist[2] = record->resist[2];
    block->resist[3] = record->resist[3];
    block->resist[4] = record->resist[4];
    block->resist[5] = record->resist[5];
    block->resist[6] = record->resist[6];
    block->resist[7] = record->resist[7];
    block->bits = 0;
    bitsetSetBit(block, record->bit);
    unitRecalculateEffectiveStats(block);
    block->copy0 = block->unk0E;
    block->copy1 = block->unk10;
}

} /* extern "C" */
