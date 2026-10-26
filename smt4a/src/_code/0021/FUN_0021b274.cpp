#include "camp/CampState.h"
/* NON_MATCHING: register allocation differs (retail keeps `mode` in r0 and the selected track in r4; the build shares r4); the camp pointer is now read per block like retail */

extern "C" {
extern CampStateA *g_camp;
void uiSpriteSetKeyframe(u8 *, s32, u32);
void uiSpriteSetImageKeyframe(u8 *, s32, u32);

// Select paired camp animation/image tracks and start the corresponding transition.
void FUN_0021b274(s32 mode, s32 image, u32 frame)
{
    if (mode == 1 || mode == 2) {
        CampStateA *camp = g_camp;
        if (camp != NULL && camp->spriteState != 2 && camp->spriteState != 1) {
            uiSpriteSetImageKeyframe(camp->transitionSprite, 23, 0);
            camp->spriteState = 1;
        }
    } else if (mode == 3 || mode == 4) {
        CampStateA *camp = g_camp;
        if (camp != NULL && camp->spriteState != 4 && camp->spriteState != 3) {
            uiSpriteSetImageKeyframe(camp->transitionSprite, 24, 0);
            camp->spriteState = 3;
        }
    }
    CampStateA *camp = g_camp;
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
