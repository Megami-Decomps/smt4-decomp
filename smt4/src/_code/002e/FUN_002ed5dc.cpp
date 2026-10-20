#include "shard/Sys43dc20.h"

extern "C" {

int FUN_002a780c(u32 value);
int asdTMTexTableFreeEntry(int table);
int FUN_002ae898(int table, int index);
int asdMemFree(void *ptr);

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
} JobWork;

extern JobWork *jobGetWork(void);

void FUN_002ed5dc(void)
{
    JobWork *work = jobGetWork();

    FUN_002a780c(work->unk0C);
    FUN_002a780c(work->unk10);
    FUN_002ae898(0x2d, 0);
    asdTMTexTableFreeEntry(0x2d);
    asdMemFree(work);
    DAT_0043dc20.obj = NULL;
}

} /* extern "C" */
