#include "common.h"
#include "script/scrScriptProcess.h"

extern "C" {

typedef struct Object002e1614 {
    /* 0x000 */ void *job;
    /* 0x004 */ u8 unk004[0x94];
    /* 0x098 */ void *buffer;
    /* 0x09c */ ScriptProcess *process;
    /* 0x0a0 */ u32 slot;
} Object002e1614;

typedef struct Holder002e1614 {
    /* 0x00 */ Object002e1614 *object;
} Holder002e1614;

void asdMemFree(void *block);
void asdMemFreeSlot(u32 slot);
void bustupCutAnimStopJob(void);
s32 textureIdIsLoaded(s16 index);
void textureIdRelease(s16 index);
void taskWindowRelease(void);
void eventTexReleaseJobs(void);
void jobStop(void *job, s32 arg);

/* Tears the object down: frees its slot, stops the bustup animation, releases the 64 entries and frees its buffer and script process. */
void FUN_002e1614(Holder002e1614 *holder)
{
    Object002e1614 *object = holder->object;
    s32 i;

    asdMemFreeSlot(object->slot);
    eventTexReleaseJobs();
    bustupCutAnimStopJob();
    for (i = 0; i < 64; i++) {
        if (textureIdIsLoaded((s16)i) != 0) {
            textureIdRelease((s16)i);
        }
    }
    taskWindowRelease();
    if (object->buffer != NULL) {
        asdMemFree(object->buffer);
        object->buffer = NULL;
    }
    if (object->process != NULL) {
        scrScriptProcessDestroy(object->process);
        object->process = NULL;
    }
    jobStop(object->job, 0);
}

} /* extern "C" */
