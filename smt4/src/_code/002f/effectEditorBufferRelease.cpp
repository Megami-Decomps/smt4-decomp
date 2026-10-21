#include "common.h"

extern "C" {

int asdMemoryFreeLocked(void);

extern struct {
    u8 unk00[0x48];
    int unk48;
} g_effectEditor;

void effectEditorBufferRelease(void)
{
    if (g_effectEditor.unk48 != 0) {
        asdMemoryFreeLocked();
        g_effectEditor.unk48 = 0;
    }
}

} /* extern "C" */
