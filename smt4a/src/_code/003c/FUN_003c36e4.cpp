/* NON_MATCHING: retail addresses the alternate template relative to g_effectEditorState;
 * using two external objects requires another pool word. The call argument schedule also differs. */
#include "shard/W6_W6Match2_EffectEditor.h"
#include "AsdSDK/Source/Util/AsdListHelpers_LinkedItems.h"

extern "C" {
extern EffectSelectionTemplate g_effectEditorState;
extern EffectSelectionTemplate DAT_0059e6c8; /* alternate template */

/* Removes the selected effect part and resets both template selections. */
void FUN_003c36e4(void)
{
    EffectSelectionTemplate *state = &g_effectEditorState;
    EffectEditor *editor = &g_effectEditor;
    LinkedItem *item = linkedFindItemByIndex((LinkedItems *)editor->list,
                                           editor->index + state->indices.extraOffset);
    linkedItemsRemoveAndRelease((LinkedItems *)editor->list, item);
    DAT_0059e6c8.indices.extraOffset = 0;
    editor->index = 0;
    state->indices.extraOffset = 0;
    editor->object = state;
}
} /* extern "C" */
