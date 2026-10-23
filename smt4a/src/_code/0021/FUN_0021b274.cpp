/* NON_MATCHING: track/image selection merges branches; camp pointer loaded twice and register allocation differs. */
#include "camp/CampState.h"

extern "C" {
extern CampStateA *g_camp;
void uiSpriteSetKeyframe(u8 *, s32, u32);
void uiSpriteSetImageKeyframe(u8 *, s32, u32);

// Select paired camp animation/image tracks and start the corresponding transition.
void FUN_0021b274(s32 mode, s32 image, u32 frame)
{
    CampStateA *camp = g_camp;
    if (mode == 1 || mode == 2) {
        if (camp != NULL && camp->spriteState != 2 && camp->spriteState != 1) {
            uiSpriteSetImageKeyframe(camp->transitionSprite, 23, 0);
            camp->spriteState = 1;
        }
    } else if (mode == 3 || mode == 4) {
        if (camp != NULL && camp->spriteState != 4 && camp->spriteState != 3) {
            uiSpriteSetImageKeyframe(camp->transitionSprite, 24, 0);
            camp->spriteState = 3;
        }
    }
    s32 track = mode;
    if (mode == 1)
        track = 9;
    else if (mode == 2)
        track = 10;
    else if (mode == 3)
        track = 11;
    else if (mode == 4)
        track = 12;
    if (mode == 1 || mode == 2)
        image = 19;
    else if (mode == 3 || mode == 4)
        image = 20;
    uiSpriteSetKeyframe(camp->primarySprite, (s16)track, frame);
    uiSpriteSetImageKeyframe(camp->primarySprite, (s16)image, frame);
}
}
