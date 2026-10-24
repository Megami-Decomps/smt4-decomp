#include "common.h"

struct PlayerTrack {
    /* 0x00 */ u8 unk00[100];
    /* 0x64 */ f32 fromX;
    /* 0x68 */ u8 unk68[4];
    /* 0x6C */ f32 fromZ;
    /* 0x70 */ f32 toX;
    /* 0x74 */ u8 unk74[4];
    /* 0x78 */ f32 toZ;
};

extern "C" {

extern struct {
    /* 0x00 */ u8 unk00[0xd0];
    /* 0xD0 */ f32 value0;
    /* 0xD4 */ f32 value1;
    /* 0xD8 */ f32 value2;
    /* 0xDC */ f32 value5;
} g_gameState;

extern PlayerTrack *DAT_004474f4;

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
f32 FUN_00281e34(f32 x, f32 z);

/* Script command: returns one of six game state values by selector 0-5 (3 is a heading in degrees, 4 is a constant 500). */
u32 FUN_00310f44(void)
{
    switch (scrGetArg(0)) {
    case 0:
        scrSetResult((s32)g_gameState.value0);
        break;
    case 1:
        scrSetResult((s32)g_gameState.value1);
        break;
    case 2:
        scrSetResult((s32)g_gameState.value2);
        break;
    case 3: {
        PlayerTrack *track = DAT_004474f4;

        f32 dx = track->toX - track->fromX;
        f32 dz = track->toZ - track->fromZ;

        scrSetResult((s32)(FUN_00281e34(dx, dz) * (180.0f / 3.14f)));
        break;
    }
    case 4:
        scrSetResult(500);
        break;
    case 5:
        scrSetResult((s32)g_gameState.value5);
        break;
    }
    return 1;
}

} /* extern "C" */
