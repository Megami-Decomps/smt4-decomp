#include "common.h"

struct Record {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ s32 value;
};

extern "C" {
s32 scrGetArg(u32 index);
Record *dataTable00FindById(u16 id);
void scrSetResult(s32 result);
}

extern "C" s32 FUN_0031889c(void)
{
    scrSetResult(dataTable00FindById(scrGetArg(0))->value);
    return 1;
}
