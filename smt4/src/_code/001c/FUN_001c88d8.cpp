#include "common.h"

extern "C" {

int fileSlotFree(int id);
int scrScriptProcessDestroy(u32 process);
int asdTMTexTableReleaseNode(int table, int index);
int FUN_002bff50(void);
int asdMemFree(u32 ptr);

typedef struct ScriptWork {
    /* 0x0000 */ u8 unk0000[0x3564];
    /* 0x3564 */ u32 unk3564;
    /* 0x3568 */ u32 process;
    /* 0x356C */ u32 unk356C;
    /* 0x3570 */ u32 unk3570;
} ScriptWork;

extern ScriptWork *g_result;

void FUN_001c88d8(void)
{
    ScriptWork *work = g_result;
    s32 i;

    if (g_result != NULL) {
        scrScriptProcessDestroy(g_result->process);
        asdMemFree(work->unk3564);
        asdMemFree(work->unk356C);
        FUN_002bff50();
        asdMemFree(work->unk3570);
        fileSlotFree(0x14);
        fileSlotFree(0x25);
        i = 0;
        do {
            asdTMTexTableReleaseNode(0x28, i);
            i++;
        } while (i < 2);
        asdMemFree((u32)g_result);
        g_result = NULL;
    }
}

} /* extern "C" */
