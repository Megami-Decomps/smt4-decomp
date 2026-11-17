#include "common.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {

void resourceQueueDeferredDestroy(void *resource, s32 mode);
void registrationEntryInsert(void *entry, s32 mode);

/* Frees the editor's effect node and its resource (clearing them), then frees `resource`. */
void effEditorReleaseEffectAndSound(void *resource)
{
    if (g_effectEditor.node != NULL) {
        registrationEntryInsert(g_effectEditor.node, 3);
        g_effectEditor.node = NULL;
    }
    if (g_effectEditor.resource != NULL) {
        resourceQueueDeferredDestroy(g_effectEditor.resource, 3);
        g_effectEditor.resource = NULL;
    }
    resourceQueueDeferredDestroy(resource, 3);
}

} /* extern "C" */
