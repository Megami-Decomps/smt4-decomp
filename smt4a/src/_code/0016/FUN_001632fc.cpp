#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 value;
} Record;
extern Record *DAT_0057f574;

/* Returns whether the word at 0x8 of the record at 0x57F574 is nonzero. */
u8 FUN_001632fc(void)
{
    return DAT_0057f574->value != 0;
}

} /* extern "C" */
