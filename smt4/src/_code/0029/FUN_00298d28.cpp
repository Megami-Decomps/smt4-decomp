#include "common.h"

extern "C" {

typedef struct GameData {
    /* 0x0000 */ u8 unk0000[0x1E68];
    /* 0x1E68 */ u32 unk1E68;
    /* 0x1E6C */ u32 unk1E6C;
} GameData;

extern struct {
    u8 unk00[4];
    GameData *data;
} g_gameGlobals;

void FUN_00298d28(u32 a, u32 b)
{
    GameData *data = g_gameGlobals.data;

    data->unk1E68 = a;
    data->unk1E6C = b;
}

} /* extern "C" */
