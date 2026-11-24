/* The units a fixed-party battle keeps aside (Apocalypse): BtlMainStateExtA::snapshot, allocated by
 * btlMainSetupFixedParty. */
#ifndef SMT4A_BATTLE_BTLFIXEDPARTYSNAPSHOT_H
#define SMT4A_BATTLE_BTLFIXEDPARTYSNAPSHOT_H

#include "common.h"
#include <stddef.h>
#include "battle/BtlEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

/* A battle entry and its roster record, kept together. */
struct BtlSnapshotUnitA {
    /* 0x000 */ BtlCombatantEntryA entry;
    /* 0x408 */ BattleRosterRecordA roster;
};

enum {
    BTL_SNAPSHOT_PARTY_UNITS = 4,      /* the protagonist and the three party positions: entries 0-3 */
    BTL_SNAPSHOT_GUEST_ENTRY = 54,     /* the entry kept in BtlFixedPartySnapshotA::guest */
    BTL_SNAPSHOT_FIXED_READY = 1       /* BtlFixedPartySnapshotA::flags: `fixed` holds the fixed party's units */
};

struct BtlFixedPartySnapshotA {
    /* 0x0000 */ BtlSnapshotUnitA player[BTL_SNAPSHOT_PARTY_UNITS]; /* the player's own units while the fixed party fights */
    /* 0x1760 */ BtlSnapshotUnitA fixed[BTL_SNAPSHOT_PARTY_UNITS];  /* the fixed party's units while the player's fight */
    /* 0x2EC0 */ BtlSnapshotUnitA guest;                            /* entry 54 as the player's party had it */
    /* 0x3498 */ u32 flags;
    /* 0x349C */ u8 unk349C[4];
};

typedef char BtlFixedPartySnapshotALayoutCheck[
    sizeof(BtlSnapshotUnitA) == 0x5D8 && offsetof(BtlSnapshotUnitA, roster) == 0x408 &&
    offsetof(BtlFixedPartySnapshotA, fixed) == 0x1760 && offsetof(BtlFixedPartySnapshotA, guest) == 0x2EC0 &&
    offsetof(BtlFixedPartySnapshotA, flags) == 0x3498 && sizeof(BtlFixedPartySnapshotA) == 0x34A0 ? 1 : -1];

#endif
