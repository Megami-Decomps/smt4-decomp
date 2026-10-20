#include "common.h"

extern "C" {

int FUN_0026d654(u32 value);

typedef struct GameData {
    /* 0x0000 */ u8 unk0000[0x12F1];
    /* 0x12F1 */ s8 unk12F1;
} GameData;

extern struct {
    u8 unk00[4];
    GameData *data;
} g_gameGlobals;

void FUN_00298d0c(u32 value)
{
    g_gameGlobals.data->unk12F1 = (s8)value;
    FUN_0026d654(value ^ 1);
}

} /* extern "C" */
