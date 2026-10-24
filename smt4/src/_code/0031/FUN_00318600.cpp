#include "common.h"

struct DataTable00Entry {
    /* 0x00 */ u8 unk00[0xa0];
    /* 0xA0 */ u16 value;
};

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
DataTable00Entry *dataTable00FindById(u16 id);

/* Script command: returns the halfword at offset 0xA0 of the data table 0 entry with the given id. */
u32 FUN_00318600(void)
{
    scrSetResult(dataTable00FindById(scrGetArg(0))->value);
    return 1;
}

} /* extern "C" */
