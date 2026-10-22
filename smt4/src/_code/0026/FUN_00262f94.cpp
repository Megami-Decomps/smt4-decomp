/* NON_MATCHING: Retail ldr r1, [pc, #132] differs from recovered ldr r0, [pc, #132]. */
#include "common.h"

namespace {

struct GameRecordView {
    u8 unk00[0x46];             // 0x00
    u16 unk46;                 // 0x46
    u8 unk48[0x5BC];           // 0x48
};

struct GameRecordListView {
    u8 unk00[0x90];            // 0x0000
    GameRecordView unk90[24];  // 0x0090
    s8 unk90F0[24];            // 0x90F0
};

struct GameDataView {
    u8 unk00[0x8C];            // 0x00000
    GameRecordListView unk8C;  // 0x0008C
    u8 unk9194[0x1BA18];       // 0x09194
    s16 unk24BAC;              // 0x24BAC
};

struct GameDataBlocksView {
    u32 unk00;                 // 0x00
    GameDataView* unk04;       // 0x04
};

}

extern "C" GameDataBlocksView g_gameDataBlocks;

// Find the first listed record matching the nonzero selected identifier.
extern "C" GameRecordView* FUN_00262f94(void)
{
    GameRecordView* result = 0;
    GameDataView* gameData = g_gameDataBlocks.unk04;
    GameRecordListView* recordList = &gameData->unk8C;
    s32 selectedId = gameData->unk24BAC;

    if (selectedId != 0) {
        for (s32 slotIndex = 0; slotIndex < 24; ++slotIndex) {
            s32 recordIndex = recordList->unk90F0[slotIndex];
            if (recordIndex >= 0 &&
                recordList->unk90[recordIndex].unk46 == selectedId) {
                result = &recordList->unk90[recordList->unk90F0[slotIndex]];
                break;
            }
        }
    }

    return result;
}
