#include "common.h"

extern "C" {

int bgmReleaseStopped(void);
int bgmFadeOut(int id);
int buttonHelpRelease(void);
int uiFadeRelease(void);
int jobStop(u32 job, int mode);
extern int uniteRequestSoundChannel(void);
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

extern ScriptWork *g_result;

void scrResultStopJobAndReleaseUi(void)
{
    if ((g_result != NULL) && (jobIsValid(g_result->job) != 0)) {
        if ((g_result->unk3560 == 1) && (uniteRequestSoundChannel() == 0)) {
            if ((mapMainIsBusy() != 0) || (lmapMainIsRunning() != 0)) {
                bgmReleaseStopped();
            } else {
                bgmFadeOut(0x3c);
            }
        }
        jobStop(g_result->job, 0);
        uiFadeRelease();
        buttonHelpRelease();
        return;
    }
}

} /* extern "C" */
