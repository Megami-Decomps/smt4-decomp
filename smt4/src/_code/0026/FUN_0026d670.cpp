#include "common.h"

extern "C" {

int statusDownRestoreTabForMode(void);

typedef struct GameData {
    /* 0x0000 */ u8 unk0000[0x12E4];
    /* 0x12E4 */ u32 unk12E4;
    /* 0x12E8 */ u8 unk12E8[0xB7B];
    /* 0x1E63 */ u8 unk1E63;
} GameData;

extern struct {
    u8 unk00[4];
    GameData *data;
} g_gameGlobals;

void FUN_0026d670(void)
{
    GameData *data = g_gameGlobals.data;

    g_gameGlobals.data->unk12E4 = 0;
    statusDownRestoreTabForMode();
    data->unk1E63 = 0;
}

} /* extern "C" */
