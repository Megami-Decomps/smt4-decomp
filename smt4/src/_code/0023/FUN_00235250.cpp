#include "shard/S1Mover.h"
#include <stddef.h>

extern "C" {
void memClear(void *memory, u32 size);
const Vec3f *asdSoundGetListener(void);

// Clear movement state and seed all eight saved vectors from the current listener position.
void FUN_00235250(Mover *mover)
{
    // Mover's padding starts at 0x16: a union containing words there would change alignment.
    struct MoverResetView {
        u32 unk00;
        s32 slot;
        u32 unk08;
        u32 unk0C;
        u32 frame;
        u8 active;
        u8 moveNode;
        u8 unk16[2];
        u32 unk18;
        u32 unk1C;
        u8 unk20[0x54C];
        u8 partState[0x80]; // 0x56C
        u8 secondaryState[0xA0]; // 0x5EC
        u8 unk68C[0xF60];
        Vec3f velocity; // 0x15EC
        Vec3f velocityB;
        Vec3f position;
        Vec3f positionB;
        Vec3f finalPosition;
        Vec3f finalPositionB;
        Vec3f unk1634;
        Vec3f unk1640;
    };
    typedef char MoverResetViewOffsetsCheck[
        offsetof(MoverResetView, partState) == 0x56C &&
        offsetof(MoverResetView, secondaryState) == 0x5EC &&
        offsetof(MoverResetView, velocity) == 0x15EC && sizeof(MoverResetView) == 0x164C ? 1 : -1];
    MoverResetView *state = reinterpret_cast<MoverResetView *>(mover);
    state->unk00 = 0;
    state->slot = 0;
    state->unk08 = 0;
    state->unk0C = 0;
    state->frame = 0;
    state->active = 0;
    state->moveNode = 0;
    state->unk18 = 0;
    state->unk1C = 0;
    memClear(state->partState, sizeof(state->partState));
    memClear(state->secondaryState, sizeof(state->secondaryState));
    state->velocity = *asdSoundGetListener();
    state->velocityB = *asdSoundGetListener();
    state->position = *asdSoundGetListener();
    state->positionB = *asdSoundGetListener();
    state->finalPosition = *asdSoundGetListener();
    state->finalPositionB = *asdSoundGetListener();
    state->unk1634 = *asdSoundGetListener();
    state->unk1640 = *asdSoundGetListener();
}
}
