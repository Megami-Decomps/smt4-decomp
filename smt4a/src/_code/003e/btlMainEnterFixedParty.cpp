/* NON_MATCHING: 244 lines (190 by shape): the same blocks, calls and stores as retail. Retail hoists 0x3B4 (the
 * offset of the 16 cleared words) and -1 out of the reset loop into fp/r9 and keeps the narrowed unit index in a
 * stack slot; after each getter call it loads the copy's destination straight into r0 (the build goes through r3,
 * as in btlMainSetupFixedParty and btlMainLeaveFixedParty); it adds the reserve index to the table before the 0x1CA0 offset;
 * and it ORs the suppress-defeat mask one word at a time. */
#include <string.h>
#include "battle/BtlGlobals.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlFixedPartySnapshot.h"
#include "battle/BattleUnitInit.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"
#include "shard/W6_W6Match8_LightUniforms.h"
#include "AsdSDK/AsdMemUtil.h"

#define FLAG_VALUES_SIZE 0x10B8

extern "C" {

void btlInitializeDemonUnitState(u32 unused, BattleUnitState *unit, UnitSourceRecord *record, s32 enemy);
void FUN_004ca63c(BtlMainStateA *battle, void *parameters, s32 kind, s32 index, s32 mode);

/* Swaps the fixed party in for a battle: keeps the player's slot table, flag values and battle units aside,
   loads the fixed party's, and either restores the fixed party's units from the snapshot or, the first time,
   builds them from its leader and reserve members. Then recounts the live units and suppresses the defeat. */
void btlMainEnterFixedParty(BtlMainStateExtA *state)
{
    if (g_btlMain.playerTable != NULL) {
        memcpy(g_btlMain.playerTable, gameGetSlotTable(), sizeof(SavePartySectionA));
    }
    if (g_btlMain.playerFlags != NULL) {
        memcpy(g_btlMain.playerFlags, flagValueGetStorage(), FLAG_VALUES_SIZE);
    }
    if (state->snapshot != NULL) {
        memcpy(&state->snapshot->player[0].entry, &state->entries[0], sizeof(BtlCombatantEntryA));
        memcpy(&state->snapshot->player[0].roster, &state->roster[0], sizeof(BattleRosterRecordA));
        memcpy(&state->snapshot->player[1].entry, &state->entries[1], sizeof(BtlCombatantEntryA));
        memcpy(&state->snapshot->player[1].roster, &state->roster[1], sizeof(BattleRosterRecordA));
        memcpy(&state->snapshot->player[2].entry, &state->entries[2], sizeof(BtlCombatantEntryA));
        memcpy(&state->snapshot->player[2].roster, &state->roster[2], sizeof(BattleRosterRecordA));
        memcpy(&state->snapshot->player[3].entry, &state->entries[3], sizeof(BtlCombatantEntryA));
        memcpy(&state->snapshot->player[3].roster, &state->roster[3], sizeof(BattleRosterRecordA));
        memcpy(&state->snapshot->guest.entry, &state->entries[BTL_SNAPSHOT_GUEST_ENTRY], sizeof(BtlCombatantEntryA));
        memcpy(&state->snapshot->guest.roster, &state->roster[BTL_SNAPSHOT_GUEST_ENTRY], sizeof(BattleRosterRecordA));
    }
    if (g_btlMain.partyTable != NULL) {
        memcpy(gameGetSlotTable(), g_btlMain.partyTable, sizeof(SavePartySectionA));
    }
    if (g_btlMain.partyFlags != NULL) {
        memcpy(flagValueGetStorage(), g_btlMain.partyFlags, FLAG_VALUES_SIZE);
    }
    if (state->snapshot != NULL) {
        if ((state->snapshot->flags & BTL_SNAPSHOT_FIXED_READY) != 0) {
            memcpy(&state->entries[0], &state->snapshot->fixed[0].entry, sizeof(BtlCombatantEntryA));
            memcpy(&state->roster[0], &state->snapshot->fixed[0].roster, sizeof(BattleRosterRecordA));
            memcpy(&state->entries[1], &state->snapshot->fixed[1].entry, sizeof(BtlCombatantEntryA));
            memcpy(&state->roster[1], &state->snapshot->fixed[1].roster, sizeof(BattleRosterRecordA));
            memcpy(&state->entries[2], &state->snapshot->fixed[2].entry, sizeof(BtlCombatantEntryA));
            memcpy(&state->roster[2], &state->snapshot->fixed[2].roster, sizeof(BattleRosterRecordA));
            memcpy(&state->entries[3], &state->snapshot->fixed[3].entry, sizeof(BtlCombatantEntryA));
            memcpy(&state->roster[3], &state->snapshot->fixed[3].roster, sizeof(BattleRosterRecordA));
        } else {
            for (s32 i = 0; i < BTL_SNAPSHOT_PARTY_UNITS; ++i) {
                sysMemClear(&state->entries[i], sizeof(BtlCombatantEntryA));
                state->entries[i].flags = 0;
                state->entries[i].listedSlot = 0;
                state->entries[i].selectionIndex = (s16)i;
                state->entries[i].data.record = NULL;
                state->entries[i].data.sourceId = 0;
                state->entries[i].data.specialRecord = NULL;
                state->entries[i].data.candidate = NULL;
                /* Retail forms this address once and clears through it (the entry pointer is reloaded before every
                 * other store, not between these sixteen). */
                u32 *words = state->entries[i].data.unk250;
                for (s32 k = 0; k < 16; ++k) {
                    words[k] = 0;
                }
                for (s32 k = 0; k < 50; ++k) {
                    if (k == 0) {
                        state->entries[i].ids[k] = 0;
                    } else {
                        state->entries[i].ids[k] = -1;
                    }
                }
                state->entries[i].data.lookupKey = -1;
                sysMemClear(&state->roster[i], sizeof(BattleRosterRecordA));
                state->roster[i].motion.group = (s16)i;
                state->roster[i].motion.unitIndex = -1;
                state->roster[i].removal.slot = -1;
                state->roster[i].removal.nextSlot = -1;
                state->roster[i].motion.pulseDuration = 150;
            }
            BtlCombatantEntryA temporary;
            btlInitializeDemonUnitState((u32)state, (BattleUnitState *)&temporary.data, (UnitSourceRecord *)g_btlMain.partyLeader, 1);
            FUN_004ca63c(state, &temporary.data, 0, 0, 0);
            for (s32 i = 0; i < 3; ++i) {
                if (g_btlMain.partyTable->slots.reserve[i] >= 0) {
                    btlInitializeDemonUnitState((u32)state, (BattleUnitState *)&temporary.data, (UnitSourceRecord *)gameGetSaveSlotData(i), 0);
                    FUN_004ca63c(state, &temporary.data, 0, i + 1, 0);
                }
            }
            state->snapshot->flags |= BTL_SNAPSHOT_FIXED_READY;
        }
        state->unk4cd0 = 0;
    }
    state->entryCounts.units = 0;
    for (s32 i = 0; i < BTL_SNAPSHOT_PARTY_UNITS; ++i) {
        BtlCombatantEntryA *entry = &state->entries[i];
        if ((entry->flags & g_btlMain.combatantMasks.required) != 0 && (entry->flags & g_btlMain.exclusionMask) == 0) {
            state->entryCounts.units++;
        }
    }
    state->stateFlags64.bits |= g_btlMain.suppressDefeat;
}

} /* extern "C" */
