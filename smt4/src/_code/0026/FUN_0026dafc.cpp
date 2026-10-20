#include "common.h"

extern "C" {

extern int FUN_0029e9cc(u16 value);

typedef struct GameData {
    /* 0x0000 */ u8 unk0000[0x1300];
    /* 0x1300 */ u16 unk1300;
    /* 0x1302 */ u8 unk1302[0x596];
    /* 0x1898 */ u32 unk1898;
    /* 0x189C */ u8 unk189C[0x5CA];
    /* 0x1E66 */ u8 unk1E66;
} GameData;

extern struct {
    u8 unk00[4];
    GameData *data;
} g_gameGlobals;

void FUN_0026dafc(u32 value)
{
    GameData *data = g_gameGlobals.data;

    if (((g_gameGlobals.data != NULL) && (g_gameGlobals.data->unk1E66 != 13)) &&
        ((g_gameGlobals.data->unk1E66 != 6 || (FUN_0029e9cc(g_gameGlobals.data->unk1300) != 0)))) {
        data->unk1898 = value;
    }
}

} /* extern "C" */
