/* NON_MATCHING: path buffer/outgoing argument reuse and cold branch placement differ; -O2 candidate. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

struct MovieProcess {
    u32 process; // 0x00
    u32 leftDraw; // 0x04
    u32 rightDraw; // 0x08
    u32 unk0c;
    u32 state; // 0x10
    u32 unk14;
    u8 playing; // 0x18
    u8 unk19;
    u8 options; // 0x1a
    char path[0x40]; // 0x1b
    u8 idle; // 0x5b
    u8 unk5c[0x10];
    f32 elapsed; // 0x6c
    u32 frame; // 0x70
    u8 special; // 0x74
    u8 unk75;
    u8 unk76;
    u8 unk77;
    u8 unk78;
    u8 preset; // 0x79
    u16 unk7a;
};
struct MovieProcessState {
    u32 unk00;
    MovieProcess *work;
};
extern "C" {
extern MovieProcessState g_mobiclipProcess;
extern const u8 DAT_005329a0[];
extern const char DAT_005329d4[];
extern const char DAT_005329cc[];
extern const char DAT_005329c0[];
extern const char DAT_00532a48[];
extern const char DAT_00532a24[];
extern const char *DAT_00588040[];
void mobiclipProcessUpdate();
void mobiclipProcessDestroy();
void FUN_002c3038();
void *asdMemoryAllocTracked(u32, u32, u32, u32, u32);
void sysMemClear(void *, u32);
u32 asdProcessCreateSimple(const char *, u32, u32, u32, void (*)(), void (*)(), MovieProcess *);
u32 taskCreateDraw(const char *, u32, u32, u32, void (*)(), void (*)(), MovieProcess *, u32);
s32 asdLoadFileGetUseRawPaths();
void asdGxPresetRequest(u32);
void textFormatBuffer(char *, const char *, ...);
void libc_strcpy(char *, const char *);

// Create the movie process and its per-screen drawing tasks.
u32 mobiclipProcessCreate(s32 movie, u8 options)
{
    asdDebugTrace(DAT_005329d4, 836);
    MovieProcess *work = (MovieProcess *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(MovieProcess), 1);
    g_mobiclipProcess.work = work;
    sysMemClear(work, sizeof(MovieProcess));
    work->process = asdProcessCreateSimple(DAT_005329cc, 4, 0, 0, mobiclipProcessUpdate, mobiclipProcessDestroy, work);
    work->leftDraw = taskCreateDraw(DAT_005329c0, 0x7e, 0, 0, FUN_002c3038, NULL, work, work->process);
    if (!DAT_005329a0[movie])
        work->rightDraw = taskCreateDraw((const char *)DAT_005329a0 + 0x78, 0xda, 0, 0, FUN_002c3038, NULL, work, work->process);
    char path[64];
    if (asdLoadFileGetUseRawPaths()) {
        work->state = 14;
    } else if (movie != -1) {
        if (DAT_005329a0[movie] != 1) {
            work->preset = 0;
        } else {
            asdGxPresetRequest(0);
            work->preset = 1;
        }
        if (movie != 3) {
            work->special = 0;
            textFormatBuffer(path, DAT_00532a48 - 16, DAT_00532a48, DAT_00588040[movie]);
        } else {
            work->special = 1;
            work->unk75 = 0;
            work->unk76 = 0;
            textFormatBuffer(path, DAT_00532a24, DAT_00588040[3]);
        }
        work->state = 2;
        libc_strcpy(work->path, path);
        work->idle = 0;
        work->playing = 0;
        work->elapsed = 0.0f;
        work->frame = 0;
        work->unk78 = 0;
        work->unk77 = 0;
    } else {
        work->state = 0;
        work->idle = 1;
        work->playing = 0;
        work->unk19 = 0;
    }
    work->options = options;
    return work->process;
}
}
