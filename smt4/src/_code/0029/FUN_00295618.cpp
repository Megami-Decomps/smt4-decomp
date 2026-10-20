#include "common.h"

extern "C" {

typedef struct GameData {
    /* 0x0000 */ u8 unk0000[0x12DC];
    /* 0x12DC */ s32 unk12DC;
} GameData;

extern struct {
    u8 unk00[4];
    GameData *data;
} g_gameGlobals;

u8 FUN_00295618(void)
{
    return g_gameGlobals.data->unk12DC == 3;
}

} /* extern "C" */
