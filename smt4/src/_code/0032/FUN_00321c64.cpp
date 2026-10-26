#include "common.h"

struct EffectEditorState {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ void *current;
};
extern "C" {
extern EffectEditorState g_effectEditor;
extern u8 DAT_00400002;
void effBlockSetBlobB(void *entry, u32 *value, u32 size, u32 mode);
/* Clears the current effect entry's scalar value. The returned constant 0x400002 lies inside the image, so retail names it as a data address (DAT_00400002). */
u32 FUN_00321c64()
{
    u32 value = 0;
    effBlockSetBlobB(g_effectEditor.current, &value, 4, 4);
    return reinterpret_cast<u32>(&DAT_00400002);
}
}
