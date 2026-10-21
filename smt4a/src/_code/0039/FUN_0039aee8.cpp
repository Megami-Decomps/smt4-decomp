#include "common.h"

struct KeyedRecord {
    /* 0x00 */ u8 unk00[40];
    /* 0x28 */ u32 value;
    /* 0x2c */ u8 unk2c[0x11c];
};
extern "C" {
extern KeyedRecord g_keyedRecords[];
/* Returns the indexed record's value. */
u32 FUN_0039aee8(s32 index)
{
    return g_keyedRecords[index].value;
}
}
