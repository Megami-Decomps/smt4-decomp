#include "gamedata/MapSaveBlock.h"

extern "C" s32 dataTable23Type0FindIndexById(u32 id);
extern "C" void mapIfClearGroupState(u32 id);

/* Sets a group's bit in the map block's completed-group mask. */
static __inline void mapMarkGroupCompleted(s32 index)
{
    MapSaveBlock *map = gameGetMapBlock();
    if (index >= 0) {
        s32 word = index / 32;
        s32 bit = index % 32;
        map->clearedGroups[word] |= 1u << bit;
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
