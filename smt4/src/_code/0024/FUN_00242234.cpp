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
void effResourcePromoteReferences(void *list, EffectSelectionItem *item);
void taskRunWithObject(EffectSelectionBlock *block, const void *payload, u32 type);
void effBlockSetBlobB(EffectSelectionBlock *block, const void *blob, u32 size, u32 mode);

// Poll the editor load request and apply its completed typed payload to the selected effect block.
u32 FUN_00242234(u32 source, u32 index)
{
    EffectEditorLoadRequest request;
    u32 result = 0x600001;
    FUN_002430c8(source, index, &request);
    if (request.state == 2) {
        result = 0x400000;
    } else if (request.state == 1) {
        effResourcePromoteReferences(g_effectEditor.selection.list, g_effectEditor.selection.item);
        if (request.kind != 8) {
            u32 type;
            switch (request.kind) {
            case 1: type = 1; break;
            case 2: type = 2; break;
            case 4: type = 3; break;
            case 8: type = 4; break;
            case 16: type = 6; break;
            case 32: type = 5; break;
            case 64: type = 7; break;
            case 128: type = 8; break;
            case 256: type = 9; break;
            default: type = 0; break;
            }
            taskRunWithObject(g_effectEditor.selection.block, request.payload, type);
        } else {
            effBlockSetBlobB(g_effectEditor.selection.block, &request.blob, 4, 4);
        }
        result = (u32)&DAT_00400002;
    }
    return result;
}
}
