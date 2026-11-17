#include "map/mapDepart.h"
#include "game/GameState.h"

extern "C" {

void mapDepartSetTarget(s32 a, u32 b, u32 c);
u32 scrGetArg(u32 index);


/* Script command: runs mapDepartSetTarget with 0xC9 and the script's argument and clears unk2F8. */
s32 mapDepartSetTargetFromArg(void)
{
    u32 value = scrGetArg(0);

    mapDepartSetTarget(0xC9, value, 0xFFFFFFFF);
    g_gameState.map.savedLocationSet = 0;
    return 1;
}

} /* extern "C" */
