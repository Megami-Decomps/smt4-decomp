#include "common.h"

struct Record {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 value;
};

extern "C" {
s32 scrGetArg(u32 index);
Record *dataTable00FindById(u16 id);
void scrSetResult(s32 result);
}

extern "C" s32 FUN_0035f6b8(void)
{
    scrSetResult(dataTable00FindById(scrGetArg(0))->value & 0x7FFF);
    return 1;
}
