#include "common.h"

extern "C" {

typedef struct BibleScreen {
    /* 0x000 */ u8 unk000[0x1C];
    /* 0x01C */ u8 buttonHelpOwned;
    /* 0x01D */ u8 loadedTex0D;
    /* 0x01E */ u8 loadedTex1D;
    /* 0x01F */ u8 unk01F[0x579];
    /* 0x598 */ void *file0;
    /* 0x59C */ void *file1;
} BibleScreen;

int FUN_002898e4(void);
s32 campButtonHelpIsActive(void);
int FUN_0028d9b0(void);
int buttonHelpCreate(void);
s32 *asdTMTexTableGetEntry(u32 id);
int asdTMTexTableLoadSprites(u32 id);
int FUN_002c58c8(u32 id, s32 index);
int FUN_0028c040(void);
int gameGlobalsSetSelected(s32 arg);
int FUN_0029e874(s32 arg);
int FUN_0029e788(void);
int FUN_002a0cc8(s32 arg);
int asdLoadFileAsyncSimple(const char *path, void **slot, s32 arg);

/* Prepares the bible screen: button help, the two sprite tables and the bible.bf / bible.mbm files. */
void FUN_003ab844(BibleScreen *screen)
{
    s32 i;

    FUN_002898e4();
    screen->buttonHelpOwned = 0;
    if (campButtonHelpIsActive() == 0) {
        screen->buttonHelpOwned = 1;
        FUN_0028d9b0();
        buttonHelpCreate();
    }
    if (*asdTMTexTableGetEntry(13) == 0) {
        screen->loadedTex0D = 1;
    }
    if (*asdTMTexTableGetEntry(29) == 0) {
        asdTMTexTableLoadSprites(29);
        for (i = 0; i < 3; i++) {
            FUN_002c58c8(29, i);
        }
        screen->loadedTex1D = 1;
    }
    FUN_0028c040();
    gameGlobalsSetSelected(8);
    FUN_0029e874(1);
    FUN_0029e788();
    FUN_002a0cc8(1);
    asdLoadFileAsyncSimple("bible/bible.bf", &screen->file0, 0);
    asdLoadFileAsyncSimple("bible/bible.mbm", &screen->file1, 0);
}

} /* extern "C" */
