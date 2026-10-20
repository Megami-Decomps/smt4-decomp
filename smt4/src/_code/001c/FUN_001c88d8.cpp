#include "common.h"

extern "C" {

int FUN_002a46d8(int id);
int scrScriptProcessDestroy(u32 process);
int FUN_002ae898(int table, int index);
int FUN_002bff50(void);
int asdMemFree(u32 ptr);

typedef struct ScriptWork {
    /* 0x0000 */ u8 unk0000[0x3564];
    /* 0x3564 */ u32 unk3564;
    /* 0x3568 */ u32 process;
    /* 0x356C */ u32 unk356C;
    /* 0x3570 */ u32 unk3570;
} ScriptWork;

extern ScriptWork *DAT_0044dc20;

void FUN_001c88d8(void)
{
    ScriptWork *work = DAT_0044dc20;
    s32 i;

    if (DAT_0044dc20 != NULL) {
        scrScriptProcessDestroy(DAT_0044dc20->process);
        asdMemFree(work->unk3564);
        asdMemFree(work->unk356C);
        FUN_002bff50();
        asdMemFree(work->unk3570);
        FUN_002a46d8(0x14);
        FUN_002a46d8(0x25);
        i = 0;
        do {
            FUN_002ae898(0x28, i);
            i++;
        } while (i < 2);
        asdMemFree((u32)DAT_0044dc20);
        DAT_0044dc20 = NULL;
    }
}

} /* extern "C" */
