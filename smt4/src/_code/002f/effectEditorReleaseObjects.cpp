#include "common.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {

void effectEditorObjectDestroy(void);
void nodeListOwnerFree(void);

/* Frees the editor's two owned objects, if present. */
void effectEditorReleaseObjects(void)
{
    if (g_effectEditor.request != NULL) {
        effectEditorObjectDestroy();
        g_effectEditor.request = NULL;
    }
    if (g_effectEditor.nodeList != NULL) {
        nodeListOwnerFree();
        g_effectEditor.nodeList = NULL;
    }
}

} /* extern "C" */
