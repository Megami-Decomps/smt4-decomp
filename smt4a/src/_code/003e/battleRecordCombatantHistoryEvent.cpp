/* NON_MATCHING: -O3 hoists all category-mask tests and the history base, spilling inputs and caching the player tag in VFP; -O2 may retain retail's per-entry loads. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct BattleHistoryEntry {
    u32 category;
    s16 id;
    u8 firstEvent;
    u8 secondEvent;
    u8 thirdEvent;
    u8 unk09[3];
};

extern "C" {
extern BtlMainGlobalsA g_btlMain;

void battleRecordCombatantHistoryEvent(BtlMainStateA *battle, const BtlCombatantEntryA *unit, s32 event)
{
    BattleHistoryEntry *entries = reinterpret_cast<BattleHistoryEntry *>(battle->history.records);
    u64 flags = unit->flags;
    u32 playerCategory = static_cast<u32>(g_btlMain.actorCategories[0]);
    BattleHistoryEntry *record = NULL;
    for (s32 index = 0; index < 128; ++index) {
        BattleHistoryEntry *candidate = &entries[index];
        if (flags & g_btlMain.actorCategories[0]) {
            if (candidate->id == -1) {
                record = candidate;
                break;
            }
        } else if (((flags & g_btlMain.actorCategories[1]) ||
                    (flags & g_btlMain.actorCategories[2]) ||
                    (flags & g_btlMain.actorCategories[3])) && candidate->id == unit->id) {
            record = candidate;
            break;
        }
    }
    if (record == NULL) {
        for (s32 index = 0; index < 128; ++index) {
            if (entries[index].id == 0 && entries[index].category == 0) {
                record = &entries[index];
                break;
            }
        }
        if (record == NULL) {
            return;
        }
        if (flags & g_btlMain.actorCategories[0]) {
            record->id = -1;
            record->category = playerCategory;
        } else {
            record->id = unit->id;
            flags = unit->flags;
            if (flags & g_btlMain.actorCategories[1]) {
                record->category = g_btlMain.actorCategories[1];
            } else if (flags & g_btlMain.actorCategories[2]) {
                record->category = g_btlMain.actorCategories[2];
            } else if (flags & g_btlMain.actorCategories[3]) {
                record->category = g_btlMain.actorCategories[3];
            }
        }
    }
    if (event == 1) {
        record->firstEvent = 1;
    } else if (event == 2) {
        record->secondEvent = 1;
    } else if (event == 3) {
        record->thirdEvent = 1;
    }
}
}
