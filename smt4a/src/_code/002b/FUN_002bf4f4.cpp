#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x000 */ u8 unk000[0x5E1];
    /* 0x5E1 */ u8 value;
} Record;

typedef struct Global57f0c4 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Record *record;
} Global57f0c4;
extern Global57f0c4 DAT_0057f0c4;

/* Stores `value` in the byte at 0x5E1 of the record at 0x57F0C4. */
void FUN_002bf4f4(u8 value)
{
    DAT_0057f0c4.record->value = value;
}

} /* extern "C" */
