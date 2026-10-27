/* NON_MATCHING: the callee-saved registers of the constants 1, 0 and 0x19a2 are allocated in another order (retail r7/r6/r8), retail branches `bpl` to the continuation after a failed delete check where the build branches `bmi` to the failure report, and armcc folds the 260-279 and 280-334 description tests into unsigned subtractions that retail keeps as separate compares (189 vs 193 rows). */
#include "common.h"
#include "nn/Result.h"
#include "shard/Sys43e310.h"

/* The save worker's request as this function sees it: the kind byte and, at 0x54, a flag byte. */
struct SaveErrorRequest {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01[0x53];
    /* 0x54 */ u8 reported;
};

/* g_saveLoadThread beyond its shared prefix: the busy and result flags and one word. */
struct SaveLoadThreadStateView {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 busy;
    /* 0x02 */ u8 succeeded;
    /* 0x03 */ u8 unk03[9];
    /* 0x0C */ u32 unk0c;
};

/* Filesystem (module 17) result description ranges. */
static __inline bool fsResultInRange100(nn::Result result)
{
    return nnResultModule(result) == 17 && nnResultDescriptionBits(result) >= 100 && nnResultDescriptionBits(result) <= 179;
}
static __inline bool fsResultInRange200(nn::Result result)
{
    return nnResultModule(result) == 17 && nnResultDescriptionBits(result) >= 200 && nnResultDescriptionBits(result) <= 219;
}
static __inline bool fsResultInRange230(nn::Result result)
{
    return nnResultModule(result) == 17 && nnResultDescriptionBits(result) >= 230 && nnResultDescriptionBits(result) < 340;
}
static __inline bool fsResultInRange340(nn::Result result)
{
    return nnResultModule(result) == 17 && nnResultDescriptionBits(result) >= 340 && nnResultDescriptionBits(result) < 360;
}
static __inline bool fsResultInRange360(nn::Result result)
{
    return nnResultModule(result) == 17 && nnResultDescriptionBits(result) >= 360 && nnResultDescriptionBits(result) <= 389;
}
static __inline bool fsResultInRange390(nn::Result result)
{
    return nnResultModule(result) == 17 && nnResultDescriptionBits(result) >= 390 && nnResultDescriptionBits(result) < 400;
}

struct LazyScriptState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ void *process;
};

extern "C" {
extern LazyScriptState g_lazyScriptState;
s32 FUN_00138cb4(void);
s32 FUN_001386b4(void);
nn::Result FUN_0025cb5c(u32 id, u32 flag);
void scrScriptProcessStartEntry(void *process, u32 index);
nn::Result FUN_00280ad4(u32 id, u32 flag, u32 size, u32 mode, ...);
nn::Result nn_fs_DeleteExtSaveData(u32 id, u32 flag);
void FUN_003cc97c(SaveErrorRequest *request, u32 code);

/* Saves/loads the extra save data; on failure maps the result's description range to an error code. */
void FUN_00349e60(SaveErrorRequest *request)
{
    reinterpret_cast<SaveLoadThreadStateView &>(g_saveLoadThread).busy = 1;
    reinterpret_cast<SaveLoadThreadStateView &>(g_saveLoadThread).succeeded = 0;
    if (FUN_00138cb4() != 0) {
        FUN_001386b4();
    }
    nn::Result result = FUN_0025cb5c(0x19A2, 0);
    u32 failed = result & 0x80000000;
    if ((s32)failed < 0) {
        reinterpret_cast<SaveLoadThreadStateView &>(g_saveLoadThread).busy = 0;
        if (fsResultInRange100(result)) {
            if (nnResultDescriptionBits(result) >= 130) {
                if (request->kind == 5) {
                    return;
                }
                FUN_003cc97c(request, 8);
                return;
            }
            if (request->kind == 3) {
                FUN_003cc97c(request, 23);
                return;
            }
            FUN_003cc97c(request, 15);
        } else if (fsResultInRange340(result)) {
            FUN_003cc97c(request, 9);
            nn::Result deleted = nn_fs_DeleteExtSaveData(0x19A2, 0);
            u32 deleteFailed = deleted & 0x80000000;
            if ((s32)deleteFailed < 0) {
                FUN_003cc97c(request, 14);
                return;
            }
        } else if (fsResultInRange360(result)) {
            FUN_003cc97c(request, 10);
            return;
        } else if (fsResultInRange390(result)) {
            FUN_003cc97c(request, 11);
            nn::Result deleted = nn_fs_DeleteExtSaveData(0x19A2, 0);
            u32 deleteFailed = deleted & 0x80000000;
            if ((s32)deleteFailed < 0) {
                FUN_003cc97c(request, 14);
                return;
            }
        } else if (fsResultInRange230(result)) {
            s32 description = nnResultDescriptionBits(result);
            if (description >= 260 && description < 280) {
                FUN_003cc97c(request, 13);
            } else if (description >= 280 && description <= 334) {
                FUN_003cc97c(request, 12);
            } else {
                FUN_003cc97c(request, 13);
            }
            return;
        } else {
            FUN_003cc97c(request, 14);
            return;
        }
        request->reported = 1;
        scrScriptProcessStartEntry(g_lazyScriptState.process, 16);
        nn::Result second = FUN_00280ad4(0x19A2, 0, 0x100, 2, reinterpret_cast<SaveLoadThreadStateView *>(&g_saveLoadThread)->unk0c);
        u32 secondFailed = second & 0x80000000;
        if ((s32)secondFailed < 0) {
            u32 code;
            if (fsResultInRange200(second)) {
                code = 18;
            } else if (fsResultInRange340(second)) {
                code = 19;
            } else if (fsResultInRange230(second)) {
                s32 description = nnResultDescriptionBits(second);
                if (description >= 260 && description < 280) {
                    code = 20;
                } else if (description >= 280 && description <= 334) {
                    code = 21;
                } else {
                    code = 22;
                }
            } else {
                code = 24;
            }
            FUN_003cc97c(request, code);
            return;
        }
        FUN_003cc97c(request, 17);
        reinterpret_cast<SaveLoadThreadStateView &>(g_saveLoadThread).busy = 1;
        reinterpret_cast<SaveLoadThreadStateView &>(g_saveLoadThread).succeeded = 1;
    }
}

} /* extern "C" */
