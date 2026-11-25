/* NON_MATCHING: 134 vs 134 rows (52 diff lines); table lookup, switch and return epilogue match retail (same pattern as sibling btlGetCombatantDrawPosition), leaving only an r5/r6/r7 rotation and slotIndexOf compare registers. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W6_W6Match3_EnemyDrawOffset.h"
#include "shard/VersionedResource.h"
#include "shard/S1Mover.h"
#include "gamedata/DataTable.h"
#include "gamedata/NkmEnemyRecord.h"
#include "gamedata/DataTableAccess_VariantA.h"
#include "gamedata/NkmEnemyLookup.h"

namespace {
/* Resource fields overlap the canonical state's byte-aligned padding. */
struct BattlePositionResourcesView {
    u8 unk0000[0x1EC4];
    const void *stagePosition;
    u8 unk1EC8[0x3CC];
    void *overrides;
};
struct BattleOverridePositionRecord {
    s16 id;
    u8 unk02[0x12];
    Vec3f position;
    u8 unk20[0x18];
};
/* btlFindEntryBlockByMemberId returns the parameter block embedded at combatant +0x164. */
struct BattleAppearancePositionView {
    u16 parameterBlock;
    u16 id;
    u8 unk04[8];
    u32 nodeKeys[50];
};
/* The member array spans a scalar and padding in the canonical combatant view. */
struct BattleGroupPositionMembersView {
    u8 unk00[8];
    s16 members[50];
};

static __inline s32 battleFindPositionMember(const BattleGroupPositionMembersView *group, s32 id)
{
    for (s32 index = 0; index < 50; index += 2) {
        if (id == group->members[index]) {
            return index;
        }
        if (id == group->members[index + 1]) {
            return index + 1;
        }
    }
    return -1;
}

/* Find the override position record matching `id` (same pattern as btlDataFindRecordById and btlGetCombatantDrawPosition). */
static __inline const BattleOverridePositionRecord *findOverridePosition(void *file, u16 id)
{
    if (file == NULL) {
        return NULL;
    }
    void *table = dataTableFileGetTable((u32)file, 0);
    const BattleOverridePositionRecord *entries = (const BattleOverridePositionRecord *)dataTableGetEntries(table);
    s32 count = (s32)dataTableGetCount(table);
    for (s32 entry = 0; entry < count; ++entry) {
        const BattleOverridePositionRecord *candidate = &entries[entry];
        if (candidate->id == id) {
            return candidate;
        }
    }
    return NULL;
}

typedef char BattlePositionQueryOffsets[
    offsetof(BattlePositionResourcesView, overrides) == 0x2294 &&
    sizeof(BattleOverridePositionRecord) == 0x38 &&
    offsetof(BattleOverridePositionRecord, position) == 0x14 &&
    offsetof(BattleAppearancePositionView, nodeKeys) == 0x0C ? 1 : -1];
}

extern "C" {
BattleAppearancePositionView *btlFindEntryBlockByMemberId(BtlMainStateA *state, s32 index);
BattleGroupPositionMembersView *btlMainFindEntryByListedId(BtlMainStateA *state, s16 group);
EnemyDrawOffsetOwner *stateEntryFindById(BtlMainStateA *state, u32 id);
void btlEnemyDrawCalcVerticalOffset(const EnemyDrawOffsetOwner *owner, BattleVector3 *output, f32 scale);

Vec3f btlGetCombatantOverridePosition(BtlMainStateA *state, s32 index, s32 forceAttachment)
{
    BattleRosterRecordA *roster = &state->roster[index];
    BattlePositionResourcesView *resources = (BattlePositionResourcesView *)state;
    Vec3f position;
    if ((roster->motion.flags & 0x200000) != 0) {
        u16 id = btlFindEntryBlockByMemberId(state, index)->id;
        const BattleOverridePositionRecord *selected = findOverridePosition(resources->overrides, id);
        /* This mode requires a matching position record; retail dereferences it without a guard. */
        position = selected->position;
    } else {
        if ((roster->motion.flags & 0x10) != 0 && forceAttachment == 0) {
            const Vec3f *stage = (const Vec3f *)encounterArrangementFindStagePosition(resources->stagePosition);
            position = *stage;
            position.z += 2.0f;
            u8 bustUp = nkmEnemyFindById(btlFindEntryBlockByMemberId(state, index)->id)->bustUp;
            f32 offset = 0.0f;
            switch (bustUp) {
            case 0:
                offset = 15.0f;
                break;
            case 1:
                offset = 0.0f;
                break;
            case 2:
                offset = -20.0f;
                break;
            }
            position.z += offset;
        } else {
            BattleGroupPositionMembersView *group = btlMainFindEntryByListedId(state, roster->motion.group);
            s32 attachment = group != NULL ? battleFindPositionMember(group, roster->motion.group) : -1;
            if (attachment < 0) {
                attachment = 0;
            }
            BattleAppearancePositionView *appearance = btlFindEntryBlockByMemberId(state, index);
            EnemyDrawOffsetOwner *node = stateEntryFindById(state, appearance->nodeKeys[attachment]);
            btlEnemyDrawCalcVerticalOffset(node, (BattleVector3 *)&position, roster->motion.scale);
            position.x += roster->motion.position[0];
            position.y += roster->motion.position[1];
            position.z += roster->motion.position[2];
            position.z += 2.0f;
        }
    }
    return position;
}
} /* extern "C" */
