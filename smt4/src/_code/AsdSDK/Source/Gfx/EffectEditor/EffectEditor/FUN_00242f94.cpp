/* NON_MATCHING: with effMenu.h's render-node helper inlined only the selection/value registers differ: retail keeps the selection in r5 (then reuses r5 for the constant 1) and the value in r6. */
#include "ui/UiSpriteApi.h"
#include "gfx/EffectEditorStorage.h"
#include "AsdSDK/EffectEditorSelectionTransfer.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "AsdSDK/Source/Sys/Save/AsdSaveHeader.h"

extern "C" {
extern f32 DAT_0044eb1c[2];
extern const u8 DAT_00400001;
extern const u8 DAT_00400003;
EffectEditorOptions *FUN_0024dd90(EffectEditorOptions *options);
void effEditorNodeChainApply(EffectEditorOptions *options);
void *memAlloc(u32 pool, u32 category, u32 flags, u32 size, u32 alignment, u32 clear);
void effMenuListAppend(EffMenuNode *node, s32 list);
s32 padIsButtonPressed(u32 button);
u8 padAlternateButtonIndex(s32 button);

/* effMenu.h: queues a render node (kind 12) on menu list 3. */
struct EffMenuPoint { f32 x, y; };

static __inline void effMenuAddRender(f32 layoutX, f32 layoutY, EffMenuPoint selection, u32 value)
{
    asdDebugTrace("../Source/Gfx/Effect/effMenu.h", 797);
    EffMenuRenderNode *node = static_cast<EffMenuRenderNode *>(
        memAlloc(0x10000, 0x100, 0, sizeof(EffMenuRenderNode), 0x10, 1));
    node->layoutX = layoutX;
    node->layoutY = layoutY;
    node->selectionX = selection.x;
    node->selectionY = selection.y;
    node->unk04 = 12;
    node->unk18 = value;
    effMenuListAppend(node, 3);
}

u32 FUN_00242f94(f32 *selection, u32 value, EffectEditorOptions *options)
{
    u32 result = reinterpret_cast<u32>(&DAT_00400001);
    memCopy(selection, DAT_0044eb1c, 2 * sizeof(f32));
    if (!g_effectEditor.mode) {
        FUN_0024dd90(options);
    }
    memCopy(DAT_0044eb1c, selection, 2 * sizeof(f32));
    asdDebugHookVoid();
    effEditorNodeChainApply(options);
    asdDebugHookVoid();
    effMenuAddRender(182.0f, 40.0f, *reinterpret_cast<const EffMenuPoint *>(selection), value);
    if (padIsButtonPressed(1) || padIsButtonPressed(padAlternateButtonIndex(1))) {
        result = 0x400000;
    } else if (options->flags & 8) {
        result = reinterpret_cast<u32>(&DAT_00400003);
    }
    return result;
}
}
