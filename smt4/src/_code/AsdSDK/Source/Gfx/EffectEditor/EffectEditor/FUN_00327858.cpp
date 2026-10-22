/* NON_MATCHING: Paired default-state addresses and reset stores are formed differently. */
#include "shard/W6_W6Match2_EffectEditor.h"
#include "AsdSDK/EffectEditorDefaults.h"
extern "C" {
void registrationEntryInsert(u32, s32);
void resourceQueueDeferredDestroy(void*, s32);
void* effPartCreate(void);
extern EffectEditorDefaultSlot DAT_0044f858;
extern u8 DAT_004d8bd0;

// Recreates the editor's part and clears its current/default selections.
u32 FUN_00327858(void)
{
    if (g_effectEditor.selection.resource != NULL) {
        registrationEntryInsert(g_effectEditor.selection.unk10, 3);
        g_effectEditor.selection.unk10 = 0;
        if (g_effectEditor.selection.resource != NULL) {
            resourceQueueDeferredDestroy(g_effectEditor.selection.resource, 3);
            g_effectEditor.selection.resource = NULL;
        }
    }
    if (g_effectEditor.selection.list != NULL) {
        registrationEntryInsert((u32)g_effectEditor.selection.list, 3);
    }
    g_effectEditor.selection.list = effPartCreate();
    // The retail symbol names the second element of the paired defaults.
    EffectEditorDefaultPair* defaults = (EffectEditorDefaultPair*)
        ((u8*)&DAT_0044f858 - offsetof(EffectEditorDefaultPair, second));
    defaults->first.object.indices.extraOffset = 0;
    g_effectEditor.selection.index = 0;
    defaults->second.object.indices.extraOffset = 0;
    DAT_004d8bd0 = 0;
    g_effectEditor.selection.object = &defaults->second.object;
    return 0;
}
}
