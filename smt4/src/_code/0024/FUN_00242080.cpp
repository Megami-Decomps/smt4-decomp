/* NON_MATCHING: retail retains inline menu-builder setup/NOPs and a loop bound register; clean C++ factors result branches and defaults differently. */
#include <stdio.h>
#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/W5_W5Match2_LinkedItems.h"
#include "AsdSDK/Source/Gfx/Effect/effPartsBlock.h"

extern "C" {
extern const char DAT_00400002;
void FUN_002f82ac(EffectTextRequest *request);
s32 formattedTextCopyLabel(EffectTextRequest *request, char *buffer);
s32 FUN_00318cac(EffectTextRequest *request);
void effectEditorObjectDestroy(EffectTextRequest *request);
void nodeListOwnerFree(void *owner);
void effMenuAddEntry(void *owner, const char *label, s32 kind, u32 value, s32 flags);
EffectTextRequest *effMenuCreate(void *owner);
LinkedItem *linkedFindItemByIndex(LinkedItems *items, s32 index);
void effResourcePromoteReferences(LinkedItems *items, LinkedItem *item);
void linkedItemsRedirectToReplacement(LinkedItems *items, LinkedItem *item, LinkedItem *replacement);
void effBlockSetBlobB(EffBlock *block, const void *data, s32 size, u16 tag);

// Run the editor's selection dialog and apply the selected reference or general index.
u32 FUN_00242080(u32 flags)
{
    struct DialogResult {
        char label[200];
        s32 kind, state, index;
    } result;
    result.state = 0;
    char generalLabel[104];
    if (g_effectEditor.nodeList != NULL) {
        FUN_002f82ac(g_effectEditor.request);
        result.state = g_effectEditor.request->state;
        result.kind = formattedTextCopyLabel(g_effectEditor.request, result.label);
        result.index = FUN_00318cac(g_effectEditor.request);
        if (result.state == 1) {
            effectEditorObjectDestroy(g_effectEditor.request);
            g_effectEditor.request = NULL;
            nodeListOwnerFree(g_effectEditor.nodeList);
            g_effectEditor.nodeList = NULL;
        }
    } else {
        g_effectEditor.nodeList = NULL;
        if (flags & 8) {
            for (u32 index = 0; index < 22; ++index) {
                sprintf(generalLabel, "GENERAL %d", index);
                effMenuAddEntry(g_effectEditor.nodeList, generalLabel, 8, index, 0);
            }
        }
        EffectTextRequest *request = effMenuCreate(g_effectEditor.nodeList);
        g_effectEditor.request = request;
        request->type = 186;
        request->size = 28;
    }
    if (result.state == 2)
        return 0x400000;
    if (result.state == 1) {
        if (result.kind != 8) {
            LinkedItem *replacement = linkedFindItemByIndex(
                static_cast<LinkedItems *>(g_effectEditor.list), -result.index);
            if (reinterpret_cast<LinkedItem *>(g_effectEditor.item) != replacement) {
                effResourcePromoteReferences(static_cast<LinkedItems *>(g_effectEditor.list),
                             reinterpret_cast<LinkedItem *>(g_effectEditor.item));
                linkedItemsRedirectToReplacement(static_cast<LinkedItems *>(g_effectEditor.list),
                             reinterpret_cast<LinkedItem *>(g_effectEditor.item), replacement);
            }
        } else {
            effResourcePromoteReferences(static_cast<LinkedItems *>(g_effectEditor.list),
                         reinterpret_cast<LinkedItem *>(g_effectEditor.item));
            effBlockSetBlobB(reinterpret_cast<EffBlock *>(g_effectEditor.block), &result.index, 4, 4);
        }
        return reinterpret_cast<u32>(&DAT_00400002);
    }
    return 0x600001;
}
}
