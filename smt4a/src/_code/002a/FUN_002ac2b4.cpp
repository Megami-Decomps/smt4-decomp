/* NON_MATCHING: retail 55 vs built 51 rows; fusion-pair extraction and member-scan register allocation differ. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/Shard004B.h"

extern "C" {
extern UniteWork *g_unite;
BitsAt60 *slotRecordFindById(u32);

// Test whether a selected fusion pair or chain contains a unit with flag bit two.
u32 FUN_002ac2b4(s32 selection, s32 chain)
{
    struct ChainGroup {
        s16 ids[12];
        u8 unk18[0x10];
    };
    struct ChainSelectionView {
        u8 unk0000[0x523a];
        ChainGroup groups[1];
    };
    UniteWork *work = g_unite;
    if (chain != 0) {
        const ChainGroup *group = &reinterpret_cast<const ChainSelectionView *>(work)->groups[selection];
        for (s32 index = 0; index < 12; ++index) {
            if (group->ids[index] != 0) {
                BitsAt60 *record = slotRecordFindById(group->ids[index]);
                if (record != NULL && (record->bits & 4) != 0)
                    return 1;
            }
        }
    } else {
        for (s32 component = 0; component < 2; ++component) {
            s32 packed = work->pairList.pairs[selection].packedIds;
            u32 id = component == 0 ? packed & 0x7fff : (packed >> 15) & 0x7fff;
            if (id != 0) {
                BitsAt60 *record = slotRecordFindById(id);
                if (record != NULL && (record->bits & 4) != 0)
                    return 1;
            }
        }
    }
    return 0;
}
}
