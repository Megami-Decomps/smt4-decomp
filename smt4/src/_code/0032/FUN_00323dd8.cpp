#include "common.h"
#include "AsdSDK/EffectEditorSelectionTransfer.h"
#include "shard/W6_W6Match2_EffectEditor.h"

/* The effect editor state as seen by this callback: the word at 0x30. */

struct Obj323dd8Parent {
    u8 unk00[0xf0];
    f32 selection[1];
};

struct Obj323dd8 {
    u8 unk00[0xc];
    Obj323dd8Parent *parent;
};

extern "C" {
extern EffectEditorOptions g_effectEditorObjectTextureTable;

u32 effectEditorBindTexture(f32 *selection, u32 value, EffectEditorOptions *options);

/* Runs effectEditorBindTexture on the parent's selection with the editor's +0x30 value and the options table. */
void FUN_00323dd8(Obj323dd8 *obj)
{
    EffectEditorOptions *options = &g_effectEditorObjectTextureTable;
    effectEditorBindTexture(obj->parent->selection, (u32)g_effectEditor.texture, options);
}
}
