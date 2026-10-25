#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/SaveSlotTable.h"

struct TalkCandidateParty {
    u8 unk0000[0x1c88];
    s8 slots[24];
    s8 activeSlots[3];
    u8 count;
};
struct TalkCandidateMasks {
    u64 unk00;
    u64 eligible;
    u64 unk10;
    u64 required;
    u64 unk20;
    u64 excluded;
};
struct BitsAt60;

extern "C" {
extern TalkCandidateMasks g_btlMessageFlagMasks;
s32 scrGetArg(u32);
void scrSetResult(s32);
u8 bitsAt60Test(BitsAt60 *, u8);
u32 FUN_004bd0d8(SlotRecord *);
u32 randRange(s32);

u32 btlTalkChooseRandomPartyTarget()
{
    u32 excludedId = scrGetArg(0);
    s8 candidates[24] = {0};
    s32 result = -1;
    s8 available = 0;
    s8 active = 0;
    s32 index = 0;
    s32 count = ((TalkCandidateParty *)gameGetSlotTable())->count;
    if (count > 0) {
        do {
            s8 slot = ((TalkCandidateParty *)gameGetSlotTable())->slots[index];
            if (slot >= 0) {
                SlotRecord *record = gameGetSlotRecord(slot);
                if (!bitsAt60Test((BitsAt60 *)record, 1) &&
                    !bitsAt60Test((BitsAt60 *)record, 10) && record->entryId != excludedId) {
                    if (!FUN_004bd0d8(record)) {
                        candidates[available] = slot;
                        ++available;
                    } else {
                        ++active;
                    }
                }
            }
            ++index;
        } while (index < ((TalkCandidateParty *)gameGetSlotTable())->count);
        if (available > 0) {
            s8 pick = (s8)randRange((u16)(available - 1));
            result = candidates[pick] + 0x6d;
        } else if (active > 0) {
            s8 selected = (s8)randRange((u16)(active - 1));
            s8 seen = 0;
            for (s32 entryIndex = 0; entryIndex < 0x6d; ++entryIndex) {
                BtlCombatantEntryA *entry = &btlGetMainState()->entries[entryIndex];
                if ((entry->flags & g_btlMessageFlagMasks.eligible) && !(entry->flags & g_btlMessageFlagMasks.excluded) &&
                    entry->unitIndex >= 0 && (entry->flags & g_btlMessageFlagMasks.required)) {
                    if (selected == seen) {
                        result = entry->unitIndex;
                        break;
                    }
                    ++seen;
                }
            }
        }
    }
    scrSetResult(result);
    return 1;
}
}
