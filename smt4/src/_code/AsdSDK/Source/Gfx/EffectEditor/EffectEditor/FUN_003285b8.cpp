/* NON_MATCHING: adjacent option arrays lose merged-global address arithmetic and copy-buffer registers differ. */
#include "shard/W6_W6Match2_EffectEditor.h"
#include "AsdSDK/EffectEditorSelectionTransfer.h"

extern "C" {
extern EffectSelectionContext DAT_0044f858;
extern EffectEditorSelectionTransfer g_effectEditorSettings;
extern EffectEditorOptions DAT_0044f708;
extern const u8 DAT_0044f5e8[];
extern const u8 DAT_0044f630[];
void *linkedFindItemByIndex(void *list, s32 index);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);

u32 FUN_003285b8(u32 result)
{
    void *item = linkedFindItemByIndex(g_effectEditor.selection.list,
        g_effectEditor.selection.index + DAT_0044f858.index);
    __aeabi_memcpy4(item, &g_effectEditorSettings.working, sizeof(g_effectEditorSettings.working));
    __aeabi_memcpy4(g_effectEditorSettings.saved, &g_effectEditorSettings.working, sizeof(g_effectEditorSettings.saved));
    g_effectEditor.unk00[6] = 1;
    if (g_effectEditorSettings.working.flags & 2) {
        DAT_0044f708.options = DAT_0044f5e8;
        DAT_0044f708.limit = 3;
        if (DAT_0044f708.index > 3) {
            DAT_0044f708.index = 0;
        }
    } else {
        DAT_0044f708.options = DAT_0044f630;
        DAT_0044f708.limit = 9;
        if (DAT_0044f708.index == 0) {
            DAT_0044f708.index = 1;
        }
    }
    return result;
}
}
