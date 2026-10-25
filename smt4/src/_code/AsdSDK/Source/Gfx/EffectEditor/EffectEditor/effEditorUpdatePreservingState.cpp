#include "shard/W6_W6Match4_EffectEditorSnapshot.h"

extern "C" {
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
u32 FUN_00323a08(EffectEditorSnapshot *snapshot, s32 mode);
extern u8 g_effectEditorWorkingSnapshot[0x80];
extern EffectEditorGlobalState g_effectEditorSettings;

// Run the editor operation while preserving its four-word state payload.
u32 effEditorUpdatePreservingState(void)
{
    EffectEditorSnapshot snapshot;
    __aeabi_memcpy4(&snapshot, g_effectEditorWorkingSnapshot, sizeof(snapshot));
    EffectEditorGlobalState *state = &g_effectEditorSettings;
    snapshot.saved = state->words;
    u32 result = FUN_00323a08(&snapshot, 0);
    state->words = snapshot.saved;
    if ((result & 1) != 0) {
        result |= 0x00800000;
    }
    return result;
}
}
