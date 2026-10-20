#include "common.h"

extern "C" {

typedef struct Object002e1614 {
    /* 0x000 */ void *job;
    /* 0x004 */ u8 unk004[0x94];
    /* 0x098 */ void *buffer;
    /* 0x09c */ void *process;
    /* 0x0a0 */ u32 slot;
} Object002e1614;

typedef struct Holder002e1614 {
    /* 0x00 */ Object002e1614 *object;
} Holder002e1614;

void asdMemFree(void *block);
void asdMemFreeSlot(u32 slot);
void bustupCutAnimStopJob(void);
s32 FUN_0028520c(s16 index);
void FUN_0023a55c(s16 index);
void FUN_002ef750(void);
void eventTexReleaseJobs(void);
void jobStop(void *job, s32 arg);
void scrScriptProcessDestroy(void *process);

/* Tears the object down: frees its slot, stops the bustup animation, releases the 64 entries and frees its buffer and script process. */
void FUN_002e1614(Holder002e1614 *holder)
{
    Object002e1614 *object = holder->object;
    s32 i;

    asdMemFreeSlot(object->slot);
    eventTexReleaseJobs();
    bustupCutAnimStopJob();
    for (i = 0; i < 64; i++) {
        if (FUN_0028520c((s16)i) != 0) {
            FUN_0023a55c((s16)i);
        }
    }
    FUN_002ef750();
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
