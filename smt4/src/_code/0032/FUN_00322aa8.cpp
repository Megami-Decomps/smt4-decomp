#include "common.h"
struct Subrecord {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s16 value;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u8 bytes[12];
};
struct RecordData {
    /* 0x00 */ Subrecord entries[1];
};
struct KeyedRecord {
    /* 0x000 */ u8 unk00[0x13c];
    /* 0x13c */ RecordData *data;
    /* 0x140 */ u8 unk140[8];
};
extern "C" {
extern KeyedRecord g_keyedRecords[];
/* Returns the indexed subrecord field. */
u8 * FUN_00322aa8(s32 record, s32 index)
{
    return g_keyedRecords[record].data->entries[index].bytes;
}
}
