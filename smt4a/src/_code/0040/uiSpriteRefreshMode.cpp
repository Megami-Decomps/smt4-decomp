#include "common.h"

extern "C" {

typedef struct Sprite {
    /* 0x0000 */ u8 unk0000[0x52C];
    /* 0x052C */ u32 state;
    /* 0x0530 */ u32 context;
    /* 0x0534 */ u8 target[0xC4];
    /* 0x05F8 */ u8 mode;           /* 3, 4 or 0 */
    /* 0x05F9 */ u8 unk05F9[0x83];
    /* 0x067C */ u8 normal[0x40];
    /* 0x06BC */ u8 alternate[0x40];
    /* 0x06FC */ u8 unk06FC[0xA9C];
    /* 0x1198 */ u8 output[4];
} Sprite;

int FUN_00187a84(Sprite *sprite, void *source, int arg2, void *target);
int FUN_00187d90(u32 context, void *dest);

/* Switches the sprite's mode by state (0/1 -> 3 with `normal`, 2 -> 4 with `alternate`, else 0); on a change re-initialises it and stores the new mode. */
void uiSpriteRefreshMode(Sprite *sprite)
{
    void *source = NULL;
    u8 mode;

    if (sprite->state == 0 || sprite->state == 1) {
        source = sprite->normal;
        mode = 3;
    } else if (sprite->state != 2) {
        mode = 0;
    } else {
        source = sprite->alternate;
        mode = 4;
    }
    if (sprite->mode != mode) {
        FUN_00187a84(sprite, source, 0, sprite->target);
        FUN_00187d90(sprite->context, sprite->output);
        sprite->mode = mode;
    }
}

} /* extern "C" */
