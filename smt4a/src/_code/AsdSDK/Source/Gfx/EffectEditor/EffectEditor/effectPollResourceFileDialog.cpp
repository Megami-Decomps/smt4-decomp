#include "shard/W6_W6Match2_EffectEditor.h"
#include "AsdSDK/EffectEditorDefaults.h"
#include "sys/FileDialogResult.h"
extern "C" {
void FUN_0037cdcc(const char*, u32, FileDialogResult*);
void* FUN_0029127c(const char*);
void asdEffectQueueRelease(u32, s32);
char* libc_strcpy(char*, const char*);
void rt_memcpy_w(void*, const void*, u32);
extern char DAT_00634c50[0x50];
extern u8 DAT_00634ca0[0x80];
extern EffectEditorDefaultSlot DAT_0059e9a8;

u32 effectPollResourceFileDialog(void)
{
    u32 state = 0x400001;
    FileDialogResult dialog;
    FUN_0037cdcc("effect_editor/", 0x10, &dialog);
    if (dialog.status == 2) {
        state = 0x400000;
    } else if (dialog.status == 1) {
        if (g_effectEditor.selection.list != NULL) {
            asdEffectQueueRelease((u32)g_effectEditor.selection.list, 3);
        }
        libc_strcpy(DAT_00634c50, dialog.name);
        void* data = FUN_0029127c(dialog.path);
        g_effectEditor.selection.list = data;
        rt_memcpy_w(DAT_00634ca0, data, 0x80);
        state = 0x400002;
        g_effectEditor.selection.index = 0;
        DAT_0059e9a8.object.indices.extraOffset = 0;
    }
    return state;
}
}
