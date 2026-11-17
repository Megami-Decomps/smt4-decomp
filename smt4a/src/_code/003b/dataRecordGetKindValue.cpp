#include "gamedata/DevilRecordA.h"

extern "C" {

s32 gameOptionResourceId(u32 kind);

s32 dataRecordGetKindValue(u32 id)
{
    return gameOptionResourceId(devilGetRecord(id)->kind);
}

} /* extern "C" */
