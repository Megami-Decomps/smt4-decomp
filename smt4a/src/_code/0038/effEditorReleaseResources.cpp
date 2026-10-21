#include "common.h"

extern "C" {

struct EffectEditor { u8 unk00[0x3c]; void *nodes; void *holder; };
extern EffectEditor g_effectEditor;
void handleHolderFree(void *holder);
void nodeListFree(void *nodes);

void effEditorReleaseResources(void)
{
    if (g_effectEditor.holder != NULL) {
        handleHolderFree(g_effectEditor.holder);
        g_effectEditor.holder = NULL;
    }
    if (g_effectEditor.nodes != NULL) {
        nodeListFree(g_effectEditor.nodes);
        g_effectEditor.nodes = NULL;
    }
}

} /* extern "C" */
