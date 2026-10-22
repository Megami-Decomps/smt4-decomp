/* NON_MATCHING: bit-array address computation uses different quotient/mask registers. */
#include "common.h"

struct MapCompletedGroupState {
    /* 0x000 */ u8 unk000[0x7d4];
    /* 0x7D4 */ u32 completedGroups[1];
};

extern "C" s32 dataTable23Type0FindIndexById(u32 id);
extern "C" MapCompletedGroupState *gameGetMapBlock(void);
extern "C" void mapIfClearGroupState(u32 id);

/* Mark a known map group complete and clear its live state. */
extern "C" void mapCompleteGroup(u32 id)
{
    if (id == 0)
        return;
    s32 index = dataTable23Type0FindIndexById(id);
    if (index != -1) {
        MapCompletedGroupState *map = gameGetMapBlock();
        if (index >= 0)
            map->completedGroups[index / 32] |= 1u << (index % 32);
        mapIfClearGroupState(id);
    }
}
