#include "ui/ButtonHelpGlobal.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

int asdTMTexTableReleaseNode(int id, int arg);
int asdMemFree(void *block);
int buttonHelpFreeTextureSlot(void);

/* Drops a reference on the shared button help textures and frees them when the last one goes. */
void buttonHelpTexturesUnref(void)
{
    g_buttonHelp.loadCount--;
    if (g_buttonHelp.loadCount <= 0) {
        buttonHelpFreeTextureSlot();
        asdMemFree(g_buttonHelp.mbm);
        asdMemFree(g_buttonHelp.bf);
        asdTMTexTableReleaseNode(0x12, 0);
        asdTMTexTableFreeEntry(0x12);
        g_buttonHelp.loadCount = 0;
    }
}

} /* extern "C" */
