/* Matches with -O2 (requested): built at a lower optimisation level than the game code. */
#include "common.h"

extern "C" {

typedef struct JobState {
    u8 unk00[0x40];
    u32 job; /* 0x40 */
} JobState;

typedef struct BtlTalk {
    u8 unk00[8];
    void *buffer0;  /* 0x08 */
    void *buffer1;  /* 0x0c */
    void *script;   /* 0x10 */
    void *buffer2;  /* 0x14 */
} BtlTalk;

extern JobState *jobGetWork(void);
extern BtlTalk *g_btlTalk;
extern u32 g_btlUiBlock;

extern void FUN_004ab734(u32 arg);
extern void asdMemFree(void *block);
extern void scrScriptProcessDestroy(void *script);
extern void jobStop(u32 job, int arg);

/* Frees the talk window's buffers and script, then stops the job. */
void FUN_002df5c8(void)
{
    JobState *work = jobGetWork();
    BtlTalk *talk = g_btlTalk;

    if (talk != NULL) {
        FUN_004ab734(g_btlUiBlock);
        if (talk->buffer0 != NULL) {
            asdMemFree(talk->buffer0);
            talk->buffer0 = NULL;
        }
        if (talk->script != NULL) {
            scrScriptProcessDestroy(talk->script);
            talk->script = NULL;
        }
        if (talk->buffer1 != NULL) {
            asdMemFree(talk->buffer1);
            talk->buffer1 = NULL;
        }
        if (talk->buffer2 != NULL) {
            asdMemFree(talk->buffer2);
            talk->buffer2 = NULL;
        }
        asdMemFree(g_btlTalk);
        g_btlTalk = NULL;
    }
    jobStop(work->job, 0);
}

} /* extern "C" */
