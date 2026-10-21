/* NON_MATCHING: retail parameter lifetime, address formation or grouped-store selection differs. */
#include "common.h"

struct EffectEditorState {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ void *current;
};
extern "C" {
extern EffectEditorState g_effectEditor;
void FUN_00272204(void *entry, u32 *value, u32 size, u32 mode, u32 reserved);
/* Clears the current effect entry's scalar value. */
u32 FUN_003bfeb8()
{
    u32 value = 0;
    FUN_00272204(g_effectEditor.current, &value, 4, 4, 0);
    return 0x400002;
}
}
