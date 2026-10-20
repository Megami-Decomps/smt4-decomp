#include "common.h"

extern "C" {

int FUN_0026f9b4(void);
int FUN_00290f48(int id);
int FUN_002917b8(void);
int FUN_00291944(void);
int jobStop(u32 job, int mode);
extern int FUN_001add6c(void);
extern int lmapMainIsRunning(void);
extern int jobIsValid(u32 job);
extern int mapMainIsBusy(void);

typedef struct ScriptWork {
    /* 0x0000 */ u8 unk0000[0x3560];
    /* 0x3560 */ u8 unk3560;
    /* 0x3561 */ u8 unk3561[0x9DE3];
    /* 0xD344 */ u8 unkD344[0x300];
    /* 0xD644 */ u32 job;
} ScriptWork;

extern ScriptWork *DAT_0044dc20;

void FUN_0029b074(void)
{
    if ((DAT_0044dc20 != NULL) && (jobIsValid(DAT_0044dc20->job) != 0)) {
        if ((DAT_0044dc20->unk3560 == 1) && (FUN_001add6c() == 0)) {
            if ((mapMainIsBusy() != 0) || (lmapMainIsRunning() != 0)) {
                FUN_0026f9b4();
            } else {
                FUN_00290f48(0x3c);
            }
        }
        jobStop(DAT_0044dc20->job, 0);
        FUN_00291944();
        FUN_002917b8();
        return;
    }
}

} /* extern "C" */
