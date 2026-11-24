/* NON_MATCHING: the origin pair is the linker-inlined effMenuNodeSetOrigin (its inlined.txt row names this site);
 * remaining: the unk14 store loads its constant (9) before reloading the node pointer, where retail reloads the
 * pointer into r0 and the 9 into r1 (`ldr r0, [r4, #68]; mov r1, #9; str r1, [r0, #20]`): the shape of a call of a
 * one-instruction setter armlink inlined (0xe5801014, `str r1, [r0, #20]`). Written as such a call with an inlined.txt
 * row this unit is IDENTICAL; it is the image's only such site, so the row is not added. */
#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/W5_W5Match2_LinkedItems.h"
#include "AsdSDK/Source/Gfx/EffectEditor/EffectEditor.h"
#include "AsdSDK/Source/Util/AsdListHelpers_LinkedItems.h"

extern "C" {
extern EffectSelectionTemplate g_effectEditorState;
void engineFreeCallback(void *memory);
void effEditorSetTextValue(EffMenuNode *node, const char *text);

void effectEditorCreateSelectedNameLabel()
{
    if (g_effectEditor.name != NULL) {
        engineFreeCallback(g_effectEditor.name);
    }
    g_effectEditor.name = effMenuNodeCreate("");
    effMenuNodeSetOrigin(g_effectEditor.name, 194, 200);
    g_effectEditor.name->unk14 = 9;
    s32 position = g_effectEditorState.indices.extraOffset + g_effectEditor.index;
    effEditorSetTextValue(g_effectEditor.name, linkedFindItemByIndex(
        (LinkedItems *)g_effectEditor.list, position)->label.text);
}
}
