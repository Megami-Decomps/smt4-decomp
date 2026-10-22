#include "common.h"

extern "C" {

int cecProcessDestroy(void);
int FUN_00220f5c(void *obj);
int btlTalkBustUpDestroy(void);
int bgmFadeOut(int id);
int soundChannelStopAll(int id);
int fileSlotFree(int id);
int scrScriptProcessDestroy(u32 process);
int asdTMTexTableFreeEntry(int table);
int asdTMTexTableReleaseNode(int table, int index);
int asdMemFree(u32 ptr);
int jobStop(u32 job, int mode);
int runWinDestroy(void);
extern int saveGetIndexedMapValue(int index);

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

extern Scene *g_campCec;

void campCecDestroyOverlay(void)
{
    Scene *scene = g_campCec;
    int entry;
    int i;

    if (g_campCec->shuttingDown != 0) {
        if (g_campCec->bufferC != 0) {
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
        g_campCec = NULL;
        return;
    }
    i = 0;
    do {
        entry = saveGetIndexedMapValue(i);
        i++;
        if ((*(u8 *)(entry + 0x20) & 0x10) != 0) {
            *(u8 *)(entry + 0x20) = *(u8 *)(entry + 0x20) & ~0x10U;
        }
    } while (i < 0xc);
    cecProcessDestroy();
    fileSlotFree(0x25);
    btlTalkBustUpDestroy();
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
    asdTMTexTableReleaseNode(0x39, 0);
    asdTMTexTableFreeEntry(0x39);
    runWinDestroy();
    FUN_00220f5c(g_campCec->sub);
    jobStop(scene->job, 0);
    asdMemFree((u32)scene);
    g_campCec = NULL;
    soundChannelStopAll(0xf);
    bgmFadeOut(0x2d);
}

} /* extern "C" */
