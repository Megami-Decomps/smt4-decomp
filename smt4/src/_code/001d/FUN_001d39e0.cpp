#include "common.h"

struct NameFUN_001d39e0 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ const u32 *job;
};

extern "C" {

extern NameFUN_001d39e0 g_name;

s32 jobStop(u32 job, u16 delay);

/* Stops the name entry's job. */
void FUN_001d39e0(void)
{
    jobStop(*g_name.job, 0);
}

} /* extern "C" */
