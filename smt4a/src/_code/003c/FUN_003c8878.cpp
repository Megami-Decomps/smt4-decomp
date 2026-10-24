/* NON_MATCHING: stack layout (label/kind/state/value at sp+4..0xd4, name at sp+0xd8) now matches; retail keeps flags in r4 through the first-call branch (a removed hook leaves mov r1,r4 / mov r0,#0 pairs), counts the 22 entries from a loaded constant and keeps the editor pointer in r7 with a different register split; armcc allocates r5-r9 differently. */
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {
extern const u8 DAT_00400002;
extern const u8 DAT_00600001;
extern const u8 DAT_00400000;

s32 textFormatBuffer(char *dest, const char *format, ...);
s32 effBlockCopyDataB(void *block, const void *source, s32 size);
EffectSelectionItem *linkedFindItemByIndex(void *list, s32 index);
void nodeListFree(void *list);
s32 effMenuAppendNamedEntry(void *owner, const char *name, s32 kind, u32 index, s32 flags);
void FUN_00381874(EffectTextRequest *request);
EffectTextRequest *effMenuCreate(void *owner);
void handleHolderFree(EffectTextRequest *request);
s32 linkedObjGetValue(EffectTextRequest *request);
s32 formattedTextCopyLabel(EffectTextRequest *request, char *label);
void FUN_003c2df0(void *list, EffectSelectionItem *from, EffectSelectionItem *to);
void FUN_003ca0ec(void *list, EffectSelectionItem *item);

// Drive the effect editor's number-entry menu: build the "GENERAL n" list on the first call, then
// poll it. Once confirmed (state 1) the chosen value is applied to the selected effect item; the
// result reports the menu state (0x400000 cancelled, 0x400002 applied, 0x600001 still open).
u32 FUN_003c8878(u32 flags)
{
    u32 result = (u32)&DAT_00600001;
    struct {
        char label[200];
        s32 kind;
        s32 state;
        s32 value;
    } input;
    char name[104];

    input.state = 0;

    if (g_effectEditor.textRequest.owner != NULL) {
        FUN_00381874(g_effectEditor.textRequest.request);
        input.state = g_effectEditor.textRequest.request->state;
        input.kind = formattedTextCopyLabel(g_effectEditor.textRequest.request, input.label);
        input.value = linkedObjGetValue(g_effectEditor.textRequest.request);
        if (input.state == 1) {
            handleHolderFree(g_effectEditor.textRequest.request);
            g_effectEditor.textRequest.request = NULL;
            nodeListFree(g_effectEditor.textRequest.owner);
            g_effectEditor.textRequest.owner = NULL;
        }
    } else {
        g_effectEditor.textRequest.owner = NULL;
        if (flags & 8) {
            for (u32 i = 0; i < 22; i++) {
                textFormatBuffer(name, "GENERAL %d", i);
                effMenuAppendNamedEntry(g_effectEditor.textRequest.owner, name, 8, i, 0);
            }
        }
        EffectTextRequest *request = effMenuCreate(g_effectEditor.textRequest.owner);
        g_effectEditor.textRequest.request = request;
        request->type = 186;
        request->size = 28;
    }
    if (input.state == 2) {
        result = (u32)&DAT_00400000;
    } else if (input.state == 1) {
        if (input.kind != 8) {
            EffectSelectionItem *item = linkedFindItemByIndex(g_effectEditor.selection.list, -input.value);
            if (g_effectEditor.selection.item != item) {
                FUN_003ca0ec(g_effectEditor.selection.list, g_effectEditor.selection.item);
                FUN_003c2df0(g_effectEditor.selection.list, g_effectEditor.selection.item, item);
            }
        } else {
            FUN_003ca0ec(g_effectEditor.selection.list, g_effectEditor.selection.item);
            effBlockCopyDataB(g_effectEditor.selection.block, &input.value, 4);
        }
        result = (u32)&DAT_00400002;
    }
    return result;
}

} /* extern "C" */
