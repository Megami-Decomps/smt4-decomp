/* NON_MATCHING: the status getter matches retail; the startup arm still lacks the release stub that takes the path/context and produces the NULL list owner before effMenuCreate. */
#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {

typedef struct EffectTextResult {
    /* 0x000 */ u8 unk000[0xc8];
    /* 0x0C8 */ u8 body[0x34];
    /* 0x0FC */ u32 label;
    /* 0x100 */ s32 state;
    /* 0x104 */ u32 extra;
} EffectTextResult;

void nodeListOwnerFree(void *owner);
void effectEditorObjectDestroy(EffectTextRequest *request);
void effMenuBrowserStep(EffectTextRequest *request);
EffectTextRequest *effMenuCreate(void *owner, u32 size);
u32 linkedObjGetValue(EffectTextRequest *request);
u32 formattedTextCopyLabel(EffectTextRequest *request, EffectTextResult *result);
void FUN_003241c4(EffectTextRequest *request, void *body);

/* Polls the effect editor's text request into `result`, starting one when none is pending and
 * releasing it once it reports state 1. */
void effectEditorPollTextRequest(u32 unused, u32 size, EffectTextResult *result)
{
    if (g_effectEditor.nodeList != NULL) {
        effMenuBrowserStep(g_effectEditor.request);
        result->state = effMenuNodeGetState(g_effectEditor.request);
        result->label = formattedTextCopyLabel(g_effectEditor.request, result);
        result->extra = linkedObjGetValue(g_effectEditor.request);
        FUN_003241c4(g_effectEditor.request, result->body);
        if (result->state == 1) {
            effectEditorObjectDestroy(g_effectEditor.request);
            g_effectEditor.request = NULL;
            nodeListOwnerFree(g_effectEditor.nodeList);
            g_effectEditor.nodeList = NULL;
        }
        return;
    }
    g_effectEditor.nodeList = NULL;
    EffectTextRequest *request = effMenuCreate(NULL, size);
    g_effectEditor.request = request;
    request->type = 0xba;
    request->size = 0x1c;
    result->state = 0;
}

} /* extern "C" */
