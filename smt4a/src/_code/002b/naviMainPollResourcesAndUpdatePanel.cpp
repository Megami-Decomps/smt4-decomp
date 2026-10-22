#include "shard/NaviMain.h"
#include "common.h"

extern "C" {
extern NaviMainA *g_naviMain;

 /* 0x587f28 */

extern int FUN_004920d4(u8 *panel);
extern int sceneTexturesAreLoaded(void);

u32 naviMainPollResourcesAndUpdatePanel(void)
{
    if (sceneTexturesAreLoaded() == 0) {
        return 0;
    }
    if (g_naviMain->busy != 0) {
        return 0;
    }
    FUN_004920d4(g_naviMain->panel);
    return 0;
}

}
