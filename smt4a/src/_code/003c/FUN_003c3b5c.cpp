/* NON_MATCHING: literal pool order: retail places the DAT_0059ee30 word before the g_effectEditor word. */
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
extern EffectEditorOptions DAT_0059ee30;

u32 FUN_0035ba3c(f32 *selection, u32 value, EffectEditorOptions *options);

/* Runs FUN_0035ba3c on the parent's selection with the editor's +0x30 value and the options table. */
void FUN_003c3b5c(Obj323dd8 *obj)
{
    FUN_0035ba3c(obj->parent->selection, g_effectEditor.unk30, &DAT_0059ee30);
}
}
