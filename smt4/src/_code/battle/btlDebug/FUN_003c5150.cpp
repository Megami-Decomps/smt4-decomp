/* NON_MATCHING: only instruction order differs: retail loads work->listBox (r0) before selectedId/category (r2) for the two arm-local ItemMode3/ItemMode2 calls */
#include "shard/W6_W6Match8_BattleDebug.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "gamedata/DataTable.h"

extern "C" {

struct BattleDebugFlagsView {
    u8 unk00[0x5c];
    u32 job;
    u8 unk60[0x4448];
    u64 flags;
};

extern AsdListBoxEntry DAT_004343a8[];
extern u32 DAT_00435dc0;
extern u32 DAT_00435dd8;
u32 asdListBoxCreateDefault(u32 parent, u32 priority, u32 flags, u32 option);
void asdListBoxAddItems(u32 listBox, const AsdListBoxEntry *entries, u32 count);
void asdListBoxSetByteValue(u32 listBox, u8 value);
void jobSetText(u32 job, const char *text);
void asdListBoxSetItemMode3(u32 listBox, u32 index, u32 value, u32 minimum, u32 maximum, u8 option);
void asdListBoxSetItemMode2(u32 listBox, u32 index, u32 value);
s32 dataTable03Sub0GetCount(void);
s32 dataTable22GetCount(void);

// Build the battle debug menu from the current category, ids and debug flags.
void FUN_003c5150(BattleDebugWork *work, const BattleDebugFlagsView *owner)
{
    u32 listBox = asdListBoxCreateDefault(owner->job, 0x73, 0, 0);
    work->listBox = listBox;
    asdListBoxAddItems(listBox, DAT_004343a8, 15);
    asdListBoxSetByteValue(work->listBox, 1);
    jobSetText(work->listBox, "btl Debug Menu");
    if (g_btlDebugState.category == 0) {
        s32 count = dataTable22GetCount();
        asdListBoxSetItemMode3(work->listBox, 0, g_btlDebugState.selectedId, 0, count - 1, 0);
        asdListBoxSetItemMode2(work->listBox, 1, g_btlDebugState.category);
    } else {
        s32 count = dataTable03Sub0GetCount();
        asdListBoxSetItemMode3(work->listBox, 0, g_btlDebugState.selectedId, 0, count - 1, 0);
        asdListBoxSetItemMode2(work->listBox, 1, g_btlDebugState.category);
    }
    asdListBoxSetItemMode3(work->listBox, 2, DAT_00435dc0, 0, 0x4b1, 0);
    asdListBoxSetItemMode3(work->listBox, 3, DAT_00435dd8, 0, 1000, 0);
    asdListBoxSetItemMode2(work->listBox, 4, ((u32)owner->flags & 0x4000) >> 14);
    asdListBoxSetItemMode2(work->listBox, 5, ((u32)owner->flags & 0x8000) >> 15);
    asdListBoxSetItemMode2(work->listBox, 6, ((u32)owner->flags & 0x10000) >> 16);
    asdListBoxSetItemMode2(work->listBox, 11, ((u32)owner->flags & 0x20000000) >> 29);
    asdListBoxSetItemMode2(work->listBox, 12, (owner->flags & 0x2000000000ULL) != 0);
    asdListBoxSetItemMode2(work->listBox, 13, ((u32)owner->flags & 0x100000) >> 20);
    asdListBoxSetItemMode2(work->listBox, 14, (u32)owner->flags >> 31);
    void *section = dataTableGet(0x1c, 2);
    dataTableGetEntries(section);
    asdListBoxSetItemMode3(work->listBox, 10, 0, 0, dataTableGetCount(section), 0);
}

} /* extern "C" */
