#include "common.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {

extern int nodeListFree(void);
extern int handleHolderFree(void);

/* Frees the effect editor's handle holder and node list. */
void effectEditorFree(void)
{
    if (g_effectEditor.request != NULL) {
        handleHolderFree();
        g_effectEditor.request = NULL;
    }
    if (g_effectEditor.nodeList != NULL) {
        nodeListFree();
        g_effectEditor.nodeList = NULL;
    }
}

} /* extern "C" */
