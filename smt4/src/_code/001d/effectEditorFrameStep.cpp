#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "shard/W6_W6Match2_EffectEditor.h"

// The effect editor's state (Shin Megami Tensei IV layout); only the fields this update touches.

// A shared block whose word at 0xc is cleared with the editor.
struct EditorSharedIV {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ u32 unk0c;
};

extern "C" {
extern EditorSharedIV g_effectEditorState;

s32 slotIsActive(s32 id);
// Platform stub (`mov r0, #0; bx lr`) that armlink inlines at the call: the analog read never writes x/y.
s32 noOpReturnZero(f32 *x, f32 *y, s32 first, s32 second, s32 third);
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
u32 effectEditorFrameStep(void)
{
    if (g_effectEditor.pending != 0 && g_effectEditor.unk08 != 0) {
        g_effectEditor.unk06 = 0;
        g_effectEditor.index = 0;
        g_effectEditorState.unk0c = 0;
        if (g_effectEditor.list != NULL) {
            registrationEntryInsert(g_effectEditor.list, 3);
            g_effectEditor.list = NULL;
        }
        if (g_effectEditor.node != NULL) {
            registrationEntryInsert(g_effectEditor.node, 3);
            g_effectEditor.node = NULL;
        }
        if (g_effectEditor.resource != NULL) {
            resourceQueueDeferredDestroy(g_effectEditor.resource, 3);
            g_effectEditor.resource = NULL;
        }
        g_effectEditor.unk4c = 0;
        g_effectEditor.unk50 = 0;
        g_effectEditor.active = 1;
        g_effectEditor.unk58 = 0;
        g_effectEditor.unk60 = 0;
        g_effectEditor.unk64 = 0;
        g_effectEditor.unk68 = 0;
        g_effectEditor.unk08 = 0;
        if (g_effectEditor.texture != NULL) {
            asdTextureRelease(g_effectEditor.texture);
            g_effectEditor.texture = NULL;
        }
        return 0;
    }
    f32 x;
    f32 y;
    if (slotIsActive(28)) {
        noOpReturnZero(&x, &y, 0, 0, 0);
    } else {
        x = 0.0f;
        y = 0.0f;
    }
    x *= 128.0f;
    y *= 128.0f;
    effMenuAddDeltaA(x * 0.1f);
    effMenuAddDeltaB(y * -0.1f);
    FUN_00219908();
    g_effectEditor.cachedEvent = 0;
    effMenuListsClear();
    FUN_002fcd98(0);
    asdDebugHookVoid();
    if (slotIsActive(28) && padIsButtonPressed(27)) {
        if (g_effectEditor.toggle == 0) {
            g_effectEditor.toggle = 1;
        } else {
            g_effectEditor.toggle = 0;
        }
    }
    return 1;
}

} /* extern "C" */
