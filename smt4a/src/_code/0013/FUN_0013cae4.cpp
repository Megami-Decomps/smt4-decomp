/* NON_MATCHING: all retail operations match except the 1.0f load is scheduled two instructions too early before the combatant voice call. */
#include "battle/btlMain.h"

struct BattleSoundIdentity {
    /* 0x00 */ u16 kind;
    /* 0x02 */ u16 id;
};

extern "C" {
void FUN_001566a8(s32 category, u32 sound, u32 volume, u32 flags, s32 enabled, float left, float right);
BattleSoundIdentity* FUN_001568f8(BtlMainStateA* battle, s32 group);
void FUN_0015f490(u32 id, u32 sound, s32 enabled, s32 flags, float volume);
BtlMainStateA* btlGetMainState(void);
u32 FUN_0014af98(void);
u32 FUN_00152f44(void);

// Play a battle sound, resolving category ten through the current combatant group.
u32 FUN_0013cae4(s32 category, u32 sound)
{
    if (category != 10) {
        u32 flags = FUN_00152f44();
        if (category == 1 || category == 3) {
            flags |= 4;
        }
        u32 volume = FUN_0014af98();
        FUN_001566a8(category, sound, volume, flags, 1, 0.707f, 0.707f);
    } else {
        BtlMainStateA* battle = btlGetMainState();
        if (battle != NULL) {
            BattleSoundIdentity* identity = FUN_001568f8(battle, battle->motionGroup.group);
            if (identity != NULL) {
                FUN_0015f490(identity->id, sound, 1, 0, 1.0f);
            }
        }
    }
    return 1;
}
}
