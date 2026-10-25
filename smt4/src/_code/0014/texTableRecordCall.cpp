#include "shard/W6_W6Match5_RecordCallParameters.h"

extern "C" {

typedef struct Record00144fa8 {
    /* 0x00 */ u8 data[0x14];
} Record00144fa8;

typedef struct TexTable00144fa8 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Record00144fa8 **records;
} TexTable00144fa8;

TexTable00144fa8 *asdTMTexTableCallFileA(u32 table, s32 index);
u32 FUN_002a8ac4(Record00144fa8 *record, RecordCallParameters *parameters, TexTable00144fa8 *table);

/* Passes record (index mod 1000) of the texture table's record list on. */
void texTableRecordCall(u32 tableId, s32 index, RecordCallParameters *parameters)
{
    TexTable00144fa8 *table = asdTMTexTableCallFileA(tableId, index);

    FUN_002a8ac4(*table->records + index % 1000, parameters, table);
}

} /* extern "C" */
