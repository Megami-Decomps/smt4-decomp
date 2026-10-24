#include "common.h"

struct EffectEditorView {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ void *callback;
};

extern "C" {
extern EffectEditorView g_effectEditor;
void engineFreeCallback(void *callback);
}

extern "C" void FUN_0037cda4(void)
{
    if (g_effectEditor.callback != NULL) {
        engineFreeCallback(g_effectEditor.callback);
        g_effectEditor.callback = NULL;
    }
}
