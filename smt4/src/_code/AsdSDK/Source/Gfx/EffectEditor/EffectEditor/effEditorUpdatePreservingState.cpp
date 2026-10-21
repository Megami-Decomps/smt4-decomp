#include "shard/W6_W6Match4_EffectEditorSnapshot.h"

extern "C" {
void rt_memcpy_w(void *destination, const void *source, u32 size);
u32 FUN_00323a08(EffectEditorSnapshot *snapshot, s32 mode);
extern u8 DAT_004d8c20[0x80];
extern EffectEditorGlobalState DAT_004d8b40;

// Run the editor operation while preserving its four-word state payload.
u32 effEditorUpdatePreservingState(void)
{
    EffectEditorSnapshot snapshot;
    rt_memcpy_w(&snapshot, DAT_004d8c20, sizeof(snapshot));
    EffectEditorGlobalState *state = &DAT_004d8b40;
    snapshot.saved = state->words;
    u32 result = FUN_00323a08(&snapshot, 0);
    state->words = snapshot.saved;
    if ((result & 1) != 0) {
        result |= 0x00800000;
    }
    return result;
}
}
