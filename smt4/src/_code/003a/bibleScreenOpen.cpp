#include "common.h"
#include "shard/W4_Match6_BibleScreen.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "status/StatusCamera.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/asdTMTexTableLoadSprites.h"

extern "C" {

extern int commonBgAcquire(void);
extern int statusAcquireSharedResources(void);
extern int buttonHelpCreate(void);
extern int buttonHelpAcquireResources(void);
extern int asdLoadFileAsyncSimple(const char *path, void **buffer, int flags);
extern int gameGlobalsSetSelected(int);
extern int campMenuSessionReset(void);
extern int gameSetIconDisplayEnabled(int);
extern int asdTMTexTablePrepareNodeImage(int, int);
extern int *asdTMTexTableGetEntry(u32);
extern int campButtonHelpIsActive(void);

/* Opens the bible screen: creates its button help, makes sure its sprite tables are loaded and starts loading its two files. */
void bibleScreenOpen(BibleScreen *screen)
{
    int i;

    commonBgAcquire();
    if (campButtonHelpIsActive() == 0) {
        screen->helpCreated = 1;
        buttonHelpAcquireResources();
        buttonHelpCreate();
    }
    if (*asdTMTexTableGetEntry(0xD) == 0) {
        screen->sprites0dMissing = 1;
    }
    if (*asdTMTexTableGetEntry(0x1D) == 0) {
        asdTMTexTableLoadSprites(0x1D);
        for (i = 0; i < 3; i++) {
            asdTMTexTablePrepareNodeImage(0x1D, i);
        }
        screen->sprites1dLoaded = 1;
    }
    statusAcquireSharedResources();
    gameGlobalsSetSelected(2);
    gameSetIconDisplayEnabled(1);
    campMenuSessionReset();
    gameGlobalsSetSubScreenActive(1);
    asdLoadFileAsyncSimple("bible/bible.bf", &screen->files.bibleBf, 0);
    asdLoadFileAsyncSimple("bible/bible.mbm", &screen->files.bibleMbm, 0);
}

}
