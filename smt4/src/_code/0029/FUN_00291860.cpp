#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* A screen object that owns a script process, two heap blocks and a few resource flags. */
struct ScreenResources {
    /* 0x000 */ u8 unk000[0x1C];
    /* 0x01C */ u8 buttonHelpLoaded;
    /* 0x01D */ u8 flag1D;
    /* 0x01E */ u8 texturesLoaded;
    /* 0x01F */ u8 unk01F[0x579];
    /* 0x598 */ void *blockA;
    /* 0x59C */ void *blockB;
    /* 0x5A0 */ void *process;
};

extern "C" {

void scrScriptProcessDestroy(void *process);
void asdMemFree(void *block);
void gameGlobalsSetSelected(s32 selected);
void FUN_002a0cc8(s32 value);
void gameReleaseDataReference(void);
void asdTMTexTableReleaseNode(s32 table, s32 node);
void buttonHelpRelease(void);
void buttonHelpTexturesUnref(void);
void uiFadeRelease(void);

/* Releases everything the screen holds (process, blocks, texture table entry, button help), then the shared fade. */
void FUN_00291860(ScreenResources *screen)
{
    if (screen->process != NULL) {
        scrScriptProcessDestroy(screen->process);
        screen->process = NULL;
    }
    if (screen->blockA != NULL) {
        asdMemFree(screen->blockA);
        screen->blockA = NULL;
    }
    if (screen->blockB != NULL) {
        asdMemFree(screen->blockB);
        screen->blockB = NULL;
    }
    gameGlobalsSetSelected(0);
    FUN_002a0cc8(0);
    gameReleaseDataReference();
    if (screen->texturesLoaded != 0) {
        for (s32 node = 0; node < 3; ++node) {
            asdTMTexTableReleaseNode(0x1d, node);
        }
        asdTMTexTableFreeEntry(0x1d);
        screen->texturesLoaded = 0;
    }
    if (screen->flag1D != 0) {
        screen->flag1D = 0;
    }
    if (screen->buttonHelpLoaded != 0) {
        buttonHelpRelease();
        buttonHelpTexturesUnref();
        screen->buttonHelpLoaded = 0;
    }
    uiFadeRelease();
}

} /* extern "C" */
