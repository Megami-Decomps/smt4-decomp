#include "common.h"
#include "camp/Unite/UniteGlobals.h"
#include <stddef.h>
#include "event/2dEvent/2dEventTex.h"
#include "gamedata/FlagValueIsPositive.h"

struct FusionSelectionRecord {
    u8 unk00[0x36];
    u8 flags; // 0x36
};

typedef char CheckFusionSelectedIdOffset[offsetof(UniteWorkA, registered.selectedId) == 0x92bc ? 1 : -1];

// Check the selected fusion's flag only when this query is enabled.
extern "C" s32 uniteSelectedFusionIsEnabled(s32 enabled)
{
    if (!enabled)
        return enabled;
    UniteWorkA *work = g_unite;
    if (work == NULL)
        return 0;
    if (work->registered.selectedId != 0) {
        s32 selected = (reinterpret_cast<FusionSelectionRecord *>(saveGetUserSettingsBlock())->flags & 2) >> 1;
        if (selected != 0 && flagValueIsPositive(work->registered.selectedId) != 0) {
            return 1;
        }
    }
    return 0;
}
