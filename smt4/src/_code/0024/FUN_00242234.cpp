#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/W5_W5Match2_LinkedItems.h"

struct EffectEditorLoadRequest {
    u8 payload[252];
    u32 kind;
    s32 state;
    u32 blob;
};
extern "C" {
extern const u8 DAT_00400002;
void effectEditorPollTextRequest(u32 source, u32 index, EffectEditorLoadRequest *request);
void taskRunWithObject(EffectSelectionBlock *block, const void *payload, u32 type);
void effBlockSetBlobB(EffectSelectionBlock *block, const void *blob, u32 size, u32 mode);

// Poll the editor load request and apply its completed typed payload to the selected effect block.
u32 FUN_00242234(u32 source, u32 index)
{
    EffectEditorLoadRequest request;
    u32 result = 0x600001;
    effectEditorPollTextRequest(source, index, &request);
    if (request.state == 2) {
        result = 0x400000;
    } else if (request.state == 1) {
        effResourcePromoteReferences(static_cast<LinkedItems *>(g_effectEditor.list), reinterpret_cast<LinkedItem *>(g_effectEditor.item));
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
            taskRunWithObject(g_effectEditor.block, request.payload, type);
        } else {
            effBlockSetBlobB(g_effectEditor.block, &request.blob, 4, 4);
        }
        result = (u32)&DAT_00400002;
    }
    return result;
}
}
