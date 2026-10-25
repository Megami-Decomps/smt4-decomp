#include "map/mapDepart.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {
void mapDepartSetTarget(s32 area, u32 map, u32 entrance);
void FUN_0027d5ac(u32 map);
s32 scrGetArg(u32 index);
extern GameState g_gameState;

/* Sets the departure destination and requests the map transition sequence. */
u32 scrCommMapDepart(void)
{
    s32 area = scrGetArg(0);
    u32 map = scrGetArg(1);
    u32 entrance = scrGetArg(2);
    if (area == 0x18) {
        mapDepartSetTarget(area, 1, entrance);
        FUN_0027d5ac(map);
        g_gameState.unk27 = 1;
    } else {
        mapDepartSetTarget(area, map, entrance);
    }
    g_gameState.unk2F8Byte = 0;
    asdSequenceRequest(6, 0, 0);
    return 1;
}
}
