/* NON_MATCHING: the status getter matches retail; the startup arm still lacks the release stub that takes the path/context and produces the NULL list owner before effMenuCreate. */
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
void effMenuBrowserStep(EffectTextRequest *request);
u32 formattedTextCopyLabel(EffectTextRequest *request, void *result);
u32 linkedObjGetValue(EffectTextRequest *request);
void FUN_003c4984(EffectTextRequest *request, void *selection);
void handleHolderFree(EffectTextRequest *request);
void nodeListFree(void *owner);
EffectTextRequest *effMenuCreate(u32 kind, u32 context);

void effectEditorPollTextRequest(u32 unused, u32 context, TextRequestResultView *result)
{
    if (g_effectEditor.nodeList != 0) {
        effMenuBrowserStep(g_effectEditor.request);
        result->state = effMenuNodeGetState(g_effectEditor.request);
        result->labelValue = formattedTextCopyLabel(g_effectEditor.request, result);
        result->linkedValue = linkedObjGetValue(g_effectEditor.request);
        FUN_003c4984(g_effectEditor.request, result->selection);
        if (result->state == 1) {
            handleHolderFree(g_effectEditor.request);
            g_effectEditor.request = 0;
            nodeListFree(g_effectEditor.nodeList);
            g_effectEditor.nodeList = 0;
        }
        return;
    }
    EffectTextRequest *request = effMenuCreate(0, context);
    g_effectEditor.request = request;
    request->type = 0xba;
    request->size = 0x1c;
    result->state = 0;
}
}
