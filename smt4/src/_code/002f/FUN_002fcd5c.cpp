#include "common.h"

extern "C" {

typedef struct EffectEditor {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ void *nodeListOwner;
    /* 0x40 */ void *unk40;
} EffectEditor;

extern EffectEditor g_effectEditor;

void FUN_00247240(void);
void nodeListOwnerFree(void);

/* Frees the editor's two owned objects, if present. */
void FUN_002fcd5c(void)
{
    if (g_effectEditor.unk40 != NULL) {
        FUN_00247240();
        g_effectEditor.unk40 = NULL;
    }
    if (g_effectEditor.nodeListOwner != NULL) {
        nodeListOwnerFree();
        g_effectEditor.nodeListOwner = NULL;
    }
}

} /* extern "C" */
