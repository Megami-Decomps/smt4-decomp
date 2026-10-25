#include "shard/Shard0032.h"

extern "C" {

extern s32 libc_strlen(const u16 *str);

/* True unless the player summary has a name and all seven stats set. */
u32 playerSummaryIsIncomplete(PlayerSummary *summary)
{
    if (summary != NULL) {
        if (libc_strlen(summary->name) != 0 && summary->stats[0] != 0) {
            if (summary->stats[1] != 0 && summary->stats[2] != 0) {
                if (summary->stats[3] != 0 && summary->stats[4] != 0) {
                    if (summary->stats[5] != 0 && summary->stats[6] != 0) {
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}

} /* extern "C" */
