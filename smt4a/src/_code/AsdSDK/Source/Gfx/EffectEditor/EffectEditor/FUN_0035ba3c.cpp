/* NON_MATCHING: two native MOV-r0-r0 words and coordinate-vector register grouping differ. */
#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern Point2 DAT_0059dc7c;
void FUN_002e59f8(void* destination, const void* source, u32 size);
void FUN_00200bcc(EffectEditorMenuState* state);
void effEditorNodeChainApply(EffectEditorMenuState* state);
void* memAlloc(u32 heap, u32 alignClass, u32 flags, u32 size, u32 alignment, u32 fromFront);
void effMenuListAppend(EffMenuNode* node, u32 list);
u32 padButtonIsPressed(u32 buttons);
u32 FUN_00202178(u32 mapping);

u32 FUN_0035ba3c(Point2* coordinates, u32 value, EffectEditorMenuState* state)
{
    // This coordinate vector spans the base node's layout/selection unions.
    struct CoordinateNodeView {
        EffMenuNode* next;
        u32 kind;
        Vector4 coordinates;
        u32 value;
        u8 unk1C[0x4C];
    };
    typedef char CoordinateNodeSizeCheck[sizeof(CoordinateNodeView) == 0x68 ? 1 : -1];
    u32 result = 0x400001;
    FUN_002e59f8(coordinates, &DAT_0059dc7c, sizeof(Point2));
    if (!g_effectEditor.dispatch.mode) {
        FUN_00200bcc(state);
    }
    FUN_002e59f8(&DAT_0059dc7c, coordinates, sizeof(Point2));
    effEditorNodeChainApply(state);
    Vector4 geometry = {182.0f, 40.0f, coordinates->x, coordinates->y};
    asdDebugTrace("../Source/Gfx/Effect/effMenu.h", 803);
    CoordinateNodeView* node = static_cast<CoordinateNodeView*>(
        memAlloc(0x10000, 0x100, 0, sizeof(CoordinateNodeView), 0x10, 1));
    node->coordinates = geometry;
    node->kind = 12;
    node->value = value;
    effMenuListAppend(reinterpret_cast<EffMenuNode*>(node), 3);
    if (padButtonIsPressed(1) || padButtonIsPressed(FUN_00202178(1))) {
        result = 0x400000;
    } else if (state->inputStatus.flags & 8) {
        result = 0x400003;
    }
    return result;
}
}
