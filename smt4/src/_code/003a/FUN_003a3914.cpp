#include "common.h"

extern "C" {

int buttonHelpTexturesUnref(void);
int buttonHelpRelease(void);
int uiFadeRelease(void);
int FUN_00292c0c(void);
int gameGlobalsSetSelected(int a);
int FUN_002a71fc(int a);
int scrScriptProcessDestroy(void);
int FUN_002a7890(void);
int asdTMTexTableFreeEntry(int table);
int asdTMTexTableReleaseNode(int table, int index);
int FUN_002bff50(void);
int asdMemFree(void);
int jobStop(u32 job, int mode);
extern int jobIsValid(u32 job);

struct Object;
typedef struct ObjectVtbl {
    /* 0x0 */ void *unk0;
    /* 0x4 */ void (*destroy)(struct Object *object);
} ObjectVtbl;

typedef struct Object {
    /* 0x0 */ ObjectVtbl *vtbl;
} Object;

typedef struct Scene {
    /* 0x00000 */ u8 unk00000[0x10];
    /* 0x00010 */ int mode;
    /* 0x00014 */ u8 unk00014[0x14C];
    /* 0x00160 */ int bufferA;
    /* 0x00164 */ int bufferB;
    /* 0x00168 */ int scriptA;
    /* 0x0016C */ int scriptB;
    /* 0x00170 */ u8 unk00170[0x200];
    /* 0x00370 */ int bufferC;
    /* 0x00374 */ int bufferD;
    /* 0x00378 */ int scriptC;
    /* 0x0037C */ u8 unk0037C[0x4E0];
    /* 0x0085C */ Object *object;
    /* 0x00860 */ u8 unk00860[0x154C4];
    /* 0x15D24 */ int unk15D24;
    /* 0x15D28 */ u8 unk15D28[0x18];
    /* 0x15D40 */ u32 jobA;
    /* 0x15D44 */ u32 jobB;
} Scene;

void FUN_003a3914(Scene *scene)
{
    Object *object = scene->object;

    if (object != NULL) {
        object->vtbl->destroy(object);
        scene->object = NULL;
    }
    if (scene->scriptC != 0) {
        scrScriptProcessDestroy();
        scene->scriptC = 0;
    }
    if (scene->bufferC != 0) {
        asdMemFree();
        scene->bufferC = 0;
    }
    if (scene->bufferD != 0) {
        asdMemFree();
        scene->bufferD = 0;
    }
    FUN_002a7890();
    if (jobIsValid(scene->jobA) != 0) {
        jobStop(scene->jobA, 0);
    }
    if (jobIsValid(scene->jobB) != 0) {
        jobStop(scene->jobB, 0);
    }
    asdTMTexTableReleaseNode(0x2b, 0);
    asdTMTexTableFreeEntry(0x2b);
    if (scene->scriptA != 0) {
        scrScriptProcessDestroy();
        scene->scriptA = 0;
    }
    if (scene->scriptB != 0) {
        scrScriptProcessDestroy();
        scene->scriptB = 0;
    }
    if (scene->bufferA != 0) {
        asdMemFree();
        scene->bufferA = 0;
    }
    if (scene->bufferB != 0) {
        asdMemFree();
        scene->bufferB = 0;
    }
    if (scene->unk15D24 != 0) {
        gameGlobalsSetSelected(0);
        FUN_00292c0c();
    }
    if (scene->mode != 1) {
        uiFadeRelease();
    }
    buttonHelpRelease();
    buttonHelpTexturesUnref();
    FUN_002bff50();
    FUN_002a71fc(1);
}

} /* extern "C" */
