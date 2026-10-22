#include "shard/W6_W6Match5_DevilSort.h"
#include "shard/W6_W6Match2_RecordValue.h"

namespace {
struct DevilUnlockDefinition {
    /* 0x00 */ DevilSortRecord sort;
    /* 0x04 */ u8 unk04[0x30];
    /* 0x34 */ u16 registryLink;  /* bit 0: needs a registry record; upper bits: its index */
    /* 0x36 */ u16 unlockFlag;
};
}

extern "C" {
bool gameRecordCopy(u32, RecordValue *);
u32 gameFlagIsSet(u32);

/* Whether the registry record `index` exists and is marked eligible. */
static __inline bool devilRegistryEligible(u32 index)
{
    RecordValue saved;
    return gameRecordCopy(index, &saved) && (saved.eligibility.flags & 0xfc);
}

/* Returns whether a demon is available: its unlock flag is set and, when it is linked to a registry record, that record is eligible. */
u32 devilIsUnlocked(u32 unused, u16 id)
{
    DevilUnlockDefinition *definition = (DevilUnlockDefinition *)devilGetRecord(id);
    if (definition != NULL && (definition->unlockFlag == 0 || gameFlagIsSet(definition->unlockFlag))) {
        if (!(definition->registryLink & 1)) {
            return 1;
        }
        if (definition->registryLink & ~1) {
            if (devilRegistryEligible(definition->registryLink >> 1)) {
                return 1;
            }
        } else if (devilRegistryEligible(definition->sort.id)) {
            return 1;
        }
    }
    return 0;
}
}
