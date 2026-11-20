#include "ui/ButtonHelpGlobal.h"
#include "event/bustupEvent/BustupTex.h"

extern "C" {

void asdTMTexTableLoadSprites(s32 table);
void campButtonHelpLoadSlot(void);
void *asdLoadFileSyncDefault(const char *path);

/* First user of the camp button help loads its sprite table and data files; every call counts one user. */
void campButtonHelpLoad(void)
{
    if (g_buttonHelp.loadCount <= 0) {
        asdTMTexTableLoadSprites(10);
        asdTMTexTablePrepareNodeImage(10, 0);
        campButtonHelpLoadSlot();
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
