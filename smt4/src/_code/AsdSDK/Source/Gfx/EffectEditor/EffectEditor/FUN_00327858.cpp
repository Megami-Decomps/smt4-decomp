/* NON_MATCHING: Paired default-state addresses and reset stores are formed differently. */
#include "ui/UiSpriteApi.h"
#include "gfx/EffectEditorStorage.h"
#include "AsdSDK/EffectEditorDefaults.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
extern "C" {
void registrationEntryInsert(u32, s32);
void resourceQueueDeferredDestroy(void*, s32);
extern EffectEditorDefaultSlot DAT_0044f858;

// Recreates the editor's part and clears its current/default selections.
u32 FUN_00327858(void)
{
    if (g_effectEditor.resource != NULL) {
        registrationEntryInsert((u32)g_effectEditor.node, 3);
        g_effectEditor.node = 0;
        if (g_effectEditor.resource != NULL) {
            resourceQueueDeferredDestroy(g_effectEditor.resource, 3);
            g_effectEditor.resource = NULL;
        }
    }
    if (g_effectEditor.list != NULL) {
        registrationEntryInsert((u32)g_effectEditor.list, 3);
    }
    g_effectEditor.list = effPartCreate();
    // The retail symbol names the second element of the paired defaults.
    EffectEditorDefaultPair* defaults = (EffectEditorDefaultPair*)
        ((u8*)&DAT_0044f858 - offsetof(EffectEditorDefaultPair, second));
    defaults->first.object.indices.extraOffset = 0;
    g_effectEditor.index = 0;
    defaults->second.object.indices.extraOffset = 0;
    g_effectEditorResourceName[0] = 0;
    g_effectEditor.object = &defaults->second.object;
    return 0;
}
}
