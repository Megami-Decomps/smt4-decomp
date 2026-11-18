#include "shard/GameOptions.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
GameOptions* gameGetSupportUnitData(void);

// Classifies the current option/progress state into normal, pending, or flagged.
u32 gameGetOptionProgressStatus()
{
    GameOptions* options = gameGetSupportUnitData();
    if (options->flags & 1) {
        if (options->unk46 != 0) {
            return 2;
        }
    } else if (options->supportCandidates[0] != 0 || options->supportCandidates[1] != 0 || options->supportCandidates[2] != 0) {
        return 1;
    }
    return 0;
}
}
