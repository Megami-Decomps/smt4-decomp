/* NON_MATCHING: one marker-mask word load is scheduled before rather than after the paired combatant load. */
#include "battle/btlMain.h"
#include "gamedata/Table04Record.h"

extern "C" {
const Table04Record *dataTable04FindById(u32 id);
BtlMainStateA *btlGetMainState();
s32 FUN_00400564(void *owner, s32 mode, const Table04Record *skill);
extern u8 DAT_00573c90[];

/* Validate a skill's effect mode, then request the eligible effect. */
u32 FUN_00400164(void *owner, u32 skillId)
{
    if (skillId == 0) {
        return 1;
    }
    const Table04Record *skill = dataTable04FindById(skillId);
    if (skill == NULL) {
        return 1;
    }
    if (2 != skill->effectProperties.mode && 3 != skill->effectProperties.mode) {
        return 2;
    }
    switch (skill->sort.category) {
    case 0:
    case 1:
    case 2:
    case 5:
    case 6:
    case 10:
        return 0;
    default: {
        struct GateMasks {
            u8 unk00[0x28];
            u32 words[2];
        };
        BtlMainStateA *state = btlGetMainState();
        GateMasks *masks = reinterpret_cast<GateMasks *>(DAT_00573c90);
        u64 flags = state->markerMasks.bits;
        if ((masks->words[0] & (u32)flags) | (masks->words[1] & (u32)(flags >> 32))) {
            return 0;
        }
        if (skill->sort.category != 3) {
            switch (skill->effectProperties.targeting) {
            case 0:
            case 1:
            case 3:
            case 4:
            case 5:
            case 6:
            case 8:
                return 0;
            }
        }
        return FUN_00400564(owner, 1, skill) ? 3 : 0;
    }
    }
}
}
