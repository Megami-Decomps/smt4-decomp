/* NON_MATCHING: retail recomputes the work + 0x2000 base after asdMemFreeSlot; here it is reused. */
#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

typedef struct SharedResourceWork {
    /* 0x0000 */ u32 job;
    /* 0x0004 */ u8 unk0004[0x1388];
    /* 0x138C */ s16 effectId;
    /* 0x138E */ s16 modelCount;
    /* 0x1390 */ u8 unk1390[0xC98];
    /* 0x2028 */ void *model;
    /* 0x202C */ u8 unk202C[0x88];
    /* 0x20B4 */ u32 slot;
    /* 0x20B8 */ void *bufferB8;
    /* 0x20BC */ void *bufferBC;
    /* 0x20C0 */ u8 unk20C0[0xC];
    /* 0x20CC */ void *bufferCC;
} SharedResourceWork;

typedef struct SharedResource {
    /* 0x00 */ s8 refCount;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ SharedResourceWork *work;
} SharedResource;

extern SharedResource g_gameGlobals;

void asdMemFree(void *block);
void FUN_0038b3f8(s32 effectId, s32 arg);
void resourceReleaseReference(void *model);
void jobStop(u32 job, s32 arg);
void statusDownDestroy(void);

static __inline void sharedResourceFreeBuffers(SharedResourceWork *work)
{
    if (work->bufferB8 != NULL) {
        asdMemFree(work->bufferB8);
        work->bufferB8 = NULL;
    }
    if (work->bufferBC != NULL) {
        asdMemFree(work->bufferBC);
        work->bufferBC = NULL;
    }
    asdMemFreeSlot(reinterpret_cast<void **>(work->slot));
}

/* Drops a reference to the shared resources and frees them with the last one. */
void FUN_00333f6c(void)
{
    SharedResourceWork *work;

    if (--g_gameGlobals.refCount > 0) {
        return;
    }
    work = g_gameGlobals.work;
    sharedResourceFreeBuffers(work);
    if (work->bufferCC != NULL) {
        asdMemFree(work->bufferCC);
        work->bufferCC = NULL;
    }
    if (work->effectId != 0) {
        FUN_0038b3f8(work->effectId, 1);
    }
    if (work->modelCount > 0 && work->model != NULL) {
        resourceReleaseReference(work->model);
        work->model = NULL;
    }
    jobStop(work->job, 0);
    asdMemFree(work);
    g_gameGlobals.work = NULL;
    g_gameGlobals.refCount = 0;
    statusDownDestroy();
}

} /* extern "C" */
