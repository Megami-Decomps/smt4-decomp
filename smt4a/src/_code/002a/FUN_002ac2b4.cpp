/* NON_MATCHING: bodies, bitfield id extraction and loop layout match retail; only the prologue differs (retail tests chain before loading g_unite, so selection stays in r0; the build hoists the g_unite load above the test). */
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/Shard004B.h"

extern "C" {
extern UniteWork *g_unite;
BitsAt60 *slotRecordFindById(u32);

// Test whether a selected fusion pair or chain contains a unit with flag bit two.
u32 FUN_002ac2b4(s32 selection, s32 chain)
{
    struct ChainGroup {
        u16 ids[12];
        u8 unk18[0x10];
    };
    struct ChainSelectionView {
        u8 unk0000[0x523a];
        ChainGroup groups[1];
    };
    u32 result;
    if (chain == 0) {
        UniteWork *work = g_unite;
        result = 0;
        for (s32 component = 0; component < 2; ++component) {
            u32 id;
            if (component == 0) {
                id = work->pairList.pairs[selection].ids.firstId;
            } else {
                id = work->pairList.pairs[selection].ids.secondId;
            }
            if (id != 0) {
                BitsAt60 *record = slotRecordFindById(id);
                if (record != NULL && (record->bits & 4) != 0) {
                    result = 1;
                    break;
                }
            }
        }
    } else {
        result = 0;
        const ChainSelectionView *view = reinterpret_cast<const ChainSelectionView *>(g_unite);
        for (s32 index = 0; index < 12; ++index) {
            if (view->groups[selection].ids[index] != 0) {
                BitsAt60 *record = slotRecordFindById(view->groups[selection].ids[index]);
                if (record != NULL && (record->bits & 4) != 0) {
                    result = 1;
                    break;
                }
            }
        }
    }
    return result;
}
}
