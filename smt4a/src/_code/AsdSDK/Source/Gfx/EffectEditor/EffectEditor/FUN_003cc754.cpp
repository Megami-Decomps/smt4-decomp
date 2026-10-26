/* NON_MATCHING: adjacent option arrays lose merged-global address arithmetic and copy-buffer registers differ. */
#include "gfx/EffectEditorStorage.h"
#include "AsdSDK/EffectEditorSelectionTransfer.h"
#include "shard/linkedFindItemByIndex.h"

extern "C" {
extern EffectSelectionContext DAT_0059e9a8;

extern EffectEditorOptions DAT_0059e858;
extern const u8 DAT_0059e738[];
extern const u8 DAT_0059e780[];
void __aeabi_memcpy4(void *destination, const void *source, u32 size);

u32 FUN_003cc754(u32 result)
{
    void *item = linkedFindItemByIndex(reinterpret_cast<const LinkedItems *>(g_effectEditor.selection.list), g_effectEditor.selection.index + DAT_0059e9a8.index);
    __aeabi_memcpy4(item, &g_effectEditorSettings, sizeof(g_effectEditorSettings));
    __aeabi_memcpy4(g_effectEditorSavedSnapshot.data, &g_effectEditorSettings, sizeof(g_effectEditorSavedSnapshot.data));
    g_effectEditor.unk00[6] = 1;
    if (g_effectEditorSettings.record.flags & 2) {
        DAT_0059e858.options = DAT_0059e738;
        DAT_0059e858.limit = 3;
        if (DAT_0059e858.index > 3) {
            DAT_0059e858.index = 0;
        }
    } else {
        DAT_0059e858.options = DAT_0059e780;
        DAT_0059e858.limit = 9;
        if (DAT_0059e858.index == 0) {
            DAT_0059e858.index = 1;
        }
    }
    return result;
}
}
