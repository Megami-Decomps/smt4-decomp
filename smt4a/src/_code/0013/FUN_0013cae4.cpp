#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "battle/btlMain.h"
#include "code/Code0014.h"
#include "code/Code0015.h"
#include "battle/BtlEntryVoice.h"

extern "C" {
void FUN_001566a8(s32 category, u32 sound, u32 volume, u32 flags, s32 enabled, float left, float right);

// Play a battle sound, resolving category ten through the current combatant group.
u32 FUN_0013cae4(s32 category, u32 sound)
{
    if (category != 10) {
        u32 flags = messageVoiceFlagsGet();
        if (category == 1 || category == 3) {
            flags |= 4;
        }
        u32 volume = messageVoiceBankGet();
        FUN_001566a8(category, sound, volume, flags, 1, 0.707f, 0.707f);
    } else {
        BtlMainStateA* battle = btlGetMainState();
        if (battle != NULL) {
            BtlUnitDataA* identity = btlFindEntryBlockByMemberId(battle, battle->motionGroup.group);
            if (identity != NULL) {
                FUN_0015f490(identity->id, sound, 1.0f, 1, 0);
            }
        }
    }
    return 1;
}
}
