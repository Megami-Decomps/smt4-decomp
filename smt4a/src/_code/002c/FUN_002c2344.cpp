#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x25];
    /* 0x25 */ u8 value;
} Record;
extern Record *DAT_0057f65c;

/* Stores `value` in the byte at 0x25 of the record at 0x57F65C. */
void FUN_002c2344(u8 value)
{
    DAT_0057f65c->value = value;
}

} /* extern "C" */
