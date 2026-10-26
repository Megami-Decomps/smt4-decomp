#include "common.h"
#include "shard/SaveWork.h"

struct MapCompletedGroupState {
    /* 0x000 */ u8 unk000[0x7d4];
    /* 0x7D4 */ u32 completedGroups[1];
};

extern "C" s32 dataTable23Type0FindIndexById(u32 id);
extern "C" void mapIfClearGroupState(u32 id);

/* Sets a group's bit in the map block's completed-group mask. */
static __inline void mapMarkGroupCompleted(s32 index)
{
    MapCompletedGroupState *map = reinterpret_cast<MapCompletedGroupState *>(gameGetMapBlock());
    if (index >= 0) {
        s32 word = index / 32;
        s32 bit = index % 32;
        map->completedGroups[word] |= 1u << bit;
    }
}

/* Mark a known map group complete and clear its live state. */
extern "C" void mapCompleteGroup(u32 id)
{
    if (id == 0)
        return;
    s32 index = dataTable23Type0FindIndexById(id);
    if (index != -1) {
        mapMarkGroupCompleted(index);
        mapIfClearGroupState(id);
    }
}
