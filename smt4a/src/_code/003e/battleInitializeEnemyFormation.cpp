/* NON_MATCHING: 109 vs 106 rows (55 diff lines): scoping temporary restores retail's tail-call to sysMemClear; unrolled 50-entry zeroing pairs and source.ids[i] address formation differ. */
#include "battle/btlMain.h"
#include "gamedata/NkmEnemyRecord.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/NkmEnemyLookup.h"
#include "battle/BtlGlobals.h"
#include "AsdSDK/AsdMemUtil.h"

namespace {
struct InitialPartySource {
    u32 ids[6];
    u8 unk18[0x18];
    f32 scaleX, scaleY;
    u8 unk38[0x2C];
    u8 requestSequence;
    u8 unk65[3];
    u32 sequence;
    u8 sequenceArguments[0x18];
};
/* Private views of the setup snapshot and its late history buffer, which overlap other battle views. */
struct InitialPartyWorkView {
    u8 unk0000[0xF4];
    InitialPartySource source;
    u8 unk0178[0x4BC4 - 0x178];
    u8 history[0xA8];
    u32 historyCount;
};
typedef char InitialPartySourceLayoutCheck[sizeof(InitialPartySource) == 0x84 &&
    offsetof(InitialPartySource, requestSequence) == 0x64 &&
    offsetof(InitialPartyWorkView, historyCount) == 0x4C6C ? 1 : -1];
}

extern "C" {
void btlActionPrepareFromSource(BtlMainStateA *state, InitialPartySource *source, s32 useSaved);
void FUN_003eb314(BtlMainStateA *state, BtlUnitRecordA *unit, const NkmEnemyRecordA *definition);
void FUN_004ca63c(BtlMainStateA *state, const BtlUnitRecordA *unit, s32 kind, s32 slot, u32 flags);
void sequenceRequestDeferEx(u32 sequence, const void *arguments);

void battleInitializeEnemyFormation(BtlMainStateA *state)
{
    for (s32 i = 0; i < 50; ++i) {
        state->entries[i + 4].flags = 0;
    }
    InitialPartyWorkView *work = (InitialPartyWorkView *)state;
    sysMemClear(&work->source, sizeof(work->source));
    for (s32 i = 0; i < 6; ++i) {
        work->source.ids[i] = 0;
    }
    work->source.scaleX = 1.0f;
    work->source.scaleY = 1.0f;
    btlActionPrepareFromSource(state, &work->source, 1);
    if (g_btlMain.initialParty.forcedUnitId > 0) {
        BtlCombatantEntryA temporary;
        NkmEnemyRecordA *definition = nkmEnemyFindById((u16)g_btlMain.initialParty.forcedUnitId);
        FUN_003eb314(state, (BtlUnitRecordA *)&temporary.data, definition);
        FUN_004ca63c(state, (BtlUnitRecordA *)&temporary.data, 1, 4, 0);
    } else {
        BtlCombatantEntryA temporary;
        for (u16 i = 0; i < 6; ++i) {
            if (work->source.ids[i] != 0) {
                NkmEnemyRecordA *definition = nkmEnemyFindById((u16)work->source.ids[i]);
                if (definition != NULL) {
                    FUN_003eb314(state, (BtlUnitRecordA *)&temporary.data, definition);
                    FUN_004ca63c(state, (BtlUnitRecordA *)&temporary.data, 1, i + 4, 0);
                }
            }
        }
    }
    if (work->source.requestSequence == 1) {
        sequenceRequestDeferEx(work->source.sequence, work->source.sequenceArguments);
    }
    work->historyCount = 0;
    sysMemClear(work->history, sizeof(work->history));
}
} /* extern "C" */
