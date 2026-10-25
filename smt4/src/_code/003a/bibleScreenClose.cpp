#include "common.h"
#include "shard/W4_Match6_BibleScreen.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

extern int buttonHelpTexturesUnref(void);
extern int buttonHelpRelease(void);
extern int uiFadeRelease(void);
extern int gameReleaseDataReference(void);
extern int gameGlobalsSetSelected(int);
extern int FUN_002a0cc8(int);
extern int scrScriptProcessDestroy(BibleScript *script);
extern int asdTMTexTableReleaseNode(int, int);
extern int asdMemFree(void *ptr);

/* Closes the bible screen: frees its script and file buffers, releases its tables and button help. */
void bibleScreenClose(BibleScreen *screen)
{
    int i;

    if (screen->script != NULL) {
        scrScriptProcessDestroy(screen->script);
        screen->script = NULL;
    }
    if (screen->files.bibleBf != NULL) {
        asdMemFree(screen->files.bibleBf);
        screen->files.bibleBf = NULL;
    }
    if (screen->files.bibleMbm != NULL) {
        asdMemFree(screen->files.bibleMbm);
        screen->files.bibleMbm = NULL;
    }
    gameGlobalsSetSelected(0);
    FUN_002a0cc8(0);
    gameReleaseDataReference();
    if (screen->sprites1dLoaded != 0) {
        for (i = 0; i < 3; i++) {
            asdTMTexTableReleaseNode(0x1D, i);
        }
        asdTMTexTableFreeEntry(0x1D);
        screen->sprites1dLoaded = 0;
    }
    if (screen->sprites0dMissing != 0) {
        screen->sprites0dMissing = 0;
    }
    if (screen->helpCreated != 0) {
        buttonHelpRelease();
        buttonHelpTexturesUnref();
        screen->helpCreated = 0;
    }
    uiFadeRelease();
}

}
