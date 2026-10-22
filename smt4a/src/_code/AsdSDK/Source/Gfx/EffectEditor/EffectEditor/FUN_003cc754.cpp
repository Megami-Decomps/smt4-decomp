/* NON_MATCHING: adjacent option arrays lose merged-global address arithmetic and copy-buffer registers differ. */
#include "shard/W6_W6Match2_EffectEditor.h"
#include "AsdSDK/EffectEditorSelectionTransfer.h"

extern "C" {
extern EffectSelectionContext DAT_0059e9a8;
extern EffectEditorSelectionTransfer DAT_00634bc0;
extern EffectEditorOptions DAT_0059e858;
extern const u8 DAT_0059e738[];
extern const u8 DAT_0059e780[];
void *linkedFindItemByIndex(void *list, s32 index);
void rt_memcpy_w(void *destination, const void *source, u32 size);

u32 FUN_003cc754(u32 result)
{
    void *item = linkedFindItemByIndex(g_effectEditor.selection.list,
        g_effectEditor.selection.index + DAT_0059e9a8.index);
    rt_memcpy_w(item, &DAT_00634bc0.working, sizeof(DAT_00634bc0.working));
    rt_memcpy_w(DAT_00634bc0.saved, &DAT_00634bc0.working, sizeof(DAT_00634bc0.saved));
    g_effectEditor.unk00[6] = 1;
    if (DAT_00634bc0.working.flags & 2) {
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
