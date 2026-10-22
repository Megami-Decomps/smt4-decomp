/* NON_MATCHING: same byte-insert shape, but the zeroed local is merged differently (extra bic of the zero word, ldm/stm stores instead of four str) */
#include "gamedata/DataTable.h"

extern "C" {

/* Table 9 record: byte data, so the id bytes sit unaligned at offset 5. */
typedef struct Table09Record {
    u8 unk00[5];
    u8 id[4];    /* 0x05 */
    u8 valueA;   /* 0x09 */
    u8 valueB;   /* 0x0A */
    u8 valueC;   /* 0x0B */
    u8 valueD;   /* 0x0C */
    u8 valueE;   /* 0x0D */
} Table09Record;

typedef struct Table09Info {
    u8 id[4];    /* 0x00 */
    u8 valueA;   /* 0x04 */
    u8 unk05;
    u8 valueB;   /* 0x06 */
    u8 unk07;
    u8 valueC;   /* 0x08 */
    u8 unk09;
    u8 valueD;   /* 0x0A */
    u8 valueE;   /* 0x0B */
    u32 unk0C;   /* 0x0C */
} Table09Info;

/* Copies the first record of data table 9 into info. */
void FUN_003c1e50(Table09Info *info)
{
    void *resource = dataTableGet(9, 0);
    Table09Record *record;
    Table09Info result = {0};

    dataTableGetCount(resource);
    record = (Table09Record *)dataTableGetEntries(resource);
    result.id[0] = record->id[0];
    result.id[1] = record->id[1];
    result.id[2] = record->id[2];
    result.id[3] = record->id[3];
    result.valueA = record->valueA;
    result.valueB = record->valueB;
    result.valueC = record->valueC;
    result.valueD = record->valueD;
    result.valueE = record->valueE;
    *info = result;
}

} /* extern "C" */
