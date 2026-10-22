#include "common.h"

extern "C" {

typedef struct UnitSlotRef {
    s16 kind;   /* 0x00: 2 and 3 refer to a unit */
    s16 id;     /* 0x02 */
    u8 unk04[4];
} UnitSlotRef;

typedef struct UnitSlotOwner {
    u32 flags;               /* 0x000: 0x10 uses the leader slot only */
    u8 unk004[0x21C];
    UnitSlotRef leader;      /* 0x220 */
    UnitSlotRef members[5];  /* 0x228 */
} UnitSlotOwner;

void *FUN_002ae164(s32 id);
s32 FUN_001ee498(void *unit);

/* Returns 1 when the owner's leader slot (flag 0x10) or any member slot holds a unit (kind 2 or 3) that passes FUN_001ee498. */
s32 btlSlotsHaveReadyUnit(UnitSlotOwner *owner)
{
    void *unit;
    s32 i;

    if (owner->flags & 0x10) {
        if ((owner->leader.kind == 2 || owner->leader.kind == 3) &&
            (unit = FUN_002ae164(owner->leader.id)) != NULL && FUN_001ee498(unit)) {
            return 1;
        }
    } else {
        for (i = 0; i < 5; i++) {
            if ((owner->members[i].kind == 2 || owner->members[i].kind == 3) &&
                (unit = FUN_002ae164(owner->members[i].id)) != NULL && FUN_001ee498(unit)) {
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
