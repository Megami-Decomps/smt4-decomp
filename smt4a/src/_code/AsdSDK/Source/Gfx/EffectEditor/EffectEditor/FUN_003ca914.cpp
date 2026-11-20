/* NON_MATCHING: Paired default-state addresses and reset stores are formed differently. */
#include "gfx/EffectEditorStorage.h"
#include "AsdSDK/EffectEditorDefaults.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
extern "C" {
void asdEffectQueueRelease(u32, s32);
void objectRegistryInsert(void*, s32);
extern EffectEditorDefaultSlot g_effectEditorState;

// Recreates the editor's part and clears its current/default selections.
u32 FUN_003ca914(void)
{
    if (g_effectEditor.resource != NULL) {
        asdEffectQueueRelease((u32)g_effectEditor.node, 3);
        g_effectEditor.node = 0;
        if (g_effectEditor.resource != NULL) {
            objectRegistryInsert(g_effectEditor.resource, 3);
            g_effectEditor.resource = NULL;
        }
    }
    if (g_effectEditor.list != NULL) {
        asdEffectQueueRelease((u32)g_effectEditor.list, 3);
    }
    g_effectEditor.list = effPartCreate();
    // The retail symbol names the second element of the paired defaults.
    EffectEditorDefaultPair* defaults = (EffectEditorDefaultPair*)
        ((u8*)&g_effectEditorState - offsetof(EffectEditorDefaultPair, second));
    defaults->first.object.indices.extraOffset = 0;
    g_effectEditor.index = 0;
    defaults->second.object.indices.extraOffset = 0;
    g_effectEditorResourceName[0] = 0;
    g_effectEditor.object = &defaults->second.object;
    return 0;
}
}
