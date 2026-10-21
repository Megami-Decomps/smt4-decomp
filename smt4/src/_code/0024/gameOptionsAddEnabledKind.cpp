#include "shard/GameOptions.h"

extern "C" GameOptions* gameGetSupportUnitData(void);

extern "C" void gameOptionsAddEnabledKind(s32 kind)
{
    GameOptions* options = gameGetSupportUnitData();
    if (!(options->flags & 1) && options->unk60A != kind &&
        options->unk60C != kind && options->unk60E != kind) {
        if (options->unk60A == 0) {
            options->unk60A = (u16)kind;
        } else if (options->unk60C == 0) {
            options->unk60C = (u16)kind;
        } else if (options->unk60E == 0) {
            options->unk60E = (u16)kind;
        }
    }
}
