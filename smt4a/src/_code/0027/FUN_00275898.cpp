#include "common.h"

struct NameFUN_00275898 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ const u32 *job;
};

extern "C" {

extern NameFUN_00275898 g_name;

s32 jobStop(u32 job, u16 delay);

/* Stops the name entry's job. */
void FUN_00275898(void)
{
    jobStop(*g_name.job, 0);
}

} /* extern "C" */
