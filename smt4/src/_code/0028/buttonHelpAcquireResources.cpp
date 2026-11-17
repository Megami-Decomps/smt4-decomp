#include "ui/ButtonHelpGlobal.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"

extern "C" {

s32 asdTMTexTableLoadSprites(s32 id);
s32 asdTMTexTablePrepareNodeImage(s32 id, s32 arg);
s32 FUN_0022097c(void);

/* Loads the camp button-help resources on the first load (counted by loadCount). */
void buttonHelpAcquireResources(void)
{
    if (g_buttonHelp.loadCount <= 0) {
        asdTMTexTableLoadSprites(0x12);
        asdTMTexTablePrepareNodeImage(0x12, 0);
        FUN_0022097c();
        if (g_buttonHelp.mbm == NULL) {
            g_buttonHelp.mbm = asdLoadFileSyncDefault("camp/camp.mbm");
        }
        if (g_buttonHelp.bf == NULL) {
            g_buttonHelp.bf = asdLoadFileSyncDefault("camp/camp.bf");
        }
    }
    g_buttonHelp.loadCount++;
}

} /* extern "C" */
