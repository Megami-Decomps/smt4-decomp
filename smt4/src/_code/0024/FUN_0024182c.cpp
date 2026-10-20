#include "common.h"

extern "C" {

int FUN_001aa030(void);
int FUN_00220f5c(void *obj);
int FUN_002523f0(void);
int FUN_00290f48(int id);
int FUN_0029c3b0(int id);
int FUN_002a46d8(int id);
int scrScriptProcessDestroy(u32 process);
int asdTMTexTableFreeEntry(int table);
int FUN_002ae898(int table, int index);
int asdMemFree(u32 ptr);
int jobStop(u32 job, int mode);
int runWinDestroy(void);
extern int FUN_0026efec(int index);

typedef struct Scene {
    /* 0x000 */ u32 job;
    /* 0x004 */ u8 unk004[0x9C];
    /* 0x0A0 */ u8 sub[0xC4C];
    /* 0xCEC */ u32 bufferA;
    /* 0xCF0 */ u32 bufferB;
    /* 0xCF4 */ u32 bufferC;
    /* 0xCF8 */ u32 bufferD;
    /* 0xCFC */ u32 bufferE;
    /* 0xD00 */ u32 bufferF;
    /* 0xD04 */ u32 scriptA;
    /* 0xD08 */ u32 scriptB;
    /* 0xD0C */ u8 unkD0C[0x50];
    /* 0xD5C */ u32 shuttingDown;
} Scene;

extern Scene *DAT_0043daa8;

void FUN_0024182c(void)
{
    Scene *scene = DAT_0043daa8;
    int entry;
    int i;

    if (DAT_0043daa8->shuttingDown != 0) {
        if (DAT_0043daa8->bufferC != 0) {
            asdMemFree(scene->bufferC);
        }
        if (scene->bufferD != 0) {
            asdMemFree(scene->bufferD);
        }
        if (scene->scriptA != 0) {
            scrScriptProcessDestroy(scene->scriptA);
        }
        jobStop(scene->job, 0);
        asdMemFree((u32)scene);
        DAT_0043daa8 = NULL;
        return;
    }
    i = 0;
    do {
        entry = FUN_0026efec(i);
        i++;
        if ((*(u8 *)(entry + 0x20) & 0x10) != 0) {
            *(u8 *)(entry + 0x20) = *(u8 *)(entry + 0x20) & ~0x10U;
        }
    } while (i < 0xc);
    FUN_001aa030();
    FUN_002a46d8(0x25);
    FUN_002523f0();
    if (scene->bufferA != 0) {
        asdMemFree(scene->bufferA);
    }
    if (scene->bufferB != 0) {
        asdMemFree(scene->bufferB);
    }
    if (scene->bufferC != 0) {
        asdMemFree(scene->bufferC);
    }
    if (scene->bufferD != 0) {
        asdMemFree(scene->bufferD);
    }
    if (scene->bufferE != 0) {
        asdMemFree(scene->bufferE);
    }
    if (scene->bufferF != 0) {
        asdMemFree(scene->bufferF);
    }
    if (scene->scriptA != 0) {
        scrScriptProcessDestroy(scene->scriptA);
    }
    if (scene->scriptB != 0) {
        scrScriptProcessDestroy(scene->scriptB);
    }
    FUN_002ae898(0x39, 0);
    asdTMTexTableFreeEntry(0x39);
    runWinDestroy();
    FUN_00220f5c(DAT_0043daa8->sub);
    jobStop(scene->job, 0);
    asdMemFree((u32)scene);
    DAT_0043daa8 = NULL;
    FUN_0029c3b0(0xf);
    FUN_00290f48(0x2d);
}

} /* extern "C" */
