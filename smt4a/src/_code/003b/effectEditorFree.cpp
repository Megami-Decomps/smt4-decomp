#include "common.h"

extern "C" {

typedef struct EffectEditor {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ void *nodeList;
    /* 0x40 */ void *handleHolder;
} EffectEditor;

extern EffectEditor g_effectEditor;

extern int nodeListFree(void);
extern int handleHolderFree(void);

/* Frees the effect editor's handle holder and node list. */
void effectEditorFree(void)
{
    if (g_effectEditor.handleHolder != NULL) {
        handleHolderFree();
        g_effectEditor.handleHolder = NULL;
    }
    if (g_effectEditor.nodeList != NULL) {
        nodeListFree();
        g_effectEditor.nodeList = NULL;
    }
}

} /* extern "C" */
