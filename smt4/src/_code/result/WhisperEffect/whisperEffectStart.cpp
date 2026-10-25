/* NON_MATCHING: retail takes the text pointers from one contiguous data block and the task callbacks are local code labels (LAB_*) that are not decompiled; stores and pool layout differ */
/* Starts the whisper effect: allocates its work area, picks the random start values and the
 * text of every line, then creates the effect's update and draw tasks. */
#include "common.h"
#include "result/WhisperEffect.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "shard/W6_W6Match2_HelpResources.h"

extern "C" {

typedef void (*VoidFunc)(void);

int randBetween(int low, int high);                    /* random integer in [low, high] */
int soundChannelStopAll(int id);
int soundChannelRequestIfEnabled(u32 handle, int arg1, int arg2);
int devilGetRecord(void);
int memClear(void *ptr, int size);                  /* zero a block */
u32 taskCreateDraw(VoidFunc fn, int priority, int arg2, int arg3, VoidFunc cb, int arg5, void *work, u32 parent);
void *asdMemoryAlloc(int heap, int align, int arg2, int size, int arg4);
int asdTMTexTableLoadTmx(int type, int arg);
void FUN_0022413c(void);
void whisperEffectDestroy(void);
void LAB_00203cfc(void);
void LAB_002f6a28(void);
void LAB_002f6a40(void);
void LAB_002f6a5c(void);

extern WhisperEffect *g_whisperEffect;
extern char DAT_0044dc68[];
extern char DAT_0044dc98[];
extern char s________________0044dca8[43];
extern char DAT_0044dcf4[];
extern char s________________0044dd04[43];
extern char DAT_0044dd50[];
extern char s____________0044dd60[31];
extern char DAT_0044dda4[];
extern char s____________0044ddb4[31];
extern char DAT_0044ddf8[];
extern char DAT_0044de08[];

void whisperEffectStart(u32 devilId)
{
    WhisperEffect *fx;
    WhisperLine *line;
    int i;

    fx = (WhisperEffect *)asdMemoryAlloc(0x100, 0x100, 0, 0x1b8, 1);
    g_whisperEffect = fx;
    memClear(fx, 0x1b8);
    asdTMTexTableLoadTmx(0x37, 0);
    for (i = 0; i < 5; i++) {
        asdTMTexTableLoadEntryAsync(0x37, i);
    }

    fx->unk10 = 1.0f;
    fx->periodA = 3000;
    fx->rateA = 0.16592593f;
    fx->periodB = 2000;
    fx->rateB = 0.10666667f;
    fx->unk70 = 0;
    fx->unk90 = 0;
    fx->periodC = 1000;
    fx->rateC = 0.09756097f;

    fx->lines[0].count = 0xe;
    fx->lines[1].count = 0xe;
    fx->lines[2].count = 10;
    fx->lines[4].count = 0xe;
    fx->lines[0].textA = DAT_0044dc68;
    fx->lines[0].textB = DAT_0044dc98;
    fx->lines[0].name = s________________0044dca8;
    fx->lines[1].textA = s________________0044dca8 + 0x1c;
    fx->lines[1].textB = DAT_0044dcf4;
    fx->lines[1].name = s________________0044dd04;
    fx->lines[2].textA = s________________0044dd04 + 0x1c;
    fx->lines[2].textB = DAT_0044dd50;
    fx->lines[2].name = s____________0044dd60;
    fx->lines[3].textA = s____________0044dd60 + 0x14;
    fx->lines[3].textB = DAT_0044dda4;
    fx->lines[3].name = s____________0044ddb4;
    fx->lines[3].count = 10;
    fx->lines[4].textA = s____________0044ddb4 + 0x14;
    fx->lines[4].textB = DAT_0044ddf8;
    fx->lines[4].name = DAT_0044de08;

    fx->phaseA = (f32)randBetween(0, 0xff);
    fx->phaseB = (f32)randBetween(0, 0xff);
    for (i = 0; i < 5; i++) {
        fx->lines[i].pick = randBetween(0, fx->lines[i].count - 1);
    }

    devilId &= 0xffff;
    devilGetRecord();
    fx = g_whisperEffect;
    fx->handle = ((u8 *)devilId)[0x32] + 0x100008a;
    fx->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>(LAB_002f6a28), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(LAB_00203cfc), reinterpret_cast<AsdProcFunc>(whisperEffectDestroy), reinterpret_cast<u32>(fx));
    taskCreateDraw(LAB_002f6a40, 0x7d, 0, 0, FUN_0022413c, 0, fx, fx->task);
    taskCreateDraw(LAB_002f6a5c, 0xdb, 0, 0, FUN_0022413c, 0, g_whisperEffect, g_whisperEffect->task);
    soundChannelStopAll(0);
    soundChannelRequestIfEnabled(g_whisperEffect->handle, 0, 0x3c);
}

} /* extern "C" */
