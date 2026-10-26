/* NON_MATCHING: position override search, attachment scan and category-offset VFP scheduling differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W6_W6Match3_EnemyDrawOffset.h"
#include "shard/VersionedResource.h"
#include "shard/S1Mover.h"
#include "gamedata/DataTable.h"
#include "gamedata/Table00.h"
#include "util/dataTableFileGetTable.h"

namespace {
/* Resource fields overlap the canonical state's byte-aligned padding. */
struct BattlePositionResourcesView {
    u8 unk0000[0x1EC4];
    const VersionedResourceHeader *stagePosition;
    u8 unk1EC8[0x3CC];
    void *overrides;
};
struct BattleOverridePositionRecord {
    s16 id;
    u8 unk02[0x12];
    Vec3f position;
    u8 unk20[0x18];
};
/* FUN_001568f8 returns the parameter block embedded at combatant +0x164. */
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

static __inline s32 battleFindPositionMember(const BattleGroupPositionMembersView *group, s16 id)
{
    for (s32 index = 0; index < 50; ++index) {
        if (group->members[index] == id)
            return index;
    }
    return -1;
}
typedef char BattlePositionQueryOffsets[
    offsetof(BattlePositionResourcesView, overrides) == 0x2294 &&
    sizeof(BattleOverridePositionRecord) == 0x38 &&
    offsetof(BattleOverridePositionRecord, position) == 0x14 &&
    offsetof(BattleAppearancePositionView, nodeKeys) == 0x0C ? 1 : -1];
}
extern "C" {
BattleAppearancePositionView *FUN_001568f8(BtlMainStateA *state, s32 index);
BattleGroupPositionMembersView *FUN_003f0e20(BtlMainStateA *state, s16 group);
EnemyDrawOffsetOwner *stateEntryFindById(BtlMainStateA *state, u32 id);
void btlEnemyDrawCalcVerticalOffset(const EnemyDrawOffsetOwner *owner, BattleVector3 *output, f32 scale);
const u8 *FUN_00348f74(const VersionedResourceHeader *resource);
Table00Record *dataTable00FindById(u16 id);

Vec3f FUN_003ecab8(BtlMainStateA *state, s32 index, s32 forceAttachment)
{
    BattleRosterRecordA *roster = &state->roster[index];
    BattlePositionResourcesView *resources = reinterpret_cast<BattlePositionResourcesView *>(state);
    Vec3f position;
    if ((roster->motion.flags & 0x200000) != 0) {
        u16 id = FUN_001568f8(state, index)->id;
        const BattleOverridePositionRecord *selected = NULL;
        if (resources->overrides != NULL) {
            void *table = dataTableFileGetTable((u32)(resources->overrides), 0);
            const BattleOverridePositionRecord *entries = static_cast<const BattleOverridePositionRecord *>(dataTableGetEntries(table));
            s32 count = static_cast<s32>(dataTableGetCount(table));
            for (s32 entry = 0; entry < count; ++entry) {
                const BattleOverridePositionRecord *candidate = &entries[entry];
                if (candidate->id == id) {
                    selected = candidate;
                    break;
                }
            }
        }
        /* This mode requires a matching position record; retail dereferences it without a guard. */
        position = selected->position;
    } else if ((roster->motion.flags & 0x10) == 0 || forceAttachment != 0) {
        BattleGroupPositionMembersView *group = FUN_003f0e20(state, roster->motion.group);
        s32 attachment = group != NULL ? battleFindPositionMember(group, roster->motion.group) : -1;
        if (attachment < 0)
            attachment = 0;
        BattleAppearancePositionView *appearance = FUN_001568f8(state, index);
        EnemyDrawOffsetOwner *node = stateEntryFindById(state, appearance->nodeKeys[attachment]);
        btlEnemyDrawCalcVerticalOffset(node, reinterpret_cast<BattleVector3 *>(&position), roster->motion.scale);
        position.x += roster->motion.position[0];
        position.y += roster->motion.position[1];
        position.z += roster->motion.position[2];
        position.z += 2.0f;
    } else {
        const Vec3f *stage = reinterpret_cast<const Vec3f *>(FUN_00348f74(resources->stagePosition));
        position = *stage;
        position.z += 2.0f;
        const Table00Record *record = dataTable00FindById(FUN_001568f8(state, index)->id);
        f32 offset;
        switch (record->bustUp.value) {
        case 0: offset = 15.0f; break;
        case 2: offset = -20.0f; break;
        default: offset = 0.0f; break;
        }
        position.z += offset;
    }
    return position;
}
}
