/* NON_MATCHING: retail keeps separate release branches; the readable loop shares them and checks the updated pointer before dereferencing it. */
/* Polls deferred resource releases and removes entries whose update has completed. */
#include "common.h"

extern "C" void FUN_003965f0(void *object)
{
    struct Entry;
    struct Callbacks {
        void *unk00;
        void (*release)(Entry *entry);
        void *unk08;
        void (*update)(Entry *entry);
    };
    struct Entry {
        Callbacks *callbacks;
        u32 tracked;
        u8 flags;
    };
    struct ReleaseQueue {
        u8 unk00[0x10];
        s32 count;
        s32 pending;
        Entry *entries[32];
    };
    ReleaseQueue *queue = (ReleaseQueue *)object;
    for (s32 i = 0; i < 32; ++i) {
        Entry *entry = queue->entries[i];
        if (entry == NULL) {
            continue;
        }
        if (entry->flags & 1) {
            entry->callbacks->update(entry);
            entry = queue->entries[i];
            if (entry == NULL || (entry->flags & 1)) {
                continue;
            }
        }
        u32 tracked = entry->tracked;
        entry->callbacks->release(entry);
        queue->entries[i] = NULL;
        if (tracked == 0) {
            --queue->pending;
        }
        --queue->count;
    }
}
