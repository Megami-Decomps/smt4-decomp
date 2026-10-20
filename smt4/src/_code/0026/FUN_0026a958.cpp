#include "common.h"

extern "C" {

typedef struct GameData {
    /* 0x0000 */ u8 unk0000[0x1E71];
    /* 0x1E71 */ u8 unk1E71;
} GameData;

extern struct {
    u8 unk00[4];
    GameData *data;
} g_gameGlobals;

void FUN_0026a958(u8 value)
{
    if (g_gameGlobals.data != NULL) {
        g_gameGlobals.data->unk1E71 = value;
    }
}

} /* extern "C" */
