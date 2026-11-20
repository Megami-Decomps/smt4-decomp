#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "shard/Shard003D.h"

extern "C" {

extern void buttonHelpTransitionPresetFlags(u32 arg);
extern void texSetRelease(void);
extern void campCommonBgRelease(void);
extern void campButtonHelpRelease(void);
extern u32 jobStop(u32 job, u16 arg);
extern void texOwner1480Free(u8 *sub);
extern void asdMemFree(void *ptr);

/* Tears down the navigation holder after requesting cleanup mode 3. */
void sub68OwnerDestroyAll(void)
{
    buttonHelpTransitionPresetFlags(3);
    texSetRelease();
    campCommonBgRelease();
    campButtonHelpRelease();
    if (g_naviMain != NULL) {
        jobStop(g_naviMain->job, 0);
        texOwner1480Free(g_naviMain->panel);
        asdMemFree(g_naviMain);
        g_naviMain = NULL;
    }
}

} /* extern "C" */
