#include "common.h"
#include "shard/PassiveSkill.h"

extern "C" {

typedef struct IdOwner {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u16 ids[8];
} IdOwner;

/* Returns 1 when any of the owner's eight ids resolves to an active object. */
u32 idOwnerHasActiveObject(IdOwner *owner)
{
    s32 i;

    for (i = 0; i < 8; i++) {
        if (owner->ids[i] != 0) {
            const PassiveSkillRecord *object = passiveSkillLookupRecord(owner->ids[i]);

            if (object != NULL && object->rank.tier != 0) {
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
