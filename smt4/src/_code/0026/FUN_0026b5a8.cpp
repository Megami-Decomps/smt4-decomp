#include "common.h"

extern "C" {

typedef struct GameData {
    /* 0x0000 */ u8 unk0000[0x1EB9];
    /* 0x1EB9 */ u8 unk1EB9;
} GameData;

extern struct {
    u8 unk00[4];
    GameData *data;
} g_gameGlobals;

void FUN_0026b5a8(u8 value)
{
    if (g_gameGlobals.data != NULL) {
        g_gameGlobals.data->unk1EB9 = value;
    }
}

} /* extern "C" */
