#include "common.h"

struct ScriptProcess;

/* The camp menu's common work. */
struct CampCommonWork {
    /* 0x000 */ u8 unk000[0x1c];
    /* 0x01c */ u8 helpLoaded;
    /* 0x01d */ u8 unk01d;
    /* 0x01e */ u8 texturesLoaded;
    /* 0x01f */ u8 unk01f[0x835];
    /* 0x854 */ void *firstBuffer;
    /* 0x858 */ void *secondBuffer;
    /* 0x85c */ ScriptProcess *script;
};

extern "C" {
void scrScriptProcessDestroy(ScriptProcess *script);
void asdMemFree(void *block);
void FUN_002c85b0(s32 mode);
void FUN_003343f0(s32 mode);
void FUN_00333f6c(void);
void asdTMTexTableReleaseNode(s32 table, s32 node);
void asdTMTexTableFreeEntry(s32 table);
void campButtonHelpRelease(void);
void helpTexturesRelease(void);
void campCommonBgRelease(void);

/* Releases the camp menu's script, buffers, textures and button help, then its background. */
void campCommonRelease(CampCommonWork *camp)
{
    if (camp->script != NULL) {
        scrScriptProcessDestroy(camp->script);
        camp->script = NULL;
    }
    if (camp->firstBuffer != NULL) {
        asdMemFree(camp->firstBuffer);
        camp->firstBuffer = NULL;
    }
    if (camp->secondBuffer != NULL) {
        asdMemFree(camp->secondBuffer);
        camp->secondBuffer = NULL;
    }
    FUN_002c85b0(0);
    FUN_003343f0(0);
    FUN_00333f6c();
    if (camp->texturesLoaded) {
        for (s32 i = 0; i < 4; i++) {
            asdTMTexTableReleaseNode(20, i);
        }
        asdTMTexTableFreeEntry(20);
        camp->texturesLoaded = 0;
    }
    if (camp->unk01d) {
        camp->unk01d = 0;
    }
    if (camp->helpLoaded) {
        campButtonHelpRelease();
        helpTexturesRelease();
        camp->helpLoaded = 0;
    }
    campCommonBgRelease();
}
}
