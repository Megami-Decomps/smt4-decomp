#include "common.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {

void handleHolderFree(void *holder);
void nodeListFree(void *nodes);

void effEditorReleaseResources(void)
{
    if (g_effectEditor.request != NULL) {
        handleHolderFree(g_effectEditor.request);
        g_effectEditor.request = NULL;
    }
    if (g_effectEditor.nodeList != NULL) {
        nodeListFree(g_effectEditor.nodeList);
        g_effectEditor.nodeList = NULL;
    }
}

} /* extern "C" */
