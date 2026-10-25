#include "common.h"

extern "C" {

/* The request block at scene + 0x3400. */
struct RequestBlock {
    /* 0x000 */ u8 unk000[0x60];
    /* 0x060 */ u32 requestsA[4];
    /* 0x070 */ u32 requestsB[4];
    /* 0x080 */ u8 unk080[0x104 - 0x80];
    /* 0x104 */ u32 pending;
};

struct PlayScene {
    /* 0x0000 */ u8 unk0000[0x3048];
    /* 0x3048 */ s32 state;
    /* 0x304c */ u8 unk304c[0x305c - 0x304c];
    /* 0x305c */ s32 slot;
    /* 0x3060 */ u8 unk3060[0x3400 - 0x3060];
    /* 0x3400 */ RequestBlock block;
};

void playSceneSetState(PlayScene *scene, s32 state, s32 arg);

/* In state 0x28 clears the current slot's requests and the pending flag; otherwise clears all requests and switches to state 0x1c. */
void FUN_00225168(PlayScene *scene)
{
    if (scene->state != 0x28) {
        RequestBlock *block = &scene->block;

        block->requestsB[0] = 0;
        block->requestsB[1] = 0;
        block->requestsB[2] = 0;
        block->requestsB[3] = 0;
        playSceneSetState(scene, 0x1c, 0);
        return;
    }
    scene->block.requestsB[scene->slot] = 0;
    scene->block.requestsA[scene->slot] = 0;
    scene->block.pending = 0;
}

} /* extern "C" */
