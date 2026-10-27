#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/W5_W5Match2_LinkedItems.h"
#include "AsdSDK/Source/Gfx/EffectEditor/EffectEditor.h"
#include "AsdSDK/Source/Util/AsdListHelpers_LinkedItems.h"

extern "C" {
extern EffectSelectionTemplate DAT_0059e9a8;
void FUN_00375ec8(EffMenuNode *node);
void namedObjectFormatName(EffMenuNode *node, const char *text);
void engineFreeCallback(void *memory);
s32 effMenuNodeGetState(EffMenuNode *node);

u32 effectEditorUpdate()
{
    FUN_00375ec8(g_effectEditor.text.name);
    s32 position = DAT_0059e9a8.indices.extraOffset + g_effectEditor.selection.index;
    LinkedItem *item = linkedFindItemByIndex(
        (LinkedItems *)g_effectEditor.selection.list, position);
    const char *text = item->label.text;
    namedObjectFormatName(g_effectEditor.text.name, text);
    s32 state = effMenuNodeGetState(g_effectEditor.text.name);
    if (state == 2 || state == 1) {
        engineFreeCallback(g_effectEditor.text.name);
        g_effectEditor.text.name = NULL;
        return 0;
    }
    return 0x200001;
}
}
