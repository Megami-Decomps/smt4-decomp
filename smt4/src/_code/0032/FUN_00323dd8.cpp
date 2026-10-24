/* NON_MATCHING: literal pool order: retail places the DAT_0044fce0 word before the g_effectEditor word. */
#include "common.h"
#include "AsdSDK/EffectEditorSelectionTransfer.h"

/* The effect editor state as seen by this callback: the word at 0x30. */
struct EffectEditorStateView {
    u8 unk00[0x30];
    u32 unk30;
};

struct Obj323dd8Parent {
    u8 unk00[0xf0];
    f32 selection[1];
};

struct Obj323dd8 {
    u8 unk00[0xc];
    Obj323dd8Parent *parent;
};

extern "C" {
extern EffectEditorStateView g_effectEditor;
extern EffectEditorOptions DAT_0044fce0;

u32 FUN_00242f94(f32 *selection, u32 value, EffectEditorOptions *options);

/* Runs FUN_00242f94 on the parent's selection with the editor's +0x30 value and the options table. */
void FUN_00323dd8(Obj323dd8 *obj)
{
    FUN_00242f94(obj->parent->selection, g_effectEditor.unk30, &DAT_0044fce0);
}
}
