#include "common.h"
#include "shard/W4_Match6_BibleScreen.h"

extern "C" {

extern int FUN_002898e4(void);
extern int FUN_0028c040(void);
extern int buttonHelpCreate(void);
extern int FUN_0028d9b0(void);
extern int FUN_00297468(const char *path, void **buffer, int flags);
extern int gameGlobalsSetSelected(int);
extern int FUN_0029e788(void);
extern int FUN_0029e874(int);
extern int FUN_002a0cc8(int);
extern int asdTMTexTableLoadSprites(int);
extern int FUN_002c58c8(int, int);
extern int *asdTMTexTableGetEntry(u32);
extern int campButtonHelpIsActive(void);

/* Opens the bible screen: creates its button help, makes sure its sprite tables are loaded and starts loading its two files. */
void bibleScreenOpen(BibleScreen *screen)
{
    int i;

    FUN_002898e4();
    if (campButtonHelpIsActive() == 0) {
        screen->helpCreated = 1;
        FUN_0028d9b0();
        buttonHelpCreate();
    }
    if (*asdTMTexTableGetEntry(0xD) == 0) {
        screen->sprites0dMissing = 1;
    }
    if (*asdTMTexTableGetEntry(0x1D) == 0) {
        asdTMTexTableLoadSprites(0x1D);
        for (i = 0; i < 3; i++) {
            FUN_002c58c8(0x1D, i);
        }
        screen->sprites1dLoaded = 1;
    }
    FUN_0028c040();
    gameGlobalsSetSelected(2);
    FUN_0029e874(1);
    FUN_0029e788();
    FUN_002a0cc8(1);
    FUN_00297468("bible/bible.bf", &screen->files.bibleBf, 0);
    FUN_00297468("bible/bible.mbm", &screen->files.bibleMbm, 0);
}

}
