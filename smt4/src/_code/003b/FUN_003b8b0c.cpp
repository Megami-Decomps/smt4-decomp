/* NON_MATCHING: the script slots are indexed through one resource array so each slot address is kept in r4 across its release call like retail (rows 79 vs 77); the work pointer lands in r6 instead of r5 and the first slot is addressed through an extra add. */
#include "camp/CampScriptCleanup.h"
#include "map/mapDepart.h"
#include "camp/Camp.h"

extern "C" {
extern GameState g_gameState;
void scrScriptProcessDestroy(void *process);
void asdMemFree(void *buffer);
void asdTMTexTableReleaseNode(u32 table, u32 node);
void FUN_002a4bac(u32 list);
void FUN_002636b0(void);
}

/* The script resource slots at 0xD6C: per set the messages, the script and the process, 0x28 bytes apart. */
struct CampScriptResources {
    u8 unk000[0xD6C];
    void *slots[13];
};
typedef char CampScriptResourcesOffsets[offsetof(CampScriptResources, slots) == 0xD6C ? 1 : -1];

static inline void releaseScriptProcess(CampScriptResources *resources, s32 index)
{
    if (resources->slots[index] != NULL) {
        scrScriptProcessDestroy(resources->slots[index]);
        resources->slots[index] = NULL;
    }
}
static inline void releaseScriptBuffer(CampScriptResources *resources, s32 index)
{
    if (resources->slots[index] != NULL) {
        asdMemFree(resources->slots[index]);
        resources->slots[index] = NULL;
    }
}
static inline void releaseScriptBufferAt(void **buffer)
{
    if (*buffer != NULL) {
        asdMemFree(*buffer);
        *buffer = NULL;
    }
}

// Release both script resource sets and any list buffers not retained across the camp transition.
extern "C" void FUN_003b8b0c(CampScriptCleanup *work)
{
    CampScriptResources *resources = (CampScriptResources *)work;
    releaseScriptProcess(resources, 2);
    releaseScriptBuffer(resources, 0);
    releaseScriptBuffer(resources, 1);
    releaseScriptProcess(resources, 12);
    releaseScriptBuffer(resources, 10);
    releaseScriptBuffer(resources, 11);
    asdTMTexTableReleaseNode(33, work->textureNode);
    campGetState();
    if (work->ownsList != 0 && g_gameState.campCleanup.retainCampResources == 0) {
        work->ownsList = 0;
        FUN_002a4bac(work->list);
        for (s32 index = 0; index < 10; ++index) {
            releaseScriptBufferAt(&work->buffers[index]);
        }
    }
    if (work->keepShared == 0) {
        FUN_002636b0();
    }
}
