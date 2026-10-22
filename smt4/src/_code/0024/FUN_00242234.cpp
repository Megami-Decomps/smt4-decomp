/* NON_MATCHING: completion return blocks differ; the explicit blob path also removes the generic switch's unreachable blob case. */
#include "shard/W6_W6Match2_EffectEditor.h"

struct EffectEditorLoadRequest {
    u8 payload[252];
    u32 kind;
    s32 state;
    u32 blob;
};
extern "C" {
extern const u8 DAT_00400002;
void FUN_002430c8(u32 source, u32 index, EffectEditorLoadRequest *request);
void FUN_002427f8(void *list, EffectSelectionItem *item);
void taskRunWithObject(EffectSelectionBlock *block, const void *payload, u32 type);
void effBlockSetBlobB(EffectSelectionBlock *block, const void *blob, u32 size, u32 mode);

// Poll the editor load request and apply its completed typed payload to the selected effect block.
u32 FUN_00242234(u32 source, u32 index)
{
    EffectEditorLoadRequest request;
    FUN_002430c8(source, index, &request);
    if (request.state == 2)
        return 0x400000;
    if (request.state == 1) {
        FUN_002427f8(g_effectEditor.selection.list, g_effectEditor.selection.item);
        if (request.kind == 8) {
            effBlockSetBlobB(g_effectEditor.selection.block, &request.blob, 4, 4);
        } else {
            u32 type = 0;
            switch (request.kind) {
            case 1: type = 1; break;
            case 2: type = 2; break;
            case 4: type = 3; break;
            case 16: type = 6; break;
            case 32: type = 5; break;
            case 64: type = 7; break;
            case 128: type = 8; break;
            case 256: type = 9; break;
            }
            taskRunWithObject(g_effectEditor.selection.block, request.payload, type);
        }
        return (u32)&DAT_00400002;
    }
    return 0x600001;
}
}
