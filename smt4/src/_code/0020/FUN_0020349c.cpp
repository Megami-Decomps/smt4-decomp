#include "common.h"

extern "C" {

typedef struct GameData {
    /* 0x0000 */ u8 unk0000[0x1EB6];
    /* 0x1EB6 */ u16 unk1EB6;
} GameData;

extern struct {
    u8 unk00[4];
    GameData *data;
} g_gameGlobals;

void FUN_0020349c(u16 value)
{
    g_gameGlobals.data->unk1EB6 = value;
}

} /* extern "C" */
