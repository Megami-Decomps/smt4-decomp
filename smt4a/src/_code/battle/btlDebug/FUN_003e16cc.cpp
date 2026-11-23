/* NON_MATCHING: register allocation differs (retail keeps the state in r9, the shown count in r8 and a zero in sl, and reloads the unit's pending flag before clearing it). */
#include "common.h"
#include "battle/BtlUiGlobal.h"
#include "battle/btlEncount.h"

// Battle unit entry (0x1d0 bytes each): only the fields read here.
struct BattleUnitEntry {
    u8 unk00[0x50];
    u32 flags;              // 0x50: bit 0 present, bit 1 active, bit 4 player side
    u8 unk54[4];
    u32 flags2;             // 0x58: bit 3 pending refresh
    u8 unk5c[4];
    u16 status;             // 0x60: bit 11 = inactive pair
    u8 unk62[8];
    s16 listedId;           // 0x6a
};

struct BattleState {
    u8 unk0000[0x1ed4];
    u8* units;              // 0x1ed4
    u8 unk1ed8[0x45a0 - 0x1ed8];
    u64 pendingMask;        // 0x45a0
};

struct StateObject {
    u32 phase;              // 0x00
    u32 unk04;
    u32 unk08;
    u32 flags;              // 0x0c: bit 1 = refresh running
    u32 unk10;              // 0x10
};

/* Where the refresh announcements of each side are placed (0x57a634). */
struct BtlRefreshSideLayout {
    s32 stride;             /* between two announcements */
    s32 base;               /* added for the marker */
    s32 extra;
};
struct BtlRefreshLayout {
    BtlRefreshSideLayout enemy;     /* 0x00 */
    BtlRefreshSideLayout player;    /* 0x0c */
    s32 start;                      /* 0x18 */
};

struct SideRecord {
    u8 unk00[2];
    u16 id;                 // 0x02
};

extern "C" {

extern s32 g_btlCamera;
extern u8* g_btlAux;
extern BtlRefreshLayout g_btlMarkerTimings;
extern BtlEncounterGlobalsA g_btlEncount;

void qsort(void* base, s32 count, s32 size, s32 (*compare)(const void*, const void*));
s32 FUN_00221a94(const void* a, const void* b);
SideRecord* btlFindEntryBlockByMemberId(BattleState* state, s32 id);
s32 pairedEntryTableContains(BattleState* state, u16 id);
void nameEntriesRegisterVerNames(void *work);
s32 FUN_004f8264(u8* aux);
void FUN_004cae0c(void *context, void *state, s32 pending, u32 target);
void btlReflectQueueKind44(s32 offset, StateObject* object, BattleUnitEntry* unit, s32 a, s32 b, s32 c);
void FUN_004fe764(s32 offset, StateObject* object, BattleUnitEntry* unit, u32 kind, s32 arg);
void btlQueueActionMessage(s32 offset, StateObject* object, s32 id, s32 a, s32 b, s32 c, s32 d);
void btlCameraStartMove(s32 camera, s32 arg);
void FUN_003ed6e8(BattleState* state);
void btlAiBuildTurnOrder(BattleState* state);
void FUN_004aa2e0(BtlUiA *ui, s32 arg);
s32 FUN_003e0cd4(StateObject* object, BattleState* state);

// Shows the "refresh" announcement for every unit whose pair state changed, then continues the state machine.
s32 FUN_003e16cc(StateObject* object, BattleState* state)
{
    if (object->flags == 0 && (*reinterpret_cast<u32*>(g_btlAux + 0x339c) & 0x400) != 0) {
        *reinterpret_cast<u32*>(g_btlCamera + 0x64c) |= 0x4000;
        nameEntriesRegisterVerNames(g_btlAux);
        object->flags |= 2;
    }
    if ((object->flags & 2) == 0 || FUN_004f8264(g_btlAux) == 0) return 0;

    BattleUnitEntry* pending[50];
    s32 count = 0;
    for (s32 i = 4; i < 0x36; i++) {
        BattleUnitEntry* unit = reinterpret_cast<BattleUnitEntry*>(state->units + i * 0x1d0);
        if ((unit->flags & 1) != 0 && (unit->flags & 2) != 0 && (unit->flags2 & 8) != 0) pending[count++] = unit;
    }
    qsort(pending, count, 4, FUN_00221a94);

    s16 shown = 0;
    bool announced = false;
    for (s32 i = 0; i < count; i++) {
        BattleUnitEntry* unit = pending[i];
        if ((unit->flags & 1) != 0 && (unit->flags & 2) != 0 && (unit->flags2 & 8) != 0) {
            unit->flags2 &= 0xfffffff7;
            if ((unit->status & 0x800) == 0) {
                SideRecord* record = btlFindEntryBlockByMemberId(state, unit->listedId);
                if (pairedEntryTableContains(state, record->id) == 0) {
                    unit->status |= 0x800;
                    s16 stride, base, extra, start;
                    if ((unit->flags & 0x10) != 0) {
                        stride = g_btlMarkerTimings.player.stride;
                        base = g_btlMarkerTimings.player.base;
                        extra = g_btlMarkerTimings.player.extra;
                        start = g_btlMarkerTimings.start;
                    } else {
                        stride = g_btlMarkerTimings.enemy.stride;
                        base = g_btlMarkerTimings.enemy.base;
                        extra = g_btlMarkerTimings.enemy.extra;
                        start = g_btlMarkerTimings.start;
                    }
                    FUN_004cae0c(state, unit, 0, 0);
                    btlReflectQueueKind44(start + base + shown * stride, object, unit, 0xff, extra, 0);
                    FUN_004fe764(start + shown * stride, object, unit, (unit->flags & 0x10) != 0 ? 7 : 6, 0xd);
                    if (!announced) {
                        btlQueueActionMessage(shown * stride, object, 0x1000276, 0, 0, 0, 0);
                        announced = true;
                    }
                    shown++;
                }
            }
        }
    }
    if (*reinterpret_cast<s32*>(g_btlCamera + 0x34) == 0) {
        btlCameraStartMove(g_btlCamera, 0x78);
    } else {
        btlCameraStartMove(g_btlCamera, 0);
    }
    if ((g_btlEncount.initialStateMask & state->pendingMask) == 0) {
        FUN_003ed6e8(state);
        btlAiBuildTurnOrder(state);
        state->pendingMask = g_btlEncount.order.mask | state->pendingMask | g_btlEncount.orderBuiltMask;
        FUN_004aa2e0(g_btlUiBlock, 0);
    }
    object->unk10 = 0;
    object->phase = 0x19;
    object->flags = 0;
    return FUN_003e0cd4(object, state);
}

} /* extern "C" */
