#include "common.h"

extern "C" {

int scrSetResult(int result);
int FUN_002b06c4(u32 id);
extern u32 scrGetArg(void);

typedef struct Record {
    /* 0x00 */ u8 unk00[0xA5];
    /* 0xA5 */ u8 flags;
} Record;

u32 FUN_0031f3d0(void)
{
    u16 id = scrGetArg();
    Record *record = (Record *)FUN_002b06c4(id);

    scrSetResult((record->flags & 3) >> 1);
    return 1;
}

} /* extern "C" */
