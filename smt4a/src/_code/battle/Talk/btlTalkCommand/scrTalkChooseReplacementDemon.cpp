/* NON_MATCHING: source/definition/ID registers and valid-successor return-block placement differ; -O2 candidate. */
#include "AsdSDK/AsdDebug.h"

struct TalkReplacementDefinition {
    u16 unk00, level;
    u8 unk04[0x12];
    u16 flags;
    u8 unk18[0x6e];
    u16 successor;
};
struct TalkReplacementDemon { u16 id; u8 unk02[4]; u16 level; };
struct TalkReplacementPlayer { u8 unk00[0x62]; u16 level; };
extern "C" {
u32 scrGetArg(u32);
const TalkReplacementDefinition *dataTable00FindById(u32);
const TalkReplacementDemon *FUN_00184310(u32);
const TalkReplacementPlayer *gameGetPlayerData();
s32 gameStockContainsEntry(u16);
void *asdMemoryAllocTracked(u32, u32, u32, u32, u32);
s32 FUN_00184964(s32, s32);
void FUN_00180118(u16);
s32 randRange(u32);
void scrSetResult(s32);
void asdMemFree(void *);

u32 scrTalkChooseReplacementDemon()
{
    const TalkReplacementDefinition *source = dataTable00FindById((u16)scrGetArg(0));
    s16 successorId = source->successor;
    const TalkReplacementDefinition *successor = dataTable00FindById(successorId);
    FUN_00184310(successorId);
    if (!successorId || !successor || !(successor->flags & 0x80) ||
        gameGetPlayerData()->level < (successor->level & 0x7fffU) || gameStockContainsEntry(successorId)) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\Talk\\btlTalkCommand.cpp", 1054);
        s16 *candidates = (s16 *)asdMemoryAllocTracked(0x100, 0x100, 0, 1201 * sizeof(s16), 1);
        u16 count = 0;
        const TalkReplacementPlayer *player = gameGetPlayerData();
        u16 level = source->level & 0x7fff;
        if (player->level <= level)
            level = gameGetPlayerData()->level;
        s32 upper = (s16)level;
        s32 span = upper / 2;
        if (span < 10)
            span = 10;
        s32 lower = (s16)(upper - span);
        if (FUN_00184964(lower, upper) <= 0) {
            scrSetResult(-1);
        } else {
            if (lower <= 0)
                lower = 1;
            for (u32 id = 1; id <= 1200; ++id) {
                const TalkReplacementDemon *demon = FUN_00184310((u16)id);
                const TalkReplacementDefinition *definition = dataTable00FindById((u16)id);
                if (lower <= demon->level && demon->level <= upper && (definition->flags & 0x80) &&
                    !gameStockContainsEntry(demon->id)) {
                    FUN_00180118(demon->id);
                    candidates[count++] = demon->id;
                }
            }
            if (count)
                scrSetResult(candidates[(s16)randRange((u16)(count - 1))]);
            else
                scrSetResult(-1);
        }
        asdMemFree(candidates);
    } else {
        scrSetResult(successorId);
    }
    return 1;
}
}
