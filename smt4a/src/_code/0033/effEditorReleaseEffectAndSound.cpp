#include "common.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {

void objectRegistryInsert(void *resource, s32 mode);
void asdEffectQueueRelease(void *entry, s32 mode);

/* Frees the editor's effect node and its resource (clearing them), then frees `resource`. */
void effEditorReleaseEffectAndSound(void *resource)
{
    if (g_effectEditor.node != NULL) {
        asdEffectQueueRelease(g_effectEditor.node, 3);
        g_effectEditor.node = NULL;
    }
    if (g_effectEditor.resource != NULL) {
        objectRegistryInsert(g_effectEditor.resource, 3);
        g_effectEditor.resource = NULL;
    }
    objectRegistryInsert(resource, 3);
}

} /* extern "C" */
