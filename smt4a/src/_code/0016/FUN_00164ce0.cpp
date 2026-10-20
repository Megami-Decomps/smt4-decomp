#include "shard/JobWork.h"

extern "C" {

/* Stores `value` in the byte at 0x31 of the job work area. */
void FUN_00164ce0(u32 unused, u8 value)
{
    JobWork *work = jobGetWork();
    work->unk0031 = value;
}

} /* extern "C" */
