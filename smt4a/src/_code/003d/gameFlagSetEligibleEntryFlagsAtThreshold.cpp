#include "common.h"
#include "gamedata/GameFlags.h"

// Private view of the record returned by FUN_001ad9b4.
namespace {

struct EntryRecordView {
    u8 unk00[0xec];       // 0x000
    u16 unkEC;            // 0x0ec
    u8 unkEE[0x32];       // 0x0ee
    s16 unk120;           // 0x120
};

}

extern "C" {
u8* gameFlagBlockGetEntry(u16 entryId);
s32 FUN_003df390(u16 entryId);
EntryRecordView* FUN_001ad9b4(u16 entryId);


// Set the associated flags for eligible entries whose nonzero threshold has been reached.
void gameFlagSetEligibleEntryFlagsAtThreshold(s32 threshold)
{
    for (s32 entryId = 100; entryId < 400; ++entryId) {
        if ((*gameFlagBlockGetEntry((u16)entryId) & 1) != 0) {
            continue;
        }
        if (FUN_003df390((u16)entryId) == 0) {
            continue;
        }

        EntryRecordView* record = FUN_001ad9b4((u16)entryId);
        if (record == 0 || record->unk120 == 0 || record->unk120 > threshold) {
            continue;
        }

        record = FUN_001ad9b4((u16)entryId);
        if (record != 0 && record->unkEC != 0) {
            gameFlagSetValue(record->unkEC, 1, 1);
        }
    }
}
}
