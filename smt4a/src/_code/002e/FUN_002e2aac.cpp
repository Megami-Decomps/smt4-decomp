#include "common.h"

extern "C" {

void FUN_002309dc(void);
void FUN_002e26a4(void);
void FUN_00330b74(void);
void FUN_0035b304(void);
void FUN_0037b450(void);
void FUN_0037dab0(void);
void FUN_003a76b8(void);
void FUN_003b6dc4(void);
void asdMemFree(void *memory);
s32 jobStop(u32 job, s32 flag);

typedef struct Game {
    /* 0x00 */ u32 job;
} Game;
extern Game *DAT_0057f108;

/* Shuts the game screen down: runs the clean-up calls, stops its job, frees it and clears the global. */
void FUN_002e2aac(void)
{
    Game *game;

    game = DAT_0057f108;
    FUN_003b6dc4();
    FUN_003a76b8();
    FUN_00330b74();
    FUN_002309dc();
    FUN_0037dab0();
    FUN_0035b304();
    FUN_0037b450();
    FUN_002e26a4();
    jobStop(game->job, 0);
    asdMemFree(game);
    DAT_0057f108 = NULL;
}

} /* extern "C" */
