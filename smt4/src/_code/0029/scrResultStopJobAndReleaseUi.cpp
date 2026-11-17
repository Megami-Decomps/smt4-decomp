#include "common.h"
#include "result/Result.h"

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

void scrResultStopJobAndReleaseUi(void)
{
    if ((g_result != NULL) && (jobIsValid(g_result->calculate) != 0)) {
        if ((g_result->kind == 1) && (uniteRequestSoundChannel() == 0)) {
            if ((mapMainIsBusy() != 0) || (lmapMainIsRunning() != 0)) {
                bgmReleaseStopped();
            } else {
                bgmFadeOut(0x3c);
            }
        }
        jobStop(g_result->calculate, 0);
        uiFadeRelease();
        buttonHelpRelease();
        return;
    }
}

} /* extern "C" */
