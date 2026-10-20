#include "common.h"

extern "C" {

void FUN_00184c00(u8 *member, s32 a, s32 b);
void FUN_002c2160(s32 mode);
s32 FUN_0033e164(void);
s32 FUN_0038b568(void);

typedef struct Game {
    /* 0x0000 */ u8 unk0000[0x14];
    /* 0x0014 */ u32 unk14;
    /* 0x0018 */ u8 unk18[4];
    /* 0x001C */ s32 state;
    /* 0x0020 */ u32 unk20;
    /* 0x0024 */ u8 unk24[4];
    /* 0x0028 */ s32 previousState;
    /* 0x002C */ u8 unk2C[0x1608];
    /* 0x1634 */ u8 member1634[1];
} Game;
extern Game *DAT_0057f108;

/* Switches the game to `newState`, remembering the previous one; state 0x33 runs its set-up, and state 0x55 falls back to 0x56 when FUN_0038b568 reports 0. */
void FUN_0020b660(s32 newState)
{
    Game *game;

    game = DAT_0057f108;
    DAT_0057f108->previousState = DAT_0057f108->state;
    game->state = newState;
    game->unk20 = 0;
    game->unk14 = 0;
    if (newState == 0x33) {
        FUN_0033e164();
        FUN_002c2160(2);
        FUN_00184c00(game->member1634, 7, 0);
        return;
    }
    if ((newState == 0x55) && (FUN_0038b568() == 0)) {
        game->state = 0x56;
    }
}

} /* extern "C" */
