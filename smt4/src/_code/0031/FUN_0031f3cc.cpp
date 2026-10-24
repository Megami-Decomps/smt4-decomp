#include "common.h"

extern "C" {

int scrSetResult(int result);
int dataTable00FindById(u32 id);
extern u32 scrGetArg(u32 index);

typedef struct Record {
    /* 0x00 */ u8 unk00[0xA5];
    /* 0xA5 */ u8 flags;
} Record;

u32 FUN_0031f3cc(void)
{
    u16 id = scrGetArg(0);
    Record *record = (Record *)dataTable00FindById(id);

    scrSetResult((record->flags & 3) >> 1);
    return 1;
}

} /* extern "C" */
