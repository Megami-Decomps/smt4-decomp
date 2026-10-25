/* NON_MATCHING: retail defines the record, its saved header and the page tables in this unit and addresses g_effectEditorSettings and DAT_0044f5e8 relative to their neighbours (`sub r0, r1, #0x160`, `sub r1, r0, #0x120`); extern globals need their own literals. */
#include "gfx/EffectEditorStorage.h"

/* One line of an editor parameter page. */
struct EffectEditorPageItem {
    /* 0x00 */ u8 unk00[0x18];
};

/* The parameter page cursor: the shown items and the selected one. */
struct EffectEditorPageCursor {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ s32 index;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ EffectEditorPageItem *items;
    /* 0x18 */ s32 itemCount;
};

extern "C" {
extern EffectSelectionContext DAT_0044f858;


extern EffectEditorPageCursor DAT_0044f708;
extern EffectEditorPageItem DAT_0044f5e8[3];
extern EffectEditorPageItem DAT_0044f630[9];
void *linkedFindItemByIndex(void *list, s32 index);
void *__aeabi_memcpy4(void *destination, const void *source, u32 size);

/* Reloads the selected effect record over its saved header and picks the parameter page for its
 * kind (flag 2: the three-line page, else the nine-line page), keeping the cursor in range. */
void *FUN_00326e94(void *arg)
{
    void *item = linkedFindItemByIndex(g_effectEditor.selection.list,
                                       DAT_0044f858.index + g_effectEditor.selection.index);
    __aeabi_memcpy4(&g_effectEditorSettings, item, sizeof(g_effectEditorSettings));
    __aeabi_memcpy4(&g_effectEditorSettings, &g_effectEditorSavedSnapshot, sizeof(g_effectEditorSavedSnapshot));
    if (g_effectEditorSettings.record.flags & 2) {
        DAT_0044f708.items = DAT_0044f5e8;
        DAT_0044f708.itemCount = 3;
        if (DAT_0044f708.index > 3) {
            DAT_0044f708.index = 0;
        }
    } else {
        DAT_0044f708.items = DAT_0044f630;
        DAT_0044f708.itemCount = 9;
        if (DAT_0044f708.index == 0) {
            DAT_0044f708.index = 1;
        }
    }
    return arg;
}

} /* extern "C" */
