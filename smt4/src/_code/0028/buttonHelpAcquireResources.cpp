#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;

s32 asdTMTexTableLoadSprites(s32 id);
s32 FUN_002c58c8(s32 id, s32 arg);
s32 FUN_0022097c(void);
s32 asdLoadFileSyncDefault(const char *path);

/* Loads the camp button-help resources on the first load (counted by loadCount). */
void buttonHelpAcquireResources(void)
{
    if (g_buttonHelp.loadCount <= 0) {
        asdTMTexTableLoadSprites(0x12);
        FUN_002c58c8(0x12, 0);
        FUN_0022097c();
        if (g_buttonHelp.mbm == 0) {
            g_buttonHelp.mbm = asdLoadFileSyncDefault("camp/camp.mbm");
        }
        if (g_buttonHelp.bf == 0) {
            g_buttonHelp.bf = asdLoadFileSyncDefault("camp/camp.bf");
        }
    }
    g_buttonHelp.loadCount++;
}

} /* extern "C" */
