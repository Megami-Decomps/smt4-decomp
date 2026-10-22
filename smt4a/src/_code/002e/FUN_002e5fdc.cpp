/* NON_MATCHING: Retail beq 60 differs from recovered beq 40. */
#include "common.h"

namespace {

struct GameStateLocalView {
    u8 unk00[0x28];
    u8 unk28;                 // 0x028
    u8 unk29[0x574 - 0x29];
    u8 unk574;                // 0x574
};

}

extern "C" {
s32 scrGetArg(s32 index);
s32 mapPlaceSet(s32 place, s32 entrance, s32 option);
s32 FUN_00376fb8(u32 value);
s32 asdSequenceRequest(s32 sequence, s32 argument, s32 flags);
extern GameStateLocalView g_gameState;

// Set the destination, apply the place-24 override, and request sequence 6.
u32 FUN_002e5fdc(void)
{
    s32 place = scrGetArg(0);
    s32 entrance = scrGetArg(1);
    s32 option = scrGetArg(2);

    switch (place) {
    default:
        mapPlaceSet(place, entrance, option);
        break;

    case 0x18:
        mapPlaceSet(place, 1, option);
        FUN_00376fb8(static_cast<u32>(entrance));
        g_gameState.unk28 = 1;
        break;
    }

    g_gameState.unk574 = 0;
    asdSequenceRequest(6, 0, 0);
    return 1;
}
}
