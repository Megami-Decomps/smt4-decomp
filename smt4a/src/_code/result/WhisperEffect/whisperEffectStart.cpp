/* NON_MATCHING: retail takes the text pointers from one contiguous data block and the task callbacks are local code labels (LAB_*) that are not decompiled; stores and pool layout differ */
/* Starts the whisper effect: allocates its work area, picks the random start values and the
 * text of every line, then creates the effect's update and draw tasks. */
#include "common.h"
#include "result/WhisperEffect.h"

extern "C" {

typedef void (*VoidFunc)(void);

int FUN_00184964(int low, int high);                    /* random integer in [low, high] */
int FUN_003d2d6c(int id);
int FUN_003d2d34(u32 handle, int arg1, int arg2);
int FUN_001acf98(int type, int index);
int FUN_00184310(void);
int sysMemClear(void *ptr, int size);                  /* zero a block */
u32 taskCreateDraw(VoidFunc fn, int priority, int arg2, int arg3, VoidFunc cb, int arg5, void *work, u32 parent);
void *asdMemoryAlloc(int heap, int align, int arg2, int size, int arg4);
u32 asdProcessCreateSimple(VoidFunc fn, int priority, int arg2, int arg3, VoidFunc cb, VoidFunc destroy, void *work);
int asdTMTexTableLoadTmx(int type, int arg);
void FUN_0031fec0(void);
void whisperEffectDestroy(void);
void LAB_002c91d0(void);
void LAB_0037e4ec(void);
void LAB_0037e504(void);
void LAB_0037e520(void);

extern WhisperEffect *g_whisperEffect;
extern char DAT_00588c58[];
extern char DAT_00588c88[];
extern char s________________00588c98[43];
extern char DAT_00588ce4[];
extern char s________________00588cf4[43];
extern char DAT_00588d40[];
extern char s____________00588d50[31];
extern char DAT_00588d94[];
extern char s____________00588da4[31];
extern char DAT_00588de8[];
extern char s________________00588df8[43];

void whisperEffectStart(u32 devilId)
{
    WhisperEffect *fx;
    WhisperLine *line;
    int i;

    fx = (WhisperEffect *)asdMemoryAlloc(0x100, 0x100, 0, 0x1b8, 1);
    g_whisperEffect = fx;
    sysMemClear(fx, 0x1b8);
    asdTMTexTableLoadTmx(0x2c, 0);
    for (i = 0; i < 5; i++) {
        FUN_001acf98(0x2c, i);
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
    fx->lines[0].textA = DAT_00588c58;
    fx->lines[0].textB = DAT_00588c88;
    fx->lines[0].name = s________________00588c98;
    fx->lines[1].textA = s________________00588c98 + 0x1c;
    fx->lines[1].textB = DAT_00588ce4;
    fx->lines[1].name = s________________00588cf4;
    fx->lines[2].textA = s________________00588cf4 + 0x1c;
    fx->lines[2].textB = DAT_00588d40;
    fx->lines[2].name = s____________00588d50;
    fx->lines[3].textA = s____________00588d50 + 0x14;
    fx->lines[3].textB = DAT_00588d94;
    fx->lines[3].name = s____________00588da4;
    fx->lines[3].count = 10;
    fx->lines[4].textA = s____________00588da4 + 0x14;
    fx->lines[4].textB = DAT_00588de8;
    fx->lines[4].name = s________________00588df8;

    fx->phaseA = (f32)FUN_00184964(0, 0xff);
    fx->phaseB = (f32)FUN_00184964(0, 0xff);
    for (i = 0; i < 5; i++) {
        fx->lines[i].pick = FUN_00184964(0, fx->lines[i].count - 1);
    }

    devilId &= 0xffff;
    FUN_00184310();
    fx = g_whisperEffect;
    fx->handle = ((u8 *)devilId)[0x3a] + 0x1000097;
    fx->task = asdProcessCreateSimple(LAB_0037e4ec, 2, 0, 0, LAB_002c91d0, whisperEffectDestroy, fx);
    taskCreateDraw(LAB_0037e504, 0x81, 0, 0, FUN_0031fec0, 0, fx, fx->task);
    taskCreateDraw(LAB_0037e520, 0xdd, 0, 0, FUN_0031fec0, 0, g_whisperEffect, g_whisperEffect->task);
    FUN_003d2d6c(0);
    FUN_003d2d34(g_whisperEffect->handle, 0, 0x3c);
}

} /* extern "C" */
