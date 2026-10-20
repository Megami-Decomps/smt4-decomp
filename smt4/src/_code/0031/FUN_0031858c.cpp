#include "common.h"

extern "C" {

int scrSetResult(int result);
int FUN_002b06c4(u32 id);
extern u32 scrGetArg(void);

typedef struct Record {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u16 flags;
} Record;

/* Script command: result is bit 6 of the record's flags halfword (masked to 0x7f). */
u32 FUN_0031858c(void)
{
    Record *record = (Record *)FUN_002b06c4((u16)scrGetArg());

    scrSetResult((record->flags & 0x7f) >> 6);
    return 1;
}

} /* extern "C" */
