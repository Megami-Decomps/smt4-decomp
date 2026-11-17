/* NON_MATCHING: Retail beq 60 differs from recovered beq 40. */
#include "common.h"
#include "game/GameStateA.h"

namespace {

}

extern "C" {
s32 scrGetArg(s32 index);
s32 mapPlaceSet(s32 place, s32 entrance, s32 option);
s32 FUN_00376fb8(u32 value);
s32 asdSequenceRequest(s32 sequence, s32 argument, s32 flags);

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
        g_gameState.unk028 = 1;
        break;
    }

    g_gameState.savedLocationSet = 0;
    asdSequenceRequest(6, 0, 0);
    return 1;
}
}
