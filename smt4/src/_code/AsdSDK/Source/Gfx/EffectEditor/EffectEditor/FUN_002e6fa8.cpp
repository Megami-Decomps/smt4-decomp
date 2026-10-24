/* NON_MATCHING: layout and instruction sequence match; only register numbering differs: retail keeps &g_effectEditor in r7, the dir literal in r6 and the locals' base in r5 (loading &g_effectEditor and the result before allocating the frame) and reads the node state through r0, so it reloads the label before the inlined `mov r0, #0` stub; this build uses r6/r5/r7 and r1 and omits that reload. */
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {
extern const u8 DAT_00400001;
extern const u8 DAT_00400002;
extern char DAT_004d8bd0[0x50];
void asdMemoryFreeLocked(void* memory);
void FUN_002f2aa8(EffMenuNode* node);
void namedObjectFormatFullName(EffMenuNode* node, char* dest);
void namedObjectFormatName(EffMenuNode* node, char* dest);
char* libc_strcpy(char* dest, const char* src);
void textFormatBuffer(char* dest, const char* format, ...);
__weak void FUN_002e6fa8_hook(void* list, const char* path);
s32 FUN_002c9df8(EffMenuNode* node, const char* dir); // platform stub: `mov r0, #0; bx lr`

struct EffectEditorNameResult {
    char fullName[50];
    char name[50];
    s32 state;
};

// Polls the effect editor's .EPL name-entry node: creates it on the first call, and once the
// name is confirmed (state 1) saves it, registers the chosen name and reports 0x400002;
// state 2 (cancel) reports 0x400000, anything else 0x400001 (still editing).
u32 FUN_002e6fa8(void)
{
    const char* dir = "effect_editor/";
    const char* ext = ".EPL";
    u32 result = (u32)&DAT_00400001;
    EffectEditorNameResult input;
    char path[100];
    if (g_effectEditor.label == NULL) {
        g_effectEditor.label = effMenuNodeCreate(ext);
        g_effectEditor.label->initialKind = 182;
        g_effectEditor.label->unk04 = 100;
    } else {
        FUN_002f2aa8(g_effectEditor.label);
        namedObjectFormatFullName(g_effectEditor.label, input.fullName);
        namedObjectFormatName(g_effectEditor.label, input.name);
        input.state = g_effectEditor.label->unk08;
        if (input.state == 1) {
            if (FUN_002c9df8(g_effectEditor.label, dir)) {
                asdMemoryFreeLocked(g_effectEditor.label);
                g_effectEditor.label = NULL;
            } else {
                input.state = 0;
            }
        }
    }
    if (input.state == 2) {
        result = 0x400000;
    } else if (input.state == 1 && g_effectEditor.selection.list != NULL) {
        libc_strcpy(DAT_004d8bd0, input.name);
        textFormatBuffer(path, "%s%s", "effect_editor/", input.fullName);
        FUN_002e6fa8_hook(g_effectEditor.selection.list, path);
        result = (u32)&DAT_00400002;
    }
    return result;
}
}
