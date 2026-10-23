/* NON_MATCHING: combatant flag clearing uses different doubleword stores; setup/temporary pointers and final clear tail call are scheduled differently. */
#include "battle/btlMain.h"
#include "gamedata/Table00.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

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
// Private views of the setup snapshot and its late history buffer, which overlap other battle views.
struct InitialPartyWorkView {
    u8 unk0000[0xF4];
    InitialPartySource source;
    u8 unk0178[0x4BC4 - 0x178];
    u8 history[0xA8];
    u32 historyCount;
};
struct InitialPartyGlobals {
    u8 unk00[0x50];
    s32 forcedUnitId;
};
typedef char InitialPartySourceLayoutCheck[sizeof(InitialPartySource) == 0x84 &&
    offsetof(InitialPartySource, requestSequence) == 0x64 &&
    offsetof(InitialPartyWorkView, historyCount) == 0x4C6C ? 1 : -1];
}

extern "C" {
extern InitialPartyGlobals g_btlMain;
void sysMemClear(void *memory, u32 size);
void btlActionPrepareFromSource(BtlMainStateA *state, InitialPartySource *source, s32 useSaved);
Table00Record *dataTable00FindById(u16 id);
void FUN_003eb314(BtlMainStateA *state, BtlUnitRecordA *unit, const Table00Record *definition);
void FUN_004ca63c(BtlMainStateA *state, const BtlUnitRecordA *unit, s32 kind, s32 slot, u32 flags);
void sequenceRequestDeferEx(u32 sequence, const void *arguments);

void FUN_003e854c(BtlMainStateA *state)
{
    for (s32 i = 0; i < 50; ++i) {
        state->entries[i + 4].flags = 0;
    }
    InitialPartyWorkView *work = reinterpret_cast<InitialPartyWorkView *>(state);
    sysMemClear(&work->source, sizeof(work->source));
    for (s32 i = 0; i < 6; ++i) {
        work->source.ids[i] = 0;
    }
    work->source.scaleX = 1.0f;
    work->source.scaleY = 1.0f;
    btlActionPrepareFromSource(state, &work->source, 1);
    BtlCombatantEntryA temporary;
    BtlUnitRecordA *unit = reinterpret_cast<BtlUnitRecordA *>(&temporary.unitParameters.parameterBlock);
    if (g_btlMain.forcedUnitId > 0) {
        Table00Record *definition = dataTable00FindById(static_cast<u16>(g_btlMain.forcedUnitId));
        FUN_003eb314(state, unit, definition);
        FUN_004ca63c(state, unit, 1, 4, 0);
    } else {
        for (u16 i = 0; i < 6; ++i) {
            if (work->source.ids[i] != 0) {
                Table00Record *definition = dataTable00FindById(static_cast<u16>(work->source.ids[i]));
                if (definition != NULL) {
                    FUN_003eb314(state, unit, definition);
                    FUN_004ca63c(state, unit, 1, i + 4, 0);
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
}
