/* NON_MATCHING: initialization ID/key pointers and rank-scan counter/base/flags use different registers; O2 allocation candidate. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

namespace {
enum {
    RankSlots = 20,
    FirstRoster = 4,
    RosterLimit = 54
};

union RosterRankView {
    BattleRosterRecordA value;
    struct {
        /* 0x00 */ u8 unk00[0x44];
        /* 0x44 */ s8 group;
        /* 0x45 */ u8 rank;
    } order;
};

struct RosterSortKey {
    /* 0x00 */ s16 id;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ f32 key;
    /* 0x08 */ u16 unk08;
    /* 0x0A */ u16 unk0A;
};

}

struct SortEntry;
extern "C" {
s32 uiCompareFloatKeys(const SortEntry*, const SortEntry*);
void qsort(void*, u32, u32, s32 (*)(const SortEntry*, const SortEntry*));

/* Sort eligible roster X keys per group, then write compact byte ranks by matching ids. */
void battleRosterAssignGroupXOrder(BtlMainStateA* state, u32)
{
    RosterSortKey keys[RankSlots];
    // The first byte of the roster-control block is the dynamically reloaded group count.
    for (s32 group = 0; group < state->unk1ed8[0]; ++group) {
        for (s32 i = 0; i < RankSlots; ++i) {
            keys[i].id = -1;
            keys[i].key = 0.0f;
            keys[i].unk08 = 0;
        }
        s32 count = 0;
        for (s32 i = FirstRoster; i < RosterLimit; ++i) {
            const RosterRankView& entry =
                reinterpret_cast<const RosterRankView*>(state->roster)[i];
            if ((entry.value.render.flags & 1) && (entry.value.render.flags & 0x80) &&
                entry.order.group == group) {
                keys[count].id = entry.value.render.group;
                keys[count].key = entry.value.render.position[0];
                ++count;
            }
        }
        qsort(keys, count, sizeof(RosterSortKey), uiCompareFloatKeys);

        u32 rank = 0;
        for (s32 key = 0; key < RankSlots; ++key) {
            for (s32 i = FirstRoster; i < RosterLimit; ++i) {
                RosterRankView& entry =
                    reinterpret_cast<RosterRankView*>(state->roster)[i];
                if ((entry.value.render.flags & 1) && (entry.value.render.flags & 0x80) &&
                    entry.order.group == group && entry.value.render.group == keys[key].id) {
                    entry.order.rank = static_cast<u8>(rank++);
                    break;
                }
            }
        }
    }
}
} // extern "C"
