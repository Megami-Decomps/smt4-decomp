#include "common.h"

struct DataTable00Entry {
    /* 0x00 */ u8 unk00[0x86];
    /* 0x86 */ u16 value;
};

extern "C" {

DataTable00Entry *dataTable00FindById(u16 id);
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);

/* Script command: reports the halfword at 0x86 of the data table entry with the given id. */
u32 FUN_0031270c(void)
{
    scrSetResult(dataTable00FindById(static_cast<u16>(scrGetArg(0)))->value);
    return 1;
}

} /* extern "C" */
