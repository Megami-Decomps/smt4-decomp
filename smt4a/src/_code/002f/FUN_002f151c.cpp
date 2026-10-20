#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 state;
} Record;
extern Record *DAT_0057f28c;

/* Returns whether the state of the record at 0x57F28C is 0. */
u8 FUN_002f151c(void)
{
    return DAT_0057f28c->state == 0;
}

} /* extern "C" */
