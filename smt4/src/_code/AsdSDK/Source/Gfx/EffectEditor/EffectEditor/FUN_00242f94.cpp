/* NON_MATCHING: layout constants load after allocation and split retail's four-float store, with different saved registers; 76 built versus 74 retail rows. */
#include "shard/W6_W6Match2_EffectEditor.h"
#include "AsdSDK/EffectEditorSelectionTransfer.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {
extern f32 DAT_0044eb1c[2];
extern const u8 DAT_00400001;
extern const u8 DAT_00400003;
void *memCopy(void *destination, const void *source, u32 size);
EffectEditorOptions *FUN_0024dd90(EffectEditorOptions *options);
void effEditorNodeChainApply(EffectEditorOptions *options);
void *memAlloc(u32 pool, u32 category, u32 flags, u32 size, u32 alignment, u32 clear);
void effMenuListAppend(EffMenuNode *node, s32 list);
s32 padIsButtonPressed(u32 button);
u8 padAlternateButtonIndex(s32 button);

u32 FUN_00242f94(f32 *selection, u32 value, EffectEditorOptions *options)
{
    u32 result = reinterpret_cast<u32>(&DAT_00400001);
    memCopy(selection, DAT_0044eb1c, 2 * sizeof(f32));
    if (!g_effectEditor.dispatch.mode) {
        FUN_0024dd90(options);
    }
    memCopy(DAT_0044eb1c, selection, 2 * sizeof(f32));
    asdDebugHookVoid();
    effEditorNodeChainApply(options);
    asdDebugHookVoid();
    f32 selectionX = selection[0];
    f32 selectionY = selection[1];
    asdDebugTrace("../Source/Gfx/Effect/effMenu.h", 797);
    EffMenuRenderNode *node = static_cast<EffMenuRenderNode *>(
        memAlloc(0x10000, 0x100, 0, sizeof(EffMenuRenderNode), 0x10, 1));
    node->layoutX = 182.0f;
    node->layoutY = 40.0f;
    node->selectionX = selectionX;
    node->selectionY = selectionY;
    node->unk04 = 12;
    node->unk18 = value;
    effMenuListAppend(node, 3);
    if (padIsButtonPressed(1) || padIsButtonPressed(padAlternateButtonIndex(1))) {
        result = 0x400000;
    } else if (options->unk10 & 8) {
        result = reinterpret_cast<u32>(&DAT_00400003);
    }
    return result;
}
}
