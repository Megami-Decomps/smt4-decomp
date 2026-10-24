#include "classes/Obj55c920.h"
#include "common.h"

extern "C" {

typedef struct {
    u8 unk0[0x1c];
    u8 ownsButtonHelp;  /* 0x01c */
    u8 texture7Missing; /* 0x01d */
    u8 loadedTexture20; /* 0x01e */
    u8 unk1f[0x95 - 0x1f];
    u8 unk95;           /* 0x095 */
    u8 unk96[0x854 - 0x96];
    void *bfFile;       /* 0x854 */
    void *mbmFile;      /* 0x858 */
} BibleScreen;

void campCommonBgAcquire(void);
s32 campButtonHelpIsActive(void);
void campButtonHelpLoad(void);
void campButtonHelpAcquire(void);
void **asdTMTexTableGetEntry(s32 table);
void asdTMTexTableLoadSprites(s32 table);
void FUN_0014afd0(s32 table, s32 index);
void FUN_002c7e6c(void);
void FUN_002c85b0(s32 arg);
void FUN_002c8538(s32 arg);
void FUN_00215bd0(void);
void FUN_003343f0(s32 arg);
s32 FUN_002e2afc(void);
void objBInitBlock12DC(void);
void asdLoadFileAsyncSimple(const char *path, void **dst, s32 flags);

/* Sets up the bible screen: shared camp resources, texture tables and its script and message files. */
} /* extern "C" */

void Obj55c920::openScreen()
{
    BibleScreen *screen = (BibleScreen *)this;
    s32 i;

    campCommonBgAcquire();
    if (campButtonHelpIsActive() == 0) {
        screen->ownsButtonHelp = 1;
        campButtonHelpLoad();
        campButtonHelpAcquire();
    }
    if (*asdTMTexTableGetEntry(7) == NULL) {
        screen->texture7Missing = 1;
    }
    if (*asdTMTexTableGetEntry(20) == NULL) {
        asdTMTexTableLoadSprites(20);
        for (i = 0; i < 4; i++) {
            FUN_0014afd0(20, i);
        }
        screen->loadedTexture20 = 1;
    }
    FUN_002c7e6c();
    FUN_002c85b0(2);
    FUN_002c8538(1);
    FUN_00215bd0();
    FUN_003343f0(1);
    if (screen->unk95 == 0 && FUN_002e2afc() != 0x2f) {
        objBInitBlock12DC();
    }
    asdLoadFileAsyncSimple("bible/bible.bf", &screen->bfFile, 0);
    asdLoadFileAsyncSimple("bible/bible.mbm", &screen->mbmFile, 0);
}

