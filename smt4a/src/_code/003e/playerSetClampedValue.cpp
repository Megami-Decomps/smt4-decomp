/* NON_MATCHING: retail uses `cmp r4, r1` where armcc emits `cmp r1, r4`. */
#include "common.h"

extern "C" {

struct PlayerData { u8 unk00[0x1e]; s16 maximum; u8 unk20[0xc]; s16 value; };
PlayerData *gameGetPlayerData(void);

void playerSetClampedValue(s32 value)
{
    PlayerData *player = gameGetPlayerData();
    if (value > player->maximum) {
        value = player->maximum;
    } else if (value < 1) {
        value = 1;
    }
    player->value = value;
}

} /* extern "C" */
