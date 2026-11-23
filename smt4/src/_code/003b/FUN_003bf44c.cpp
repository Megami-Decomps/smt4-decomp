#include "battle/BtlMainAccess.h"
#include "common.h"
#include "battle/BattleBalanceRow.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotTableIV.h"

// The timer override is beyond the shared IV battle-state prefix.
struct BattleAmountWork {
    u8 unk0000[0x2f2c];
    s32 elapsedMinutes; // 0x2f2c, -1 uses the system clock
};
extern "C" {
u32 clockGetSecondsSinceStart();
u32 saveBlockGetPlaySeconds();
f32 FUN_002b99b8(f32 base, f32 exponent);

/* Scales a level-derived battle amount by the elapsed minutes and the active multiplier. */
s32 FUN_003bf44c()
{
    BattleAmountWork *battle = reinterpret_cast<BattleAmountWork *>(btlGetMainState());
    gameGetSlotTable();
    /* Initialised although every path sets it: retail materialises the 0.0 in s17 at entry, before the clock call. */
    f32 minutes = 0.0f;
    u32 seconds = clockGetSecondsSinceStart();
    if (seconds == 0xffffffff)
        minutes = (f32)(saveBlockGetPlaySeconds() / 60);
    else
        minutes = (f32)(seconds / 60);
    if (battle->elapsedMinutes != -1)
        minutes = (f32)battle->elapsedMinutes;
    if (minutes < 0.0f)
        minutes = 0.0f;
    else if (minutes > 120.0f)
        minutes = 120.0f;
    f32 level = (f32)gameGetPlayerData()->level;
    f32 base = FUN_002b99b8(level, 2.5f) + level * 80.0f;
    f32 bonus = base * minutes * 0.008333334f;
    s32 amount = (s32)(base + bonus);
    s32 scaled = (s32)(FUN_0023ea94()->amountMultiplier * (f32)amount);
    return scaled == 0 ? 1 : scaled;
}
}
