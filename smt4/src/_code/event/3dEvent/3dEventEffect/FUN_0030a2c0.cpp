/* NON_MATCHING: initialization uses a small byte-clear helper and position conversions use different VFP transfers. */
#include "event/EventEplEffect.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_004035d4[];
extern const char DAT_004035c4[];
extern const char DAT_004035b0[];
void *asdMemAlloc(u32, u32, u32, u32, u32);
u32 effectJobUpdateSpawn(void);
void eventWorkRelease(void);
s32 FUN_002248b8(u32 job);
u32 asdProcessCreateSimple(const char *, s32, s32, s32, u32 (*)(void), void (*)(void), void *);
void taskCreateDraw(const char *, s32, s32, s32, s32 (*)(u32), s32, void *, u32);
void asdLoadFileAsyncNoCallback(const char *, const void **, s32, u32);

/* Create an event effect with two draw passes and asynchronously load its definition. */
u32 FUN_0030a2c0(const char *path, s32 x, s32 y, s32 z)
{
    asdDebugTrace(DAT_004035d4, 112);
    EventEplEffectWork *work = (EventEplEffectWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(EventEplEffectWork), 1);
    work->job = 0;
    work->phase = 0;
    work->pending = NULL;
    work->current = NULL;
    work->started = 0;
    for (s32 i = 0; i < 7; ++i) work->unk11[i] = 0;
    work->resource = 0;
    for (s32 i = 0; i < 4; ++i) work->translation[i] = 0.0f;
    work->job = asdProcessCreateSimple(DAT_004035c4, 2, 0, 0,
        effectJobUpdateSpawn, eventWorkRelease, work);
    taskCreateDraw(DAT_004035b0, 0x75, 0, 0, FUN_002248b8, 0, work, work->job);
    taskCreateDraw(DAT_004035b0, 0xD3, 0, 0, FUN_002248b8, 0, work, work->job);
    work->translation[0] = (f32)x;
    work->translation[1] = (f32)y;
    work->translation[2] = (f32)z;
    asdLoadFileAsyncNoCallback(path, &work->pending, 1, 0x80);
    return work->job;
}
}
