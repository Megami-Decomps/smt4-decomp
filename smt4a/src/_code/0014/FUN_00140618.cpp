#include "shard/JobWork.h"
#include "camp/RenderCtx.h"
#include "Model/MoriModelShadowMap.h"

// Apocalypse's capture controls are not at the offsets used by the shared IV work prefix.
struct CaptureWorkViewA {
    u8 unk0000[8];
    JobSurface *surface;
    u8 unk000c[0x1408];
    s8 enabled;
    u8 unk1415;
    u8 result;
    u8 unk1417;
    s8 captured;
    s8 skipped;
    u8 unk141a[0x33];
    s8 available;
};
typedef char CaptureWorkViewOffsetsCheck[offsetof(CaptureWorkViewA, surface) == 8 &&
    offsetof(CaptureWorkViewA, enabled) == 0x1414 &&
    offsetof(CaptureWorkViewA, result) == 0x1416 &&
    offsetof(CaptureWorkViewA, captured) == 0x1418 &&
    offsetof(CaptureWorkViewA, skipped) == 0x1419 &&
    offsetof(CaptureWorkViewA, available) == 0x144d ? 1 : -1];

extern "C" {
void *stateValuesGetBySelector(u32 selector);
u8 FUN_00154edc(u32 selector, JobSurface *surface);
void surfaceCopy(JobSurface *destination, JobSurface *source);

s32 FUN_00140618(u32 job)
{
    CaptureWorkViewA *work = (CaptureWorkViewA *)jobGetWork(job);
    if (stateValuesGetBySelector(0) != 0) {
        work->skipped = 1;
        return 0;
    }
    if (!work->enabled) {
        return 0;
    }
    if (work->captured) {
        return 0;
    }
    if (work->skipped) {
        return 0;
    }
    if (!work->available) {
        return 0;
    }
    FUN_00157558(g_renderCtx);
    work->surface->width = 512;
    work->surface->height = 512;
    work->result = FUN_00154edc(0, work->surface);
    surfaceCopy(work->surface, work->surface);
    work->surface->width >>= 1;
    work->surface->height >>= 1;
    work->captured = 1;
    return 0;
}
}
