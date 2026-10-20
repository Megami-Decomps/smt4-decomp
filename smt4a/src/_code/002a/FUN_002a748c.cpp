#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 state;
} Record;
extern Record *DAT_0057f2c4;

/* Returns whether the state of the record at 0x57F2C4 is 8. */
u8 FUN_002a748c(void)
{
    return DAT_0057f2c4->state == 8;
}

} /* extern "C" */
