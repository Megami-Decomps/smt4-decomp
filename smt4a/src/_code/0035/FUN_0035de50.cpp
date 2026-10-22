#include "common.h"
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W4_Match1b_RegisteredHandle.h"
#include <stddef.h>

typedef char CheckRegisteredHandleOffset[offsetof(UniteWork, registered.handle) == 0x920c ? 1 : -1];
typedef char CheckUniteWorkSize[sizeof(UniteWork) == 0x9454 ? 1 : -1];

extern "C" UniteWork *g_unite;
extern "C" void *g_handleRegistry;
extern "C" void ptrListRemoveClearOwner(void *registry, u32 id);

// Unregister and destroy the fusion screen's optional handle.
extern "C" void FUN_0035de50()
{
    UniteWork *work = g_unite;
    if (work == NULL)
        return;
    if (work->registered.handle) {
        ptrListRemoveClearOwner(g_handleRegistry, work->registered.handle->id);
        if (work->registered.handle) {
            delete work->registered.handle;
            work->registered.handle = NULL;
        }
    }
}
