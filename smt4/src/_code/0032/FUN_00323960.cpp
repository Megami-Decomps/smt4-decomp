/* NON_MATCHING: the two editor blocks are defined here (DAT_0044f578, 0x2e0 bytes, then DAT_0044f858) so armcc derives the first from the second like retail (`sub r1, r5, #736`); remaining: retail reloads the list straight into r0 for the second call (ours caches it in r2) and the pool order differs. The retail blocks are initialised .data holding code/string pointers: a shared editor-data source must replace these zero stand-ins. */
#include "common.h"
#include "shard/W6_W6Match2_EffectEditor.h"
#include "AsdSDK/Source/Util/AsdListHelpers_LinkedItems.h"

struct EditorBlock00323960 {
    /* 0x000 */ u8 unk000[0xc];
    /* 0x00c */ s32 index;
    /* 0x010 */ u8 unk010[0x2d0];
};

extern "C" {

u32 DAT_0044f578[0x2e0 / 4];
EditorBlock00323960 DAT_0044f858;

void FUN_002e7ed4(LinkedItems *items, LinkedItem *item);

/* Selects the current editor item and resets the two editing blocks. */
void FUN_00323960(void)
{
    s32 index = DAT_0044f858.index + g_effectEditor.selection.index;
    FUN_002e7ed4(static_cast<LinkedItems *>(g_effectEditor.selection.list),
                 linkedFindItemByIndex(static_cast<LinkedItems *>(g_effectEditor.selection.list), index));
    DAT_0044f578[3] = 0;
    g_effectEditor.selection.index = 0;
    DAT_0044f858.index = 0;
    g_effectEditor.selection.object = (EffectSelectionTemplate *)&DAT_0044f858;
}

} /* extern "C" */
