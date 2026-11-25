/* NON_MATCHING: fdiff reproduces the instructions, but the editor templates are retail .data
 * objects holding menu tables and code/string pointers, not the zero-filled stand-ins below. */
#include "ui/UiSpriteApi.h"
#include "common.h"
#include "shard/W6_W6Match2_EffectEditor.h"
#include "AsdSDK/Source/Util/AsdListHelpers_LinkedItems.h"

struct EditorBlock00323960 {
    /* 0x000 */ u8 unk000[0xc];
    /* 0x00c */ s32 index;
    /* 0x010 */ u8 unk010[0x2d0];
};

extern "C" {

u32 DAT_0044f578[0x2e0 / 4];
EditorBlock00323960 g_effectEditorState;

/* Selects the current editor item and resets the two editing blocks. */
void FUN_00323960(void)
{
    s32 index = g_effectEditorState.index + g_effectEditor.index;
    linkedItemsRemoveAndRelease(static_cast<LinkedItems *>(g_effectEditor.list),
                 linkedFindItemByIndex(static_cast<LinkedItems *>(g_effectEditor.list), index));
    DAT_0044f578[3] = 0;
    g_effectEditor.index = 0;
    g_effectEditorState.index = 0;
    g_effectEditor.object = (EffectSelectionTemplate *)&g_effectEditorState;
}

} /* extern "C" */
