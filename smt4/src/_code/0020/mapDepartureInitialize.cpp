#include "shard/W5_W5Match2_MapState.h"

extern "C" {

struct MapDepartureWork {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u16 state;
    /* 0x16 */ u8 unk16[0xA];
    /* 0x20 */ u32 first;
    /* 0x24 */ u32 second;
    /* 0x28 */ u32 third;
    /* 0x2C */ u32 fourth;
};
extern GameStateCallbackWork g_gameState;
extern MapDepartureWork *g_mapDepartWork;

/* Reset departure progress when the game selects departure mode one. */
void mapDepartureInitialize(void)
{
    if (g_gameState.departureMode != 1) {
        g_mapDepartWork->state = 0;
    } else {
        g_mapDepartWork->state = 1;
        g_mapDepartWork->first = 0;
        g_mapDepartWork->second = 0;
        g_mapDepartWork->third = 0;
        g_mapDepartWork->fourth = 0;
    }
}

}
