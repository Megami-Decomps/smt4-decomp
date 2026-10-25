/* NON_MATCHING: Paired default-state addresses and reset stores are formed differently. */
#include "shard/W6_W6Match2_EffectEditor.h"
#include "AsdSDK/EffectEditorDefaults.h"
extern "C" {
void asdEffectQueueRelease(u32, s32);
void objectRegistryInsert(void*, s32);
void* effPartCreate(void);
extern EffectEditorDefaultSlot DAT_0059e9a8;
extern u8 g_effectEditorResourceName;

// Recreates the editor's part and clears its current/default selections.
u32 FUN_003ca914(void)
{
    if (g_effectEditor.selection.resource != NULL) {
        asdEffectQueueRelease(g_effectEditor.selection.unk10, 3);
        g_effectEditor.selection.unk10 = 0;
        if (g_effectEditor.selection.resource != NULL) {
            objectRegistryInsert(g_effectEditor.selection.resource, 3);
            g_effectEditor.selection.resource = NULL;
        }
    }
    if (g_effectEditor.selection.list != NULL) {
        asdEffectQueueRelease((u32)g_effectEditor.selection.list, 3);
    }
    g_effectEditor.selection.list = effPartCreate();
    // The retail symbol names the second element of the paired defaults.
    EffectEditorDefaultPair* defaults = (EffectEditorDefaultPair*)
        ((u8*)&DAT_0059e9a8 - offsetof(EffectEditorDefaultPair, second));
    defaults->first.object.indices.extraOffset = 0;
    g_effectEditor.selection.index = 0;
    defaults->second.object.indices.extraOffset = 0;
    g_effectEditorResourceName = 0;
    g_effectEditor.selection.object = &defaults->second.object;
    return 0;
}
}
