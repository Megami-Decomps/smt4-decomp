#include "common.h"

namespace {

struct DevilRecordView {
    u8 unk00[0x90]; // 0x00
    u16 unk90;     // 0x90
};

struct DevilListView {
    s16 devilIds[16]; // 0x00
    u8 unk20[16];     // 0x20
};

}

extern "C" DevilRecordView* devilGetRecord(s32 devilId);

// Mark an existing devil entry, or insert it into the first free slot, if its record qualifies.
extern "C" void devilListMarkOrInsertQualifiedEntry(DevilListView* list, s32 devilId)
{
    DevilRecordView* record = devilGetRecord(devilId);
    if (record == 0 || record->unk90 >= 0x160) {
        return;
    }

    for (s32 index = 0; index < 16; ++index) {
        if (list->devilIds[index] == devilId) {
            list->unk20[index] = 1;
            return;
        }
    }

    for (s32 index = 0; index < 16; ++index) {
        if (list->devilIds[index] == -1) {
            list->devilIds[index] = static_cast<s16>(devilId);
            list->unk20[index] = 1;
            return;
        }
    }
}
