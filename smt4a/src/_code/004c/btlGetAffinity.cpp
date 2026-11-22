/* NON_MATCHING: 241 lines (177 by shape), rewritten from the raw draft on the battle entry types. Same calls, tests
 * and flag arithmetic as retail; what remains: retail keeps the target id in r6 and a zero in fp (the slot and source
 * buffer clears) where the build spills the id with the incoming arguments, it spills the element into the summary's
 * slot inside the source scan, and it branches around the two-instruction flag updates the build predicates. */
#include "common.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/BtlEntryA.h"
#include "battle/BtlEntryLookup.h"
#include "battle/BattleEntrySummary.h"
#include "gamedata/SkillDataRecord.h"

extern "C" {
void kindIdStore(u32 kind, u32 *out);
void source4CCopyHalves(const BtlCombatantEntryA *entry, u16 *values);
void btlEntryBuildSummary(BattleEntrySummaryA *summary, BtlMainStateA *battle, BtlCombatantEntryA *entry);

/* The target's affinity to an attack of `element` from `attackerId` (negative: none) on `targetId`: the affinity
 * flags in the high half, the target's resistance value (halved by a 0x80000 flag) in the low half; 100 for the
 * modes that ignore affinities. */
u32 btlGetAffinity(s32 attackerId, s32 targetId, u32 element, s32 mode, s32 option)
{
    u32 flags = 0;
    BtlMainStateA *state = btlGetMainState();
    switch (mode) {
    case 4:
        if (option >= 0) {
            break;
        }
        /* fall through */
    case 3:
    case 7:
    case 8:
    case 9:
        return 100;
    }
    BtlCombatantEntryA *attacker = NULL;
    if (attackerId >= 0) {
        attacker = btlMainFindEntryByListedId(state, attackerId);
    }
    BtlCombatantEntryA *target = btlMainFindEntryByListedId(state, targetId);
    if (element == 6 || element == 7) {
        BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), targetId);
        if (entry != NULL && entry->properties[22] > 0) {
            flags = 0x10000;
        }
        entry = btlMainFindEntryByListedId(btlGetMainState(), targetId);
        if (entry != NULL && entry->properties[21] > 0) {
            flags |= 0x20000;
        }
    }
    if (element != 20) {
        switch (mode) {
        case 0: {
            BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), targetId);
            if (entry != NULL && entry->properties[20] > 0) {
                flags |= 0x20000;
            }
            break;
        }
        case 1:
            if (option < 0 || option != 20) {
                BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), targetId);
                if (entry != NULL && entry->properties[21] > 0) {
                    flags |= 0x20000;
                }
            }
            break;
        }
    }
    u32 slot = 0;
    kindIdStore(element, &slot);
    u16 value = target->data.values[slot];
    u32 resistance = value & 0x3FF;
    if ((value >> 10) == 1) {
        flags |= 0x10000;
    }
    if ((value >> 10) == 4) {
        flags |= 0x40000;
    }
    if ((value >> 10) == 3) {
        flags |= 0x20000;
    }
    if ((value >> 10) == 2) {
        flags |= 0x800000;
    }
    if ((value >> 10) == 5) {
        flags |= 0x80000;
    }
    if ((value >> 10) != 2 || (value >> 10) == (target->data.innateValues[slot] >> 10)) {
        u32 skillFlags = 0;
        BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), targetId);
        u16 sources[10] = {0};
        source4CCopyHalves(entry, sources);
        for (s32 i = 0; i < 9; i++) {
            if (sources[i] == 0) {
                continue;
            }
            Table04ExtraRecord *record = dataTable41FindById(sources[i]);
            if (record == NULL) {
                continue;
            }
            if (element != record->affinityBits.element) {
                continue;
            }
            switch (record->affinityBits.kind) {
            case 1:
                skillFlags |= 0x80000;
                break;
            case 2:
                skillFlags |= 0x10000;
                break;
            case 3:
                skillFlags |= 0x20000;
                break;
            case 4:
                skillFlags |= 0x40000;
                break;
            }
        }
        flags |= skillFlags;
    }
    if (flags & 0x800000) {
        BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), targetId);
        if (entry != NULL && entry->properties[41] > 0) {
            flags = (flags & ~0x800000) | 0x1040000;
        }
    }
    if (attacker != NULL && attacker->data.slotNeutralized[slot] != 0) {
        flags &= ~0x1000000;
        flags &= ~0x70000;
    }
    if (target->weakSlot > 0 && slot != 20) {
        if (target->weakSlot - 1 == slot) {
            flags |= 0x400000;
        } else {
            flags |= 0x220000;
        }
    }
    if (target != NULL && target->data.motionState != 0) {
        BattleEntrySummaryA summary;
        btlEntryBuildSummary(&summary, state, attacker);
        if (summary.unk24 != 0) {
            flags = (flags & ~0x1000000 & ~0xF0000) | 0x800000;
        }
    }
    if (flags & 0x80000) {
        resistance = (s32)(resistance * 50) / 100;
    }
    return (flags >> 16 << 16) | resistance;
}
}
