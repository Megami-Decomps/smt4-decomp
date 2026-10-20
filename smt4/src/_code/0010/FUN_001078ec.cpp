#include "common.h"

extern "C" {

typedef struct JobWork {
    /* 0x0000 */ u8 unk0000[4];
    /* 0x0004 */ u32 unk0004;
    /* 0x0008 */ u32 unk0008;
    /* 0x000C */ u8 unk000C[0xF14];
    /* 0x0F20 */ u32 unk0F20;
    /* 0x0F24 */ u32 unk0F24;
} JobWork;

JobWork *jobGetWork(void);
int asdTextureRelease(u32 resource);
int asdMemFree(void *ptr);

extern u32 g_frameTex;

/* Releases the four resources held by the job's work area, then the work area itself. */
void FUN_001078ec(void)
{
    JobWork *work = jobGetWork();

    asdTextureRelease(work->unk0004);
    asdTextureRelease(work->unk0008);
    asdTextureRelease(work->unk0F20);
    asdTextureRelease(work->unk0F24);
    asdMemFree(work);
    g_frameTex = 0;
}

} /* extern "C" */
