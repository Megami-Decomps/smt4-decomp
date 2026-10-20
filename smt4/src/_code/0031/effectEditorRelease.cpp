#include "common.h"

extern "C" {

typedef struct EffectEditor0031baa4 {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ void *nodeList;
    /* 0x40 */ void *object;
} EffectEditor0031baa4;

void nodeListOwnerFree(void);
void FUN_00247240(void);

extern EffectEditor0031baa4 g_effectEditor; /* 0x44ea80 */

/* Releases the effect editor's object and node list. */
void effectEditorRelease(void)
{
    if (g_effectEditor.object != NULL) {
        FUN_00247240();
        g_effectEditor.object = NULL;
    }
    if (g_effectEditor.nodeList != NULL) {
        nodeListOwnerFree();
        g_effectEditor.nodeList = NULL;
    }
}

} /* extern "C" */
