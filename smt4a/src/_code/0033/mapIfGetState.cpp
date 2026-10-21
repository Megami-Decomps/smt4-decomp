#include "common.h"

extern "C" {

struct MapInterface {
    /* 0x00 */ u8 unk00[0x1d];
    /* 0x1d */ s8 state;
};
extern MapInterface *g_mapIf;

s32 mapIfGetState(void)
{
    MapInterface *map = g_mapIf;
    return map != NULL ? map->state : 0;
}

} /* extern "C" */
