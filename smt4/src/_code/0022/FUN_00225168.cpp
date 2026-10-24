/* NON_MATCHING: same stores and call; retail addresses the request words as (scene + 0x3400) + 0x70..0x7c with a shared base register, built materialises each 0x347x offset from a pool constant */
#include "common.h"

extern "C" {

struct PlayScene {
    /* 0x0000 */ u8 unk0000[0x3048];
    /* 0x3048 */ s32 state;
    /* 0x304c */ u8 unk304c[0x305c - 0x304c];
    /* 0x305c */ s32 slot;
    /* 0x3060 */ u8 unk3060[0x3460 - 0x3060];
    /* 0x3460 */ u32 requestsA[4];
    /* 0x3470 */ u32 requestsB[4];
    /* 0x3480 */ u8 unk3480[0x3504 - 0x3480];
    /* 0x3504 */ u32 pending;
};

void playSceneSetState(PlayScene *scene, s32 state, s32 arg);

/* In state 0x28 clears the current slot's requests and the pending flag; otherwise clears all requests and switches to state 0x1c. */
void FUN_00225168(PlayScene *scene)
{
    if (scene->state != 0x28) {
        scene->requestsB[0] = 0;
        scene->requestsB[1] = 0;
        scene->requestsB[2] = 0;
        scene->requestsB[3] = 0;
        playSceneSetState(scene, 0x1c, 0);
        return;
    }
    scene->requestsB[scene->slot] = 0;
    scene->requestsA[scene->slot] = 0;
    scene->pending = 0;
}

} /* extern "C" */
