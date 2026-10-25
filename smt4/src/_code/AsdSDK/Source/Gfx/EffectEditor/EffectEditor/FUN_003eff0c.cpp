/* NON_MATCHING: retail uses ldr r0, [pc, #40] where the compiled block uses ldr ip, [pc, #44]. */
#include "gfx/EffectEditorStorage.h"
struct EffectEditorState {
    u8 unk00[0xA8];
    u32 firstValue;  // 0xA8
    u32 secondValue; // 0xAC
};

struct EffectEditorValues {
    u32 firstValue;  // 0x00
    u32 secondValue; // 0x04, DAT_0044eb34
};

extern "C" {
extern EffectEditorValues DAT_0044eb30;
extern u32 DAT_0044eb34;
extern u8 DAT_004d91c0;
extern u8 entry;

u8* _ZN10FloatStateC1Ev(u8* storage);
void _ZN17CameraMatrixCacheD1Ev(void* object);
s32 __aeabi_atexit(void* object, void (*cleanup)(void*), void* module);

s32 FUN_003eff0c(u32 firstValue, u32 secondValue, EffectEditorState* state)
{
    state->firstValue = firstValue;
    state->secondValue = secondValue;
    DAT_0044eb30 = EffectEditorValues();

    u8* storage = _ZN10FloatStateC1Ev(&DAT_004d91c0);
    return __aeabi_atexit(storage - 0x4A0, _ZN17CameraMatrixCacheD1Ev, &entry);
}
}
