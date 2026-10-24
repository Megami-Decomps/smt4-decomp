/* NON_MATCHING: now written against the real second block DAT_0044f858 (first block = one 0x2e0 entry before it); retail swaps the two table base registers, keeps `sub r1, r5, #736` and reloads the list differently. */
#include "common.h"
#include "shard/W6_W6Match2_EffectEditor.h"

struct EditorBlock00323960 {
    /* 0x000 */ u8 unk000[0xc];
    /* 0x00c */ s32 index;
    /* 0x010 */ u8 unk010[0x2d0];
};

extern "C" {

extern EditorBlock00323960 DAT_0044f858;

void *linkedFindItemByIndex(void *list, s32 index);
void FUN_002e7ed4(void *list, void *item);

/* Selects the current editor item and resets the two editing blocks. */
void FUN_00323960(void)
{
    EditorBlock00323960 *second = &DAT_0044f858;
    void *item = linkedFindItemByIndex(g_effectEditor.selection.list, second->index + g_effectEditor.selection.index);
    FUN_002e7ed4(g_effectEditor.selection.list, item);
    (second - 1)->index = 0;
    g_effectEditor.selection.index = 0;
    second->index = 0;
    g_effectEditor.selection.object = (EffectSelectionTemplate *)second;
}

} /* extern "C" */
