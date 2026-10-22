#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/SourceMetadata.h"

extern "C" {
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *state, u32 id);
void source4CCopyHalves(const BtlCombatantEntryA *entry, u16 *values);
SourceMetadataFlags *FUN_0034a290(u32 id);

/* Tests the first nine copied source IDs for the metadata flag. */
u16 FUN_004c6e24(u32 id)
{
    BtlCombatantEntryA *entry = FUN_003f0e20(btlGetMainState(), id);
    u16 values[10] = {0};
    source4CCopyHalves(entry, values);
    for (s32 i = 0; i < 9; ++i) {
        if (values[i] != 0) {
            SourceMetadataFlags *metadata = FUN_0034a290(values[i]);
            if (metadata != NULL && (metadata->flags & 1) != 0) {
                return metadata->flags & 1;
            }
        }
    }
    return 0;
}
}
