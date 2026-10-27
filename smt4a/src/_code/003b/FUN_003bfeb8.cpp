#include "common.h"

struct EffectEditorState {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ void *current;
};
extern "C" {
extern EffectEditorState g_effectEditor;
void effBlockCopyDataB(void *entry, u32 *value, u32 size, u32 mode);
/* Clears the current effect entry's scalar value. */
u32 FUN_003bfeb8()
{
    u32 value = 0;
    effBlockCopyDataB(g_effectEditor.current, &value, 4, 4);
    return 0x400002;
}
}
