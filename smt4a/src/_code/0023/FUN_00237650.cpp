#include "common.h"

extern "C" {

void uiSpriteSetImageKeyframe(u8 *member, s32 a, s32 b);
void FUN_00388758(s32 value);

typedef struct Game {
    /* 0x0000 */ u8 unk0000[0x1634];
    /* 0x1634 */ u8 member1634[1];
} Game;
extern Game *g_camp;

/* Runs FUN_00388758(1), then uiSpriteSetImageKeyframe on the game's member at 0x1634. */
void FUN_00237650(void)
{
    FUN_00388758(1);
    uiSpriteSetImageKeyframe(g_camp->member1634, 7, 0);
}

} /* extern "C" */
