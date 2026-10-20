#include "common.h"

extern "C" {

typedef struct ButtonHelpTextures {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 refCount;       /* users of the shared texture resources */
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ void *textureA;
    /* 0x0C */ void *textureB;
} ButtonHelpTextures;

extern ButtonHelpTextures g_buttonHelp;

int asdTMTexTableFreeEntry(int id);
int asdTMTexTableReleaseNode(int id, int arg);
int asdMemFree(void *block);
int FUN_002d661c(void);

/* Drops a reference on the shared button help textures and frees them when the last one goes. */
void buttonHelpTexturesUnref(void)
{
    g_buttonHelp.refCount--;
    if (g_buttonHelp.refCount <= 0) {
        FUN_002d661c();
        asdMemFree(g_buttonHelp.textureA);
        asdMemFree(g_buttonHelp.textureB);
        asdTMTexTableReleaseNode(0x12, 0);
        asdTMTexTableFreeEntry(0x12);
        g_buttonHelp.refCount = 0;
    }
}

} /* extern "C" */
