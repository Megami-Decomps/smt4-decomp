#include "common.h"
#include "shard/W5_W5Match2_UniteWork.h"
#include <stddef.h>
#include "event/2dEvent/2dEventTex.h"
#include "gamedata/FlagValueIsPositive.h"

struct FusionSelectionRecord {
    u8 unk00[0x36];
    u8 flags; // 0x36
};
extern "C" UniteWork *g_unite;

typedef char CheckFusionSelectedIdOffset[offsetof(UniteWork, registered.selectedId) == 0x92bc ? 1 : -1];

// Check the selected fusion's flag only when this query is enabled.
extern "C" s32 uniteSelectedFusionIsEnabled(s32 enabled)
{
    if (!enabled)
        return enabled;
    UniteWork *work = g_unite;
    if (work == NULL)
        return 0;
    if (work->registered.selectedId != 0) {
        s32 selected = (reinterpret_cast<FusionSelectionRecord *>(FUN_0026140c())->flags & 2) >> 1;
        if (selected != 0 && flagValueIsPositive(work->registered.selectedId) != 0) {
            return 1;
        }
    }
    return 0;
}
