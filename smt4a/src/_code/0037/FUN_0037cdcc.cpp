/* NON_MATCHING: typed request accesses remove retail's reloads and known-zero owner initialization. */
#include "shard/W6_W6Match2_EffectEditor.h"
#include <stddef.h>

struct TextRequestResultView {
    u8 unk000[0xc8];
    u8 selection[0x34];
    u32 labelValue;
    u32 state;
    u32 linkedValue;
};
typedef char TextRequestResultOffsetsCheck[offsetof(TextRequestResultView, selection) == 0xc8 &&
    offsetof(TextRequestResultView, labelValue) == 0xfc &&
    offsetof(TextRequestResultView, state) == 0x100 &&
    offsetof(TextRequestResultView, linkedValue) == 0x104 ? 1 : -1];

extern "C" {
void FUN_00381874(EffectTextRequest *request);
u32 formattedTextCopyLabel(EffectTextRequest *request, void *result);
u32 linkedObjGetValue(EffectTextRequest *request);
void FUN_003c4984(EffectTextRequest *request, void *selection);
void handleHolderFree(EffectTextRequest *request);
void nodeListFree(void *owner);
EffectTextRequest *effMenuCreate(u32 kind, u32 context);

void FUN_0037cdcc(u32 unused, u32 context, TextRequestResultView *result)
{
    if (g_effectEditor.textRequest.owner != 0) {
        FUN_00381874(g_effectEditor.textRequest.request);
        result->state = g_effectEditor.textRequest.request->state;
        result->labelValue = formattedTextCopyLabel(g_effectEditor.textRequest.request, result);
        result->linkedValue = linkedObjGetValue(g_effectEditor.textRequest.request);
        FUN_003c4984(g_effectEditor.textRequest.request, result->selection);
        if (result->state == 1) {
            handleHolderFree(g_effectEditor.textRequest.request);
            g_effectEditor.textRequest.request = 0;
            nodeListFree(g_effectEditor.textRequest.owner);
            g_effectEditor.textRequest.owner = 0;
        }
        return;
    }
    EffectTextRequest *request = effMenuCreate(0, context);
    g_effectEditor.textRequest.request = request;
    request->type = 0xba;
    request->size = 0x1c;
    result->state = 0;
}
}
