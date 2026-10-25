#include "common.h"

extern "C" {

typedef struct Request {
    /* 0x00 */ s32 x;
    /* 0x04 */ s32 y;
    /* 0x08 */ f32 speed;
    /* 0x0C */ u32 sprite;
} Request;

u32 FUN_00164b5c(u32 flags, u32 bank, u32 node, s32 x, s32 y, s32 depth);
int efctSetSpeed(f32 volume);

/* Draws the requested composite sprite at its coordinates using the supplied effect speed. */
void compositeSpriteDrawRequest(Request *request)
{
    s32 x = request->x;
    s32 y = request->y;

    efctSetSpeed(request->speed);
    FUN_00164b5c(2, 0x2b, request->sprite, x, y, 2);
    efctSetSpeed(1.0f);
}

} /* extern "C" */
