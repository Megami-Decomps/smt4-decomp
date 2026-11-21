/* NON_MATCHING: 70 lines: retail keeps every NULL test of the registry walk as its own branch (a zero hoisted into r5 for the end-of-list result, each exit joining one entry != NULL test) where this build predicates and merges them. */
#include "nn/Result.h"
#include "nn/os/Handle.h"
#include "sys/HandleWait.h"

struct ModelRegistryLink {
    ModelRegistryLink *next;     // 0x00
    ModelRegistryLink *previous; // 0x04
};

struct ModelRegistryEntry {
    virtual void FUN_0011cd24_dispatch(void) = 0;
    ModelRegistryLink link; // 0x04
    u32 parameter;          // 0x0c
};

static __inline ModelRegistryEntry *modelRegistryGetEntry(ModelRegistryLink *link)
{
    return link != NULL ? (ModelRegistryEntry *)((u8 *)link - 4) : NULL;
}

static __inline ModelRegistryLink *modelRegistryGetLink(ModelRegistryEntry *entry)
{
    return entry != NULL ? &entry->link : NULL;
}

extern "C" {

extern NnOsHandle g_modelWorkHandle;
extern ModelRegistryLink *g_modelWorkList;

s32 FUN_00129684(u32 *key);
void asdFatalError(void);

/* Model registry worker thread: waits for a request, then runs the registered entry it names. */
__declspec(noreturn) void FUN_0011cd24(void)
{
    for (;;) {
        handleWait(g_modelWorkHandle.handle, -1);
        /* The request key's scope ends before the next wait: retail gives it the wait's stack-argument slot. */
        {
            u32 key;
            s32 result = FUN_00129684(&key);
            if (nnResultIsSuccess(result)) {
                ModelRegistryEntry *entry = g_modelWorkList != NULL ? modelRegistryGetEntry(g_modelWorkList) : NULL;
                while (entry != NULL && entry->parameter != key) {
                    /* The last entry is re-read from the list head at every step. */
                    if (entry == (g_modelWorkList != NULL ? modelRegistryGetEntry(g_modelWorkList->next) : NULL)) {
                        entry = NULL;
                        break;
                    }
                    entry = modelRegistryGetEntry(modelRegistryGetLink(entry)->previous);
                }
                if (entry != NULL) {
                    entry->FUN_0011cd24_dispatch();
                }
                result = 0;
            }
            if (nnResultIsFailure(result)) {
                asdFatalError();
            }
        }
    }
}

} /* extern "C" */
