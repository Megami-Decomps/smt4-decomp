#include "shard/JobWork.h"
#include "title/titleMain.h"

struct FrameReadinessView {
    u8 unk00[0xdc];
    u8 active;
    u8 ready;
    u8 unkde[7];
    u8 surfaceReady;
};

struct FrameCompletionView {
    u8 unk0000[0xe00];
    FrameReadinessView flags; // 0xe00
    u8 unkee6[0xf2];
    u8 blocked; // 0xfd8
    u8 unkfd9[3];
    JobSurface *surface; // 0xfdc
};

struct Screen2c39a4;

extern "C" {
extern TitleScene *g_titleScene;
void FUN_002c39a4(Screen2c39a4 *screen);
void FUN_00117da4(s32 mode);

// Refresh the title layout and process the prepared frame surface once its gates permit.
u32 FUN_001081b0(void)
{
    FrameCompletionView *work = reinterpret_cast<FrameCompletionView *>(jobGetWork());
    const FrameReadinessView &flags = work->flags;
    if (flags.active && flags.ready && flags.surfaceReady &&
        work->surface != NULL && !work->blocked) {
        FUN_002c39a4(reinterpret_cast<Screen2c39a4 *>(g_titleScene));
        FUN_00117da4(1);
        return 0;
    }
    return 0;
}
}
