#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x0000 */ u8 unk0000[0x400];
    /* 0x0400 */ s32 state;
    /* 0x0404 */ u8 unk0404[0x8C8C];
    /* 0x9090 */ u8 busy;
} Record;
extern Record *DAT_0057f290;

/* Returns 1 when the record's state is 2 and it is not busy. */
u32 FUN_002f3b90(void)
{
    u32 result;

    if ((DAT_0057f290->state == 2) && (DAT_0057f290->busy == 0)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
