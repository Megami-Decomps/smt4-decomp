/* NON_MATCHING: allocation's final argument is materialized in r1 and reloaded for the button query, rather than sharing retail's saved r5 constant 1. */
#include "gfx/EffectEditorStorage.h"
#include "AsdSDK/EffectEditorSelectionTransfer.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "AsdSDK/AsdMemCopy.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_effMenu.h"

extern "C" {
extern Point2 DAT_0059dc7c;
EffectEditorOptions *FUN_00200bcc(EffectEditorOptions* options);
void effEditorNodeChainApply(EffectEditorOptions* options);
void* memAlloc(u32 heap, u32 alignClass, u32 flags, u32 size, u32 alignment, u32 fromFront);
u32 padButtonIsPressed(u32 buttons);
u8 FUN_00202178(s32 mapping);

// This coordinate vector spans the base node's layout/selection unions.
struct CoordinateNodeView {
    EffMenuNode* next;
    u32 kind;
    Vector4 coordinates;
    u32 value;
    u8 unk1C[0x4C];
};
typedef char CoordinateNodeSizeCheck[sizeof(CoordinateNodeView) == 0x68 ? 1 : -1];
static inline CoordinateNodeView *effMenuCreateCoordinateNode(const Vector4 &geometry, u32 value)
{
    asdDebugTrace("../Source/Gfx/Effect/effMenu.h", 803);
    CoordinateNodeView* node = static_cast<CoordinateNodeView*>(
        memAlloc(0x10000, 0x100, 0, sizeof(CoordinateNodeView), 0x10, 1));
    node->coordinates.x = geometry.x;
    node->coordinates.y = geometry.y;
    node->coordinates.z = geometry.z;
    node->coordinates.w = geometry.w;
    node->kind = 12;
    node->value = value;
    return node;
}

u32 FUN_0035ba3c(Point2* coordinates, u32 value, EffectEditorOptions* state)
{
    u32 result = 0x400001;
    FUN_002e59f8(coordinates, &DAT_0059dc7c, sizeof(Point2));
    if (!g_effectEditor.dispatch.mode) {
        FUN_00200bcc(state);
    }
    FUN_002e59f8(&DAT_0059dc7c, coordinates, sizeof(Point2));
    asdDebugHookVoid();
    effEditorNodeChainApply(state);
    asdDebugHookVoid();
    Vector4 geometry;
    geometry.x = 182.0f;
    geometry.y = 40.0f;
    geometry.z = coordinates->x;
    geometry.w = coordinates->y;
    effMenuListAppend(reinterpret_cast<EffMenuNode*>(effMenuCreateCoordinateNode(geometry, value)), 3);
    if (padButtonIsPressed(1) || padButtonIsPressed(FUN_00202178(1))) {
        result = 0x400000;
    } else if (state->flags & 8) {
        result = 0x400003;
    }
    return result;
}
}
