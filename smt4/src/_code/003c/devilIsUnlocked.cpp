#include "shard/W6_W6Match5_DevilSort.h"
#include "shard/W6_W6Match2_RecordValue.h"

extern "C" {
bool gameRecordCopy(u32, GameSavedItem *);
u32 gameFlagIsSet(u32);

/* Whether the registry record `index` exists and is marked eligible. */
static __inline bool devilRegistryEligible(u32 index)
{
    GameSavedItem saved;
    return gameRecordCopy(index, &saved) && (saved.flags & 0xfc);
}

/* Returns whether a demon is available: its unlock flag is set and, when it is linked to a registry record, that record is eligible. */
u32 devilIsUnlocked(u32 unused, u16 id)
{
    DevilRecord *definition = devilGetRecord(id);
    if (definition != NULL && (definition->specialFusion.requiredFlag == 0 || gameFlagIsSet(definition->specialFusion.requiredFlag))) {
        if (!(definition->specialFusion.prerequisite & 1)) {
            return 1;
        }
        if (definition->specialFusion.prerequisite & ~1) {
            if (devilRegistryEligible(definition->specialFusion.prerequisite >> 1)) {
                return 1;
            }
        } else if (devilRegistryEligible(definition->id)) {
            return 1;
        }
    }
    return 0;
}
}
