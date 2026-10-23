/* NON_MATCHING: global work-pointer store scheduling, pooled format addressing and playback-flag branch layout differ. */
#include "mobiclip_ctrl/MobiclipCtrlProcess.h"
#include "sys/Task.h"
#include "AsdSDK/AsdDebug.h"

// IV allocates 0x74 bytes; the shared process-work view also describes a longer variant.
struct MobiclipProcessCreateViewIV {
    u32 process;
    u32 leftDrawTask;
    u32 rightDrawTask;
    u32 unk0C;
    u32 state;
    u32 unk14;
    u8 specialMovie;
    u8 alternatePlayback;
    u8 option;
    char path[0x40];
    u8 standby;
    u8 unk5C[0x10];
    f32 frameTime;
    u32 frame;
};
extern "C" {
extern MobiclipProcessGlobals g_mobiclipProcess;
extern const char DAT_00404e84[];
extern const char DAT_00404e7c[]; // "Move"
extern const char DAT_00404e70[]; // "Move NCL"
extern const char DAT_00404e64[]; // "Move NCR"
extern const char DAT_00404ed8[]; // Movie directory.
extern const char DAT_00404ec8[]; // Shared "%s/%s.moflex" format.
extern const char* DAT_0044d060[];
void* asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 option);
void memClear(void* data, s32 size);
u32 asdProcessCreateSimple(const char* name, u32 priority, u32 size, u32 flags,
    TaskFunc update, TaskFunc destroy, void* data);
u32 taskCreateDraw(const char* name, u32 priority, u32 size, u32 flags,
    TaskFunc update, TaskFunc destroy, void* data, u32 parent);
void FUN_001dd280(void* work);
void mobiclipProcessDestroy(void* work);
void FUN_00201830(void* work);
s32 asdLoadFileGetUseRawPaths(void);
void textFormatBuffer(char* destination, const char* format, ...);
char* libc_strcpy(char* destination, const char* source);

u32 FUN_002ef6b8(s32 movie, u8 option)
{
    asdDebugTrace(DAT_00404e84, 524);
    MobiclipProcessCreateViewIV* work = static_cast<MobiclipProcessCreateViewIV*>(
        asdMemAlloc(0x100, 0x100, 0, sizeof(MobiclipProcessCreateViewIV), 1));
    g_mobiclipProcess.work = reinterpret_cast<MobiclipProcessWork*>(work);
    memClear(work, sizeof(MobiclipProcessCreateViewIV));
    work->process = asdProcessCreateSimple(DAT_00404e7c, 2, 0, 0,
        FUN_001dd280, mobiclipProcessDestroy, work);
    work->leftDrawTask = taskCreateDraw(DAT_00404e70, 0x7A, 0, 0,
        FUN_00201830, 0, work, work->process);
    work->rightDrawTask = taskCreateDraw(DAT_00404e64, 0xD8, 0, 0,
        FUN_00201830, 0, work, work->process);
    if (asdLoadFileGetUseRawPaths()) {
        work->state = 9;
    } else if (movie != -1) {
        char path[0x40];
        textFormatBuffer(path, DAT_00404ec8, DAT_00404ed8, DAT_0044d060[movie]);
        work->state = 2;
        libc_strcpy(work->path, path);
        work->standby = 0;
        work->specialMovie = 0;
        work->frameTime = 0.0f;
        work->frame = 0;
        if (movie == 3) {
            work->specialMovie = 1;
        } else if (movie == 24 || movie == 25 || movie == 11 || movie == 13 || movie == 16) {
            work->alternatePlayback = 1;
        }
    } else {
        work->state = 0;
        work->standby = 1;
        work->specialMovie = 0;
        work->alternatePlayback = 0;
    }
    work->option = option;
    return work->process;
}
}
