/* NON_MATCHING: retail stores the layer rates, periods and line counts before it walks the line tables;
 * this build interleaves those stores with the table walk (and numbers the saved registers differently). */
#include "common.h"
#include "result/WhisperEffect.h"
#include "code/Code0015_Smt4a.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "gamedata/NkmBaseRecordA.h"

extern "C" {

int randBetween(int low, int high);                    /* random integer in [low, high] */
int soundChannelStopAll(int id);
int soundChannelRequestIfEnabled(u32 handle, int arg1, int arg2);
int sysMemClear(void *ptr, int size);                  /* zero a block */
void *asdMemoryAlloc(int heap, int align, int arg2, int size, int arg4);
int asdTMTexTableLoadTmx(int type, int arg);
s32 whisperEffectDraw(u32 job);
void whisperEffectDestroy(u32 job);
s32 whisperAdvanceAnimations(u32 job);

extern WhisperAnimationView *g_whisperEffect;
/* The five lines' tables, back to back (read-only data): for each line three position keys, two blink keys
 * and its text (two-byte characters, frameCount of them, no terminator). */
extern const u8 g_whisperLineData[];

/* Starts the whisper effect: allocates its work area, loads its textures, sets the layer rates, the line
 * tables and random start phases and frames, then creates the effect's process and draw tasks and plays the
 * demon's whisper voice. */
void whisperEffectStart(u32 devilId)
{
    WhisperAnimationView *fx;
    s32 i;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\result\\WhisperEffect.cpp", 685);
    g_whisperEffect = (WhisperAnimationView *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(WhisperAnimationView), 1);
    sysMemClear(g_whisperEffect, sizeof(WhisperAnimationView));
    fx = g_whisperEffect;
    asdTMTexTableLoadTmx(0x2c, 0);
    for (i = 0; i < 5; i++) {
        asdTMTexLoadMainHeap(0x2c, i);
    }

    fx->opacity = 1.0f;
    fx->particles[0].period = 3000;
    fx->particles[0].rate = 0.16592593f;
    fx->particles[1].period = 2000;
    fx->particles[1].rate = 0.10666667f;
    fx->layers[0].period = 0;
    fx->layers[1].period = 0;
    fx->layers[2].period = 1000;
    fx->layers[2].rate = 0.09756097f;

    fx->lines[0].frameCount = 14;
    fx->lines[1].frameCount = 14;
    fx->lines[2].frameCount = 10;
    fx->lines[4].frameCount = 14;
    const u8 *data = g_whisperLineData;
    fx->lines[0].positions = (const WhisperPositionKey *)data;
    data += sizeof(WhisperPositionKey) * 3;
    fx->lines[0].blink = (const WhisperBlinkKey *)data;
    data += sizeof(WhisperBlinkKey) * 2;
    fx->lines[0].text = (const char *)data;
    data += fx->lines[0].frameCount * 2;
    fx->lines[1].positions = (const WhisperPositionKey *)data;
    data += sizeof(WhisperPositionKey) * 3;
    fx->lines[1].blink = (const WhisperBlinkKey *)data;
    data += sizeof(WhisperBlinkKey) * 2;
    fx->lines[1].text = (const char *)data;
    data += fx->lines[1].frameCount * 2;
    fx->lines[2].positions = (const WhisperPositionKey *)data;
    data += sizeof(WhisperPositionKey) * 3;
    fx->lines[2].blink = (const WhisperBlinkKey *)data;
    data += sizeof(WhisperBlinkKey) * 2;
    fx->lines[2].text = (const char *)data;
    data += fx->lines[2].frameCount * 2;
    fx->lines[3].positions = (const WhisperPositionKey *)data;
    data += sizeof(WhisperPositionKey) * 3;
    fx->lines[3].blink = (const WhisperBlinkKey *)data;
    data += sizeof(WhisperBlinkKey) * 2;
    fx->lines[3].text = (const char *)data;
    fx->lines[3].frameCount = 10;
    data += fx->lines[3].frameCount * 2;
    fx->lines[4].positions = (const WhisperPositionKey *)data;
    data += sizeof(WhisperPositionKey) * 3;
    fx->lines[4].blink = (const WhisperBlinkKey *)data;
    data += sizeof(WhisperBlinkKey) * 2;
    fx->lines[4].text = (const char *)data;

    for (u32 particle = 0; particle < 2; particle++) {
        fx->particles[particle].phase = (f32)randBetween(0, 0xff);
    }
    for (u32 line = 0; line < 5; line++) {
        fx->lines[line].frame = randBetween(0, fx->lines[line].frameCount - 1);
    }

    g_whisperEffect->handle = nkmBaseGetRecord((u16)devilId)->unk3A + 0x1000097;
    g_whisperEffect->task = asdProcessCreateSimple((const s8 *)"WhisperEffect CALC", 4, 0, 0, whisperAdvanceAnimations,
                                                   whisperEffectDestroy, (u32)g_whisperEffect);
    taskCreateDraw((const s8 *)"WhisperEffect DrawUpLeft", 0x81, 0, 0, whisperEffectDraw, NULL, (u32)g_whisperEffect,
                   (void *)g_whisperEffect->task);
    taskCreateDraw((const s8 *)"WhisperEffect DrawUpRight", 0xdd, 0, 0, whisperEffectDraw, NULL, (u32)g_whisperEffect,
                   (void *)g_whisperEffect->task);
    soundChannelStopAll(0);
    soundChannelRequestIfEnabled(g_whisperEffect->handle, 0, 60);
}

} /* extern "C" */
