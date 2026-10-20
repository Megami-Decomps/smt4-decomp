#include "common.h"

extern "C" {

typedef struct GameData {
    /* 0x0000 */ u8 unk0000[0x1E67];
    /* 0x1E67 */ u8 unk1E67;
} GameData;

extern struct {
    u8 unk00[4];
    GameData *data;
} g_gameGlobals;

u8 FUN_002881a0(void)
{
    return g_gameGlobals.data->unk1E67;
}

} /* extern "C" */
