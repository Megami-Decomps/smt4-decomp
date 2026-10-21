#include "common.h"

extern "C" {

struct Widget;

typedef struct WidgetVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*destroy)(struct Widget *widget);
} WidgetVtbl;

typedef struct Widget {
    /* 0x00 */ const WidgetVtbl *vtbl;
} Widget;

typedef struct Scene {
    /* 0x000 */ u8 unk000[0x394];
    /* 0x394 */ void *bufferA;
    /* 0x398 */ void *bufferB;
    /* 0x39C */ void *process;
    /* 0x3A0 */ u8 unk3A0[0x79C];
    /* 0xB3C */ Widget *widget;
} Scene;

extern void scrScriptProcessDestroy(void *process);
extern void asdMemFree(void *block);
extern void placeWinRelease(void);
extern void sceneReleaseJobsAndResources(Scene *scene);
extern void FUN_001695a0(void);
extern void messageSetMode(s32 arg);

/* Releases the scene's widget, script process and buffers, then shuts its subsystems down. */
void FUN_00499c84(Scene *scene)
{
    Widget *widget = scene->widget;

    if (widget != NULL) {
        widget->vtbl->destroy(widget);
        scene->widget = NULL;
    }
    if (scene->process != NULL) {
        scrScriptProcessDestroy(scene->process);
        scene->process = NULL;
    }
    if (scene->bufferA != NULL) {
        asdMemFree(scene->bufferA);
        scene->bufferA = NULL;
    }
    if (scene->bufferB != NULL) {
        asdMemFree(scene->bufferB);
        scene->bufferB = NULL;
    }
    placeWinRelease();
    sceneReleaseJobsAndResources(scene);
    FUN_001695a0();
    messageSetMode(1);
}

} /* extern "C" */
