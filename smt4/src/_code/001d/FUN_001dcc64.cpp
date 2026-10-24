#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

// The effect editor's state (Shin Megami Tensei IV layout); only the fields this update touches.
struct EffectEditorIV {
    /* 0x00 */ s8 toggle;
    /* 0x01 */ u8 unk01[5];
    /* 0x06 */ u8 unk06;
    /* 0x07 */ u8 unk07;
    /* 0x08 */ u8 active;
    /* 0x09 */ u8 unk09[3];
    /* 0x0c */ u32 unk0c;
    /* 0x10 */ void *unk10;
    /* 0x14 */ void *unk14;
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ void *unk20;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ s32 pending;
    /* 0x2c */ u32 unk2c;
    /* 0x30 */ void *texture;
    /* 0x34 */ u8 unk34[0x18];
    /* 0x4c */ u32 unk4c;
    /* 0x50 */ u32 unk50;
    /* 0x54 */ u32 unk54;
    /* 0x58 */ u32 unk58;
    /* 0x5c */ u32 unk5c;
    /* 0x60 */ u32 unk60;
    /* 0x64 */ u32 unk64;
    /* 0x68 */ u32 unk68;
};

// A shared block whose word at 0xc is cleared with the editor.
struct EditorSharedIV {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ u32 unk0c;
};

extern "C" {
extern EffectEditorIV g_effectEditor;
extern EditorSharedIV DAT_0044f858;

s32 FUN_002c15fc(s32 id);
// Platform stub (`mov r0, #0; bx lr`) that armlink inlines at the call: the analog read never writes x/y.
s32 FUN_002ca07c(f32 *x, f32 *y, s32 first, s32 second, s32 third);
s32 padIsButtonPressed(s32 id);
void registrationEntryInsert(void *entry, s32 mode);
void resourceQueueDeferredDestroy(void *resource, s32 mode);
void asdTextureRelease(void *texture);
void effMenuAddDeltaA(f32 delta);
void effMenuAddDeltaB(f32 delta);
void FUN_00219908(void);
void effMenuListsClear(void);
void FUN_002fcd98(s32 value);

// Per-frame update of the effect editor: closes it down while a request is pending without an
// active editor, otherwise feeds the analog stick to the menu and handles the toggle button.
u32 FUN_001dcc64(void)
{
    if (g_effectEditor.pending != 0 && g_effectEditor.active != 0) {
        g_effectEditor.unk06 = 0;
        g_effectEditor.unk0c = 0;
        DAT_0044f858.unk0c = 0;
        if (g_effectEditor.unk14 != NULL) {
            registrationEntryInsert(g_effectEditor.unk14, 3);
            g_effectEditor.unk14 = NULL;
        }
        if (g_effectEditor.unk10 != NULL) {
            registrationEntryInsert(g_effectEditor.unk10, 3);
            g_effectEditor.unk10 = NULL;
        }
        if (g_effectEditor.unk20 != NULL) {
            resourceQueueDeferredDestroy(g_effectEditor.unk20, 3);
            g_effectEditor.unk20 = NULL;
        }
        g_effectEditor.unk4c = 0;
        g_effectEditor.unk50 = 0;
        g_effectEditor.unk54 = 1;
        g_effectEditor.unk58 = 0;
        g_effectEditor.unk60 = 0;
        g_effectEditor.unk64 = 0;
        g_effectEditor.unk68 = 0;
        g_effectEditor.active = 0;
        if (g_effectEditor.texture != NULL) {
            asdTextureRelease(g_effectEditor.texture);
            g_effectEditor.texture = NULL;
        }
        return 0;
    }
    f32 x;
    f32 y;
    if (FUN_002c15fc(28)) {
        FUN_002ca07c(&x, &y, 0, 0, 0);
    } else {
        x = 0.0f;
        y = 0.0f;
    }
    x *= 128.0f;
    y *= 128.0f;
    effMenuAddDeltaA(x * 0.1f);
    effMenuAddDeltaB(y * -0.1f);
    FUN_00219908();
    g_effectEditor.unk2c = 0;
    effMenuListsClear();
    FUN_002fcd98(0);
    asdDebugHookVoid();
    if (FUN_002c15fc(28) && padIsButtonPressed(27)) {
        if (g_effectEditor.toggle == 0) {
            g_effectEditor.toggle = 1;
        } else {
            g_effectEditor.toggle = 0;
        }
    }
    return 1;
}

} /* extern "C" */
