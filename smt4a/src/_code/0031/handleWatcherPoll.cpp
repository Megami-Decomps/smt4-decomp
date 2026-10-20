#include "shard/Shard0031.h"

extern "C" {

extern u8 FUN_00306d0e(void *handle, u8 index, u32 mode);

/* Clears `pending` once the source's handle reports ready. */
void handleWatcherPoll(HandleWatcher *watcher)
{
    HandleSource *source;
    void *handle;

    if (watcher->pending != 0) {
        source = watcher->source;
        handle = source->handle;
        if (handle != NULL) {
            watcher->pending = FUN_00306d0e(handle, source->index, 1) ^ 1;
        }
    }
}

} /* extern "C" */
