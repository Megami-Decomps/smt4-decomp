#include "common.h"

struct DevilRecordBytes {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 value;
};

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
DevilRecordBytes *devilGetRecord(u16 id);

/* Script command: returns the byte at offset 2 of the devil record with the given id. */
u32 scrComm_Devil_GetRecordByte2(void)
{
    scrSetResult(devilGetRecord(scrGetArg(0))->value);
    return 1;
}

} /* extern "C" */
