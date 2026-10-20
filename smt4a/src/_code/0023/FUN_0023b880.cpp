#include "common.h"

extern "C" {

void FUN_003d2d34(u32 handle, s32 a, s32 b);

typedef struct Record {
    /* 0x000 */ u8 unk000[0x48C];
    /* 0x48C */ u32 handle;
} Record;
extern Record *DAT_0057f290;

/* Calls FUN_003d2d34(handle, 0, 0x3C) for the record at 0x57F290 and returns 1; returns 0 when there is none. */
u32 FUN_0023b880(void)
{
    if (DAT_0057f290 == NULL) {
        return 0;
    }
    FUN_003d2d34(DAT_0057f290->handle, 0, 0x3C);
    return 1;
}

} /* extern "C" */
