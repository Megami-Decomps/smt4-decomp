/* NON_MATCHING: stack layout (label/kind/state/value at sp+4..0xd4, name at sp+0xd8) now matches; retail keeps flags in r4 through the first-call branch (a removed hook leaves mov r1,r4 / mov r0,#0 pairs), counts the 22 entries from a loaded constant and keeps the editor pointer in r7 with a different register split; armcc allocates r5-r9 differently. */
#include <stdio.h>
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {
extern const u8 DAT_00400002;
extern const u8 DAT_00600001;
extern const u8 DAT_00400000;

s32 effBlockCopyDataB(void *block, const void *source, s32 size);
EffectSelectionItem *linkedFindItemByIndex(void *list, s32 index);
void nodeListFree(void *list);
s32 effMenuAppendNamedEntry(void *owner, const char *name, s32 kind, u32 index, s32 flags);
void effMenuBrowserStep(EffectTextRequest *request);
EffectTextRequest *effMenuCreate(void *owner);
void handleHolderFree(EffectTextRequest *request);
s32 linkedObjGetValue(EffectTextRequest *request);
s32 formattedTextCopyLabel(EffectTextRequest *request, char *label);
void linkedItemsRedirectToReplacement(void *list, EffectSelectionItem *from, EffectSelectionItem *to);
void effResourcePromoteReferences(void *list, EffectSelectionItem *item); // declcheck: local (the shared declaration in shard/W5_W5Match2_LinkedItems.h does not compile here: argument of type "void *" is incompatible with parameter of type "LinkedItems *")

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

    if (g_effectEditor.nodeList != NULL) {
        effMenuBrowserStep(g_effectEditor.request);
        input.state = g_effectEditor.request->state;
        input.kind = formattedTextCopyLabel(g_effectEditor.request, input.label);
        input.value = linkedObjGetValue(g_effectEditor.request);
        if (input.state == 1) {
            handleHolderFree(g_effectEditor.request);
            g_effectEditor.request = NULL;
            nodeListFree(g_effectEditor.nodeList);
            g_effectEditor.nodeList = NULL;
        }
    } else {
        g_effectEditor.nodeList = NULL;
        if (flags & 8) {
            for (u32 i = 0; i < 22; i++) {
                sprintf(name, "GENERAL %d", i);
                effMenuAppendNamedEntry(g_effectEditor.nodeList, name, 8, i, 0);
            }
        }
        EffectTextRequest *request = effMenuCreate(g_effectEditor.nodeList);
        g_effectEditor.request = request;
        request->type = 186;
        request->size = 28;
    }
    if (input.state == 2) {
        result = (u32)&DAT_00400000;
    } else if (input.state == 1) {
        if (input.kind != 8) {
            EffectSelectionItem *item = linkedFindItemByIndex(g_effectEditor.list, -input.value);
            if (g_effectEditor.item != item) {
                effResourcePromoteReferences(g_effectEditor.list, g_effectEditor.item);
                linkedItemsRedirectToReplacement(g_effectEditor.list, g_effectEditor.item, item);
            }
        } else {
            effResourcePromoteReferences(g_effectEditor.list, g_effectEditor.item);
            effBlockCopyDataB(g_effectEditor.block, &input.value, 4);
        }
        result = (u32)&DAT_00400002;
    }
    return result;
}

} /* extern "C" */
