/* NON_MATCHING: clamp uses r0 for the maximum and r1 for the player pointer, adding a move relative to retail. */
#include "common.h"

extern "C" {

typedef struct PlayerData {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s16 max;
    /* 0x1E */ u8 unk1E[0xC];
    /* 0x2A */ s16 value;
} PlayerData;

extern PlayerData *gameGetPlayerData(void);

/* Stores `value` clamped to [1, max] (just max when it exceeds max... ). */
void FUN_003e0064(s32 value)
{
    PlayerData *player = gameGetPlayerData();

    s32 clamped = player->max;
    if (value <= clamped) {
        if (value < 1) {
            value = 1;
        }
        clamped = value;
    }
    player->value = clamped;
}

} /* extern "C" */
