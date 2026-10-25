/* NON_MATCHING: armcc eliminates retail's shared zero-result move and branch on the unselected path. */
#include "common.h"
#include "shard/W5_W5Match2_UniteWork.h"
#include <stddef.h>

struct FusionSelectionRecord {
    u8 unk00[0x36];
    u8 flags; // 0x36
};
extern "C" UniteWork *g_unite;
extern "C" FusionSelectionRecord *FUN_0026140c(u16 id);
extern "C" u8 flagValueIsPositive(s32 id);

typedef char CheckFusionSelectedIdOffset[offsetof(UniteWork, registered.selectedId) == 0x92bc ? 1 : -1];

// Check the selected fusion's flag only when this query is enabled.
extern "C" s32 FUN_003347e8(s32 enabled)
{
    if (!enabled)
        return enabled;
    UniteWork *work = g_unite;
    if (work) {
        u16 id = work->registered.selectedId;
        if (id) {
            s32 result = (FUN_0026140c(id)->flags & 2) >> 1;
            if (result)
                result = flagValueIsPositive(work->registered.selectedId) != 0;
            return result;
        }
        return 0;
    }
    return 0;
}
