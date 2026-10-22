#include "shard/Sys43dc20.h"

extern "C" {

int asdMemFreeSlot(u32 value);
int asdTMTexTableFreeEntry(int table);
int asdTMTexTableReleaseNode(int table, int index);
int asdMemFree(void *ptr);

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
} JobWork;

extern JobWork *jobGetWork(void);

void commonBgDestroyJobWork(void)
{
    JobWork *work = jobGetWork();

    asdMemFreeSlot(work->unk0C);
    asdMemFreeSlot(work->unk10);
    asdTMTexTableReleaseNode(0x2d, 0);
    asdTMTexTableFreeEntry(0x2d);
    asdMemFree(work);
    g_commonBg.obj = NULL;
}

} /* extern "C" */
