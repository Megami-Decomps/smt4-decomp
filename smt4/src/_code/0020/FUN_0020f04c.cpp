/* NON_MATCHING: readable rewrite compiles (210 vs 201 rows); free-call arguments inferred; retail uses a smaller callee-saved set and inlines the slot-release checks differently */
#include "common.h"
#include "nn/svc.h"
#include "AsdSDK/AsdMemAlloc.h"

// Battle main state, indexed by 32-bit word; only the members released here are named.
enum BattleWord {
    BTL_WORD_JOB = 0,               // job handle of the battle process
    BTL_WORD_ACTIVE_FLAG = 0x18,    // byte: teardown started
    BTL_WORD_PARTS_MODEL = 0x10e5,
    BTL_WORD_THREAD = 0x127b,       // worker thread handle
    BTL_WORD_THREAD_DONE = 0x127c,  // byte
    BTL_WORD_THREAD_BUFFER = 0x127d,
    BTL_WORD_THREAD_STACK = 0x127e,
    BTL_WORD_RESULT_ID = 0x1282
};
struct BattleMainState {
    u32 w[0x1294];
};

extern "C" {

extern BattleMainState* g_btlMainState;
extern s32 DAT_00435d94;
extern s32 DAT_00435d98;
extern s32 g_btlUiBlock;

void btlActionFreeData(void);
void FUN_0026a958(u8 value);
void FUN_001e1874(BattleMainState* state);
void scrResultStopJobAndReleaseUi(void);
u32 FUN_002c40f8(s32* signalled, s32* handles, s32 count, s32 waitAll, u32 timeoutLow, u32 timeoutHigh);
void FUN_002c526c(void);
void nn_os_Thread_FinalizeImpl(u32* thread);
void FUN_002c3f5c(u32 object);
void asdMemFreeNonNull(u32 object);
void mdlPartsRelease(void *model);
void FUN_00338fb0(BattleMainState* state);
void FUN_00337a34(BattleMainState* state);
void scrScriptProcessDestroy(u32 process);
void FUN_00294f64(u32 object);
void textureSlotsReleaseAll(void);
void btlTalkBustUpDestroy(void);
void infoWinStartTimer(s32 arg);
s32 jobIsValid(u32 job);
void jobStop(u32 job, s32 arg);

struct BattleVirtual {
    void (**vtable)(BattleVirtual* self);
};

// Frees one owned block and clears its slot.
static void freeSlot(u32* slot)
{
    if (*slot != 0) {
        asdMemFree((void *)(*slot));
        *slot = 0;
    }
}

// Tears down the battle: stops its worker thread and releases models, scripts, buffers and the state itself.
void FUN_0020f04c(void)
{
    BattleMainState* state = g_btlMainState;
    u32* w = state->w;
    *reinterpret_cast<u8*>(&w[BTL_WORD_ACTIVE_FLAG]) = 1;
    btlActionFreeData();
    FUN_0026a958(0);
    if (g_btlUiBlock != 0) FUN_001e1874(state);
    scrResultStopJobAndReleaseUi();

    s32 signalled;
    s32 handle = w[BTL_WORD_THREAD];
    if (FUN_002c40f8(&signalled, &handle, 1, 0, 0xffffffff, 0xffffffff) >> 31) FUN_002c526c();
    *reinterpret_cast<u8*>(&w[BTL_WORD_THREAD_DONE]) = 1;
    nn_os_Thread_FinalizeImpl(&w[BTL_WORD_THREAD]);
    if (w[BTL_WORD_THREAD] != 0) {
        nn::svc::CloseHandle(w[BTL_WORD_THREAD]);
        w[BTL_WORD_THREAD] = 0;
    }
    if (w[BTL_WORD_THREAD_STACK] != 0) {
        FUN_002c3f5c(w[BTL_WORD_THREAD_STACK]);
        u32 stack = w[BTL_WORD_THREAD_STACK];
        if (stack != 0) {
            FUN_002c3f5c(stack);
            asdMemFreeNonNull(stack);
        }
        w[BTL_WORD_THREAD_STACK] = 0;
    }
    freeSlot(&w[BTL_WORD_THREAD_BUFFER]);
    w[BTL_WORD_RESULT_ID] = 0xffffffff;

    if (w[BTL_WORD_PARTS_MODEL] != 0) {
        mdlPartsRelease(reinterpret_cast<void *>(w[BTL_WORD_PARTS_MODEL]));
        BattleVirtual* model = reinterpret_cast<BattleVirtual*>(w[BTL_WORD_PARTS_MODEL]);
        if (model != NULL) model->vtable[1](model);
        w[BTL_WORD_PARTS_MODEL] = 0;
    }
    FUN_00338fb0(state);
    FUN_00337a34(state);

    static const u16 clearedOnly[] = { 0x88f, 0x88e, 0x88c, 0x88d, 0x890, 0x891, 0x892, 0x893 };
    for (u32 i = 0; i < sizeof(clearedOnly) / sizeof(clearedOnly[0]); i++) {
        if (w[clearedOnly[i]] != 0) w[clearedOnly[i]] = 0;
    }
    if (w[0x895] != 0) {
        scrScriptProcessDestroy(w[0x895]);
        w[0x895] = 0;
    }
    if (w[0x894] != 0) w[0x894] = 0;
    freeSlot(&w[0x1291]);
    if (w[0x1292] != 0) {
        scrScriptProcessDestroy(w[0x1292]);
        w[0x1292] = 0;
    }
    w[0x1293] = 0;
    freeSlot(&w[0x8c4]);
    freeSlot(&w[0x7a2]);
    freeSlot(&w[0x7f0]);
    freeSlot(&w[0x7a6]);
    freeSlot(&w[0x7ef]);
    if (DAT_00435d94 != 0) {
        asdMemFree((void *)(DAT_00435d94));
        DAT_00435d94 = 0;
    }
    if (DAT_00435d98 != 0) {
        asdMemFree((void *)(DAT_00435d98));
        DAT_00435d98 = 0;
    }
    for (s32 i = 0; i < 0x2a; i++) {
        if (w[0x84d + i] != 0) {
            FUN_00294f64(w[0x84d + i]);
            w[0x84d + i] = 0;
        }
    }
    textureSlotsReleaseAll();
    btlTalkBustUpDestroy();
    infoWinStartTimer(1);
    if (jobIsValid(w[BTL_WORD_JOB])) jobStop(w[BTL_WORD_JOB], 0);
    if (g_btlMainState != NULL) {
        asdMemFree((void *)(reinterpret_cast<u32>(g_btlMainState)));
        g_btlMainState = NULL;
    }
}

} /* extern "C" */
