#include "common.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {

void nodeListOwnerFree(void);
void effectEditorObjectDestroy(void);

/* Releases the effect editor's object and node list. */
void effectEditorRelease(void)
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
