#include "shard/Shard0047.h"

extern "C" {

typedef struct FlagsAt30 {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u8 flags;
} FlagsAt30;

extern s32 playerAlignmentClass(void);
extern FlagsAt30 *dataTable08Sub2GetRecord(s32 id);

/* True when the unit's alignment flags match the player's current alignment class. */
u32 unitMatchesAlignment(s32 unitId)
{
    s32 alignment = playerAlignmentClass();
    FlagsAt30 *unit = dataTable08Sub2GetRecord(unitId);
    u8 flags;

    if (unit == NULL) {
        return 0;
    }
    flags = unit->flags;
    if ((((flags & 1) != 0 && alignment == 4) || ((flags & 4) != 0 && alignment == 5)) ||
        ((flags & 2) != 0 && alignment == 1)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
