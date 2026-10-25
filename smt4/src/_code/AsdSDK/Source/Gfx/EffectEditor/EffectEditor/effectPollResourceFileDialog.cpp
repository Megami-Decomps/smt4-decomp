#include "shard/W6_W6Match2_EffectEditor.h"
#include "AsdSDK/EffectEditorDefaults.h"
#include "sys/FileDialogResult.h"
extern "C" {
void FUN_002430c8(const char*, u32, FileDialogResult*);
void* FUN_001e1a70(const char*);
void registrationEntryInsert(u32, s32);
char* libc_strcpy(char*, const char*);
void __aeabi_memcpy4(void*, const void*, u32);
extern const u8 DAT_00400001;
extern const u8 DAT_00400002;
extern char g_effectEditorResourceName[0x50];
extern u8 g_effectEditorWorkingSnapshot[0x80];
extern EffectEditorDefaultSlot DAT_0044f858;

u32 effectPollResourceFileDialog(void)
{
    u32 state = (u32)&DAT_00400001;
    FileDialogResult dialog;
    FUN_002430c8("effect_editor/", 0x10, &dialog);
    if (dialog.status == 2) {
        state = 0x400000;
    } else if (dialog.status == 1) {
        if (g_effectEditor.selection.list != NULL) {
            registrationEntryInsert((u32)g_effectEditor.selection.list, 3);
        }
        libc_strcpy(g_effectEditorResourceName, dialog.name);
        void* data = FUN_001e1a70(dialog.path);
        g_effectEditor.selection.list = data;
        __aeabi_memcpy4(g_effectEditorWorkingSnapshot, data, 0x80);
        state = (u32)&DAT_00400002;
        g_effectEditor.selection.index = 0;
        DAT_0044f858.object.indices.extraOffset = 0;
    }
    return state;
}
}
