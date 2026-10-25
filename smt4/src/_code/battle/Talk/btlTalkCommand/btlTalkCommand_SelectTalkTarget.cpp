/* NON_MATCHING: valid-target branch layout restored; record/id/low-bound register lifetimes and one native alignment NOP differ. */
#include "shard/W6_W6Match5_DevilSort.h"
#include "shard/PadState.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdMemAlloc.h"

struct TalkDevilRecord {
    u16 id;
    u8 level;
    u8 unk03[0x13];
    u16 flags;                 // 0x16
    u8 unk18[0x6a];
    u16 targetId;              // 0x82
    u8 unk84[0x24];
};
struct Table01Record;
extern "C" {
u32 scrGetArg(u32 index);
void scrSetResult(s32 result);
TalkDevilRecord *dataTable00FindById(u16 id);
PadState *gameGetPlayerData();
u32 partyHasStoredDemon(u32 id);
Table01Record *FUN_002bd06c(u16 id);
s32 randBetween(s32 low, s32 high);
s32 randNextInRange(u32 maximum);
void asdMemFree(void *memory);

u32 btlTalkCommand_SelectTalkTarget()
{
    TalkDevilRecord *source = dataTable00FindById((u16)scrGetArg(0));
    s16 target = source->targetId;
    TalkDevilRecord *record = dataTable00FindById(target);
    devilGetRecord(target);
    if (target && record && (record->flags & 0x400) &&
        gameGetPlayerData()->unk76 >= record->level && !partyHasStoredDemon(target)) {
        scrSetResult(target);
    } else {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\Talk\\btlTalkCommand.cpp", 0x387);
        s16 *candidates = (s16 *)asdMemAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT,
                                            0, 0x962, 1);
        u16 count = 0;
        u32 playerLevel = gameGetPlayerData()->unk76;
        s32 high = source->level;
        if (playerLevel <= (u32)high) {
            high = gameGetPlayerData()->unk76;
        }
        s32 span = high / 2;
        if (span < 10) {
            span = 10;
        }
        s16 low = high - span;
        if (randBetween(low, high) <= 0) {
            scrSetResult(-1);
        } else {
            if (low <= 0) {
                low = 1;
            }
            for (u32 id = 1; id <= 1200; ++id) {
                DevilSortRecord *devil = devilGetRecord((u16)id);
                TalkDevilRecord *data = dataTable00FindById((u16)id);
                if (devil->level >= low && devil->level <= high &&
                    (data->flags & 0x400) && !partyHasStoredDemon(devil->id)) {
                    FUN_002bd06c(devil->id);
                    candidates[count++] = (s16)devil->id;
                }
            }
            s32 result;
            if (count) {
                result = candidates[(s16)randNextInRange((u16)(count - 1))];
            } else {
                result = -1;
            }
            scrSetResult(result);
        }
        asdMemFree(candidates);
    }
    return 1;
}
}
