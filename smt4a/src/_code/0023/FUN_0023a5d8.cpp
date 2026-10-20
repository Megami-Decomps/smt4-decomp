#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 state;
} Record;
extern Record *DAT_0057f57c;

/* Returns whether the state of the record at 0x57F57C is 2. */
u8 FUN_0023a5d8(void)
{
    return DAT_0057f57c->state == 2;
}

} /* extern "C" */
