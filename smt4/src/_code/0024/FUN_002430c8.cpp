/* NON_MATCHING: retail stores the zero owner again before creating the request and reloads the request after storing its state; this build drops the store and keeps the pointer. */
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
void FUN_00247240(EffectTextRequest *request);
void FUN_002f82ac(EffectTextRequest *request);
EffectTextRequest *FUN_0030ed8c(void *owner, u32 size);
u32 FUN_00318cac(EffectTextRequest *request);
u32 formattedTextCopyLabel(EffectTextRequest *request, EffectTextResult *result);
void FUN_003241c4(EffectTextRequest *request, void *body);

/* Polls the effect editor's text request into `result`, starting one when none is pending and
 * releasing it once it reports state 1. */
void FUN_002430c8(u32 unused, u32 size, EffectTextResult *result)
{
    if (g_effectEditor.textRequest.owner != NULL) {
        FUN_002f82ac(g_effectEditor.textRequest.request);
        result->state = g_effectEditor.textRequest.request->state;
        result->label = formattedTextCopyLabel(g_effectEditor.textRequest.request, result);
        result->extra = FUN_00318cac(g_effectEditor.textRequest.request);
        FUN_003241c4(g_effectEditor.textRequest.request, result->body);
        if (result->state == 1) {
            FUN_00247240(g_effectEditor.textRequest.request);
            g_effectEditor.textRequest.request = NULL;
            nodeListOwnerFree(g_effectEditor.textRequest.owner);
            g_effectEditor.textRequest.owner = NULL;
        }
        return;
    }
    g_effectEditor.textRequest.owner = NULL;
    EffectTextRequest *request = FUN_0030ed8c(NULL, size);
    g_effectEditor.textRequest.request = request;
    request->type = 0xba;
    request->size = 0x1c;
    result->state = 0;
}

} /* extern "C" */
