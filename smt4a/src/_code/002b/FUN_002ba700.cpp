#include "common.h"

struct MikadoJobHolder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ const u32 *job;
};

extern "C" {

extern MikadoJobHolder g_mikado;

void *jyoucyuGetTableEntry(u32 index);
s32 jobStop(u32 job, u16 delay);

/* Refreshes the table entry and stops the mikado's job. */
void FUN_002ba700(void)
{
    jyoucyuGetTableEntry(0);
    jobStop(*g_mikado.job, 0);
}

} /* extern "C" */
