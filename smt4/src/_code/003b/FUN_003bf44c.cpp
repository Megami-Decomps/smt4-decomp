/* NON_MATCHING: retail preserves two additional integer registers and uses separate multiply/add scheduling. */
#include "common.h"

// The timer override is beyond the shared IV battle-state prefix.
struct BattleAmountWork {
    u8 unk0000[0x2f2c];
    s32 elapsedMinutes; // 0x2f2c, -1 uses the system clock
};
struct BattleAmountPlayer {
    u8 unk00[0x76];
    u8 level; // 0x76
};
struct BattleAmountScale {
    u8 unk00[0x20];
    f32 multiplier; // 0x20
};
extern "C" {
BattleAmountWork *btlGetMainState();
void *gameGetSlotTable();
u32 clockGetSecondsSinceStart();
u32 FUN_002907a8();
BattleAmountPlayer *gameGetPlayerData();
f32 FUN_002b99b8(f32 base, f32 exponent);
BattleAmountScale *FUN_0023ea94();

// Scale a level-derived battle amount by elapsed minutes and the active multiplier.
s32 FUN_003bf44c()
{
    BattleAmountWork *battle = btlGetMainState();
    gameGetSlotTable();
    u32 seconds = clockGetSecondsSinceStart();
    if (seconds == 0xffffffff)
        seconds = FUN_002907a8();
    f32 minutes = (f32)(seconds / 60);
    if (battle->elapsedMinutes != -1)
        minutes = (f32)battle->elapsedMinutes;
    if (minutes < 0.0f)
        minutes = 0.0f;
    else if (minutes > 120.0f)
        minutes = 120.0f;
    f32 level = (f32)gameGetPlayerData()->level;
    f32 base = FUN_002b99b8(level, 2.5f) + level * 80.0f;
    s32 amount = (s32)(base + base * minutes * 0.008333334f);
    s32 scaled = (s32)(FUN_0023ea94()->multiplier * (f32)amount);
    return scaled == 0 ? 1 : scaled;
}
}
