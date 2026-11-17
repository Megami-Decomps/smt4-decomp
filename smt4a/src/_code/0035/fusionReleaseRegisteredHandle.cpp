#include "common.h"
#include "camp/Unite/UniteGlobals.h"
#include "shard/W4_Match1b_RegisteredHandle.h"

extern "C" void *g_handleRegistry;
extern "C" void ptrListRemoveClearOwner(void *registry, u32 id);

// Unregister and destroy the fusion screen's optional handle.
extern "C" void fusionReleaseRegisteredHandle()
{
    UniteWorkA *work = g_unite;
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
