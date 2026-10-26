#include "battle/BtlMainAccess.h"
#include "battle/btlUnit.h"
#include "shard/W7_W7Match2_PartyDamage.h"
#include "gamedata/DataTable40.h"

namespace {
struct SkillAilmentView { u8 prefix[0x38]; u32 effect; };
struct ItemAilmentView { u8 prefix[0x6A]; u8 effect; };
}
extern "C" {
const ItemAilmentView *dataTable08Sub1GetRecord(u32 id);
BtlUnitData *FUN_0027da30(BtlMainState *state, s32 index);
PartyDamageUnitIV *gameGetUnitRecord(s32 index);

// Return the complete affected ailment group when the target has at least one matching ailment.
u32 btlGetApplicableAilmentMask(u32 skillId, u32 itemId, u32 unused, s32 target)
{
    const SkillAilmentView *skill = reinterpret_cast<const SkillAilmentView *>(dataTable40FindById(skillId));
    const ItemAilmentView *item = dataTable08Sub1GetRecord(itemId);
    if ((skill != NULL || item != NULL) &&
        (skill == NULL || (skill->effect & 0x7F) != 0) &&
        (item == NULL || (item->effect & 0x7F) != 0)) {
        u32 kind = 0;
        if (skill != NULL) {
            if ((skill->effect & 0x7F) != 0)
                kind = skill->effect & 0x7F;
        } else if (item != NULL) {
            kind = item->effect & 0x7F;
        }
        u32 mask;
        switch (kind) {
        case 12: mask = 0x3E0; break;
        case 14: mask = 0x7E2; break;
        case 17: mask = 0x3E2; break;
        case 18: mask = 0x1C0; break;
        case 21: mask = 0x220; break;
        default: mask = 1u << kind; break;
        }
        if (target < 0x6D) {
            const BtlUnitData *unit = FUN_0027da30(btlGetMainState(), target);
            if ((unit->unk0FA & mask) != 0)
                return mask;
        } else {
            const PartyDamageUnitIV *unit = gameGetUnitRecord(target - 0x6D);
            if ((unit->ailments & mask) != 0)
                return mask;
        }
    }
    return 0;
}
}
