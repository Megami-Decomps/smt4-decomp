#include "common.h"

struct SaveLoadResources {
    void *font; // 0x00
    void *messages; // 0x04
};

extern "C" {
extern SaveLoadResources g_lazyScriptState;
void asdLoadFileAsyncSimple(const char *path, void **resource, s32 mode);

// Lazily request the save/load screen font and message resources.
void saveLoadEnsureResources(void)
{
    if (g_lazyScriptState.font == NULL) {
        asdLoadFileAsyncSimple("saveLoadER/saveLoadER.bf", &g_lazyScriptState.font, 1);
    }
    if (g_lazyScriptState.messages == NULL) {
        asdLoadFileAsyncSimple("saveLoadER/saveLoadER.mbm", &g_lazyScriptState.messages, 1);
    }
}
}
