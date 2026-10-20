#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x0000 */ u8 unk0000[0x430];
    /* 0x0430 */ u8 busy;
    /* 0x0431 */ u8 unk0431[0x8E2B];
    /* 0x925C */ s32 pending;
} Record;
extern Record *DAT_0057f290;

s32 FUN_0026272c(void);

/* Returns 1 when the record has a pending item and is either idle or FUN_0026272c reports 0; 0 when there is no record. */
u32 FUN_002c90b0(void)
{
    if (DAT_0057f290 == NULL) {
        return 0;
    }
    if (DAT_0057f290->pending != 0 && (DAT_0057f290->busy == 0 || FUN_0026272c() == 0)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
