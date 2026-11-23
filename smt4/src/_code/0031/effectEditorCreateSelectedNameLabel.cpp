/* NON_MATCHING: the item-index sum now matches retail (named position local, extraOffset + index); remaining: the unk14 store loads its constant (9) before reloading the node pointer, retail reloads the pointer first.
 * The origin pair (stm r0, {r1, r2}) and the 0x14 word (str r1, [r0, #20]) look like calls of one-instruction setters
 * armlink inlined: written as calls with inlined.txt rows (effMenuNodeSetOrigin = 0xe8800006, a 0x14 setter =
 * 0xe5801014) this unit is IDENTICAL; the pair setter alone makes FUN_00313704 / smt4a FUN_003aa520 IDENTICAL. */
#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/W5_W5Match2_LinkedItems.h"
#include "AsdSDK/Source/Util/AsdListHelpers_LinkedItems.h"
#include "AsdSDK/Source/Gfx/EffectEditor/EffectEditor.h"

extern "C" {
extern EffectSelectionTemplate g_effectEditorState;
void asdMemoryFreeLocked(void *memory);
void effEditorSetTextValue(EffMenuNode *node, const char *text);

void effectEditorCreateSelectedNameLabel()
{
    if (g_effectEditor.name != NULL) {
        asdMemoryFreeLocked(g_effectEditor.name);
    }
    EffMenuNode *node = effMenuNodeCreate("");
    g_effectEditor.name = node;
    // The first pair of node words holds this label's screen origin.
    node->unk04 = 200;
    node->initialKind = 194;
    g_effectEditor.name->unk14 = 9;
    s32 position = g_effectEditorState.indices.extraOffset + g_effectEditor.index;
    effEditorSetTextValue(g_effectEditor.name, linkedFindItemByIndex(
        (LinkedItems *)g_effectEditor.list, position)->label.text);
}
}
