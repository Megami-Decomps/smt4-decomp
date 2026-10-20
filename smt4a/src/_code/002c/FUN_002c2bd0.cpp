#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 state;
} Record;

typedef struct Global57f23c {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Record *record;
} Global57f23c;
extern Global57f23c DAT_0057f23c;

/* Returns whether the record's state byte is 0 or '\n'. */
u8 FUN_002c2bd0(void)
{
    return DAT_0057f23c.record->state == 0 || DAT_0057f23c.record->state == '\n';
}

} /* extern "C" */
