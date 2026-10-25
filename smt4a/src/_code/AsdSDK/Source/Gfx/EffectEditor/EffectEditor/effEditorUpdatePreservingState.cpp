#include "shard/W6_W6Match4_EffectEditorSnapshot.h"

extern "C" {
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
u32 FUN_003c378c(EffectEditorSnapshot *snapshot, s32 mode);
extern u8 DAT_00634ca0[0x80];
extern EffectEditorGlobalState DAT_00634bc0;

// Run the editor operation while preserving its four-word state payload.
u32 effEditorUpdatePreservingState(void)
{
    EffectEditorSnapshot snapshot;
    __aeabi_memcpy4(&snapshot, DAT_00634ca0, sizeof(snapshot));
    EffectEditorGlobalState *state = &DAT_00634bc0;
    snapshot.saved = state->words;
    u32 result = FUN_003c378c(&snapshot, 0);
    state->words = snapshot.saved;
    if ((result & 1) != 0) {
        result |= 0x00800000;
    }
    return result;
}
}
