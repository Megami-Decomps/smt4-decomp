/* NON_MATCHING: retail keeps &field of each owned pointer in a saved register (add rN, work, #off) and the zero in r9, so every slot-clear store goes through that register; ours addresses the fields directly off the work pointer. */
#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

/* A loaded script and the two data files it ran from. */
struct ScriptResources {
    /* 0x0 */ void *files[2];
    /* 0x8 */ void *script;
};

/* A menu scene's work block as its teardown sees it. */
struct MenuSceneWork {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ u8 scene[0x26C];
    /* 0x28C */ void *slots[4];
    /* 0x29C */ u8 unk29C[0x304];
    /* 0x5A0 */ ScriptResources resources[3];
    /* 0x5C4 */ u8 unk5C4[0x74C];
    /* 0xD10 */ void *primaryModels[6];
    /* 0xD28 */ void *secondaryModels[6];
    /* 0xD40 */ u8 unkD40[0x26C];
    /* 0xFAC */ void *owner;
    /* 0xFB0 */ u8 unkFB0[8];
    /* 0xFB8 */ void *model;
};

extern "C" {

void placeWinRelease(void);
void asdMemFreeSlot(void *slot);
void asdTMTexTableReleaseNode(s32 id, s32 flag);
void asdTMTexTableFreeEntry(s32 id);
void FUN_002a46d0(void *scene);
void FUN_0014ca50(void *scene);
void FUN_0014ca58(void *scene);
void FUN_002a4bac(void *owner);
void asdMemFreeNonNull(void *memory);
void asdMdlManagerMarkDestroy(void *model);
void asdMdlManagerDestroy(void *model);
void asdModelSlotRelease(s32 slot);
void scrScriptProcessDestroy(void *script);
void asdMemFree(void *memory);
void FUN_002bff50(void);
void messageStatesSetFirst(u8 value);

/* Frees an allocation and clears the owning pointer. */
static inline void freeAndClear(void **memory)
{
    if (*memory != NULL) {
        asdMemFree(*memory);
        *memory = NULL;
    }
}

static inline void destroyScript(void **script)
{
    if (*script != NULL) {
        scrScriptProcessDestroy(*script);
        *script = NULL;
    }
}

static inline void releaseOwner(void **owner)
{
    if (*owner != NULL) {
        FUN_002a4bac(*owner);
        asdDebugHookPtr(*owner);
        if (*owner != NULL) {
            asdMemFreeNonNull((u8 *)asdDebugHookPass((u8 *)*owner + 0x4CC) - 0x4CC);
        }
        *owner = NULL;
    }
}

static inline void destroyManagedModel(void **model)
{
    asdMdlManagerMarkDestroy(*model);
    asdMdlManagerDestroy(*model);
    *model = NULL;
}

/* Releases everything the menu scene owns: slots, textures, models and script resources. */
void FUN_002a6fb8(MenuSceneWork *work)
{
    placeWinRelease();
    for (u32 i = 0; i < 4; i++) {
        if (work->slots[i] != NULL) {
            asdMemFreeSlot(work->slots[i]);
            work->slots[i] = NULL;
        }
    }
    asdTMTexTableReleaseNode(0x31, 0);
    asdTMTexTableFreeEntry(0x31);
    FUN_002a46d0(work->scene);
    FUN_0014ca50(work->scene);
    FUN_0014ca58(work->scene);
    releaseOwner(&work->owner);
    if (work->model != NULL) {
        destroyManagedModel(&work->model);
        asdModelSlotRelease(0);
    }
    for (u32 i = 0; i < 6; i++) {
        destroyManagedModel(&work->primaryModels[i]);
        destroyManagedModel(&work->secondaryModels[i]);
    }
    destroyScript(&work->resources[0].script);
    freeAndClear(&work->resources[0].files[0]);
    freeAndClear(&work->resources[0].files[1]);
    destroyScript(&work->resources[1].script);
    freeAndClear(&work->resources[1].files[0]);
    freeAndClear(&work->resources[1].files[1]);
    destroyScript(&work->resources[2].script);
    freeAndClear(&work->resources[2].files[0]);
    freeAndClear(&work->resources[2].files[1]);
    FUN_002bff50();
    messageStatesSetFirst(1);
}

} /* extern "C" */
