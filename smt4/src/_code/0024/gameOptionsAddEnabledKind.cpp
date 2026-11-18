#include "shard/GameOptions.h"

extern "C" GameOptions* gameGetSupportUnitData(void);

extern "C" void gameOptionsAddEnabledKind(s32 kind)
{
    GameOptions* options = gameGetSupportUnitData();
    if (!(options->flags & 1) && options->supportCandidates[0] != kind &&
        options->supportCandidates[1] != kind && options->supportCandidates[2] != kind) {
        if (options->supportCandidates[0] == 0) {
            options->supportCandidates[0] = (u16)kind;
        } else if (options->supportCandidates[1] == 0) {
            options->supportCandidates[1] = (u16)kind;
        } else if (options->supportCandidates[2] == 0) {
            options->supportCandidates[2] = (u16)kind;
        }
    }
}
