/* NON_MATCHING: retail reloads selection and exclusion masks inside the loop; the build hoists them and changes register allocation. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"


extern "C" {
extern u64 g_battleMaskPresets[4];
u32 scrGetArg(u32 index);
void asdModelStartReferencedAnimation(BattleMotionHandle **model, u32 animation);

// Start an animation on the marked, eligible combatant with the requested ID.
u32 FUN_003c9ff8()
{
    u32 id = scrGetArg(0);
    u32 animation = scrGetArg(1);
    BtlMainStateA *battle = btlGetMainState();
    for (s32 i = 4; i < 54; ++i) {
        BtlCombatantEntryA *entry = &battle->entries[i];
        u64 flags = entry->flags;
        if ((flags & g_battleMaskPresets[0]) != 0
            && (flags & g_battleMaskPresets[3]) == 0
            && (flags & g_battleMaskPresets[1]) != 0
            && entry->selection.marked != 0 && entry->id == id) {
            asdModelStartReferencedAnimation(battle->roster[i].motion.handle, animation);
            break;
        }
    }
    return 1;
}
}
