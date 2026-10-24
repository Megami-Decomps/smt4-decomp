#include "common.h"

extern "C" {

int scrSetResult(int result);
int dataTable00FindById(u32 id);
extern u32 scrGetArg(u32 index);

typedef struct Record {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u16 flags;
} Record;

/* Script command: result is a bit field of the record's flags halfword (masked to 0x3f, shifted right by 5). */
u32 FUN_003185b4(void)
{
    Record *record = (Record *)dataTable00FindById((u16)scrGetArg(0));

    scrSetResult((record->flags & 0x3f) >> 5);
    return 1;
}

} /* extern "C" */
