#include "common.h"

// Private view of the table fields accessed by this function.
struct Table00RecordView {
    u8 unk00[0x0C]; // 0x00
    u16 unk0C;      // 0x0C
    u16 unk0E;      // 0x0E
    u16 unk10;      // 0x10
    u16 unk12;      // 0x12
    u16 unk14;      // 0x14
};

extern "C" {
s32 scrGetArg(s32 index);
s32 gameGetPlayerStat(u8 statIndex);
const Table00RecordView* dataTable00FindById(u16 id);
void scrSetResult(s32 result);

// Reports whether the selected player stat meets the table entry's threshold.
u32 scriptComparePlayerStatThreshold(void)
{
    const s32 statIndex = scrGetArg(0);
    const s32 playerStat = gameGetPlayerStat(static_cast<u8>(statIndex));
    s32 threshold = 0;
    const u16 entryId = static_cast<u16>(scrGetArg(1));
    const Table00RecordView* entry = dataTable00FindById(entryId);

    if (entry != 0) {
        switch (static_cast<u8>(statIndex)) {
        case 0:
            threshold = entry->unk0C;
            break;
        case 1:
            threshold = entry->unk0E;
            break;
        case 2:
            threshold = entry->unk10;
            break;
        case 3:
            threshold = entry->unk12;
            break;
        case 4:
            threshold = entry->unk14;
            break;
        }
    }

    scrSetResult(playerStat >= threshold);
    return 1;
}
}
