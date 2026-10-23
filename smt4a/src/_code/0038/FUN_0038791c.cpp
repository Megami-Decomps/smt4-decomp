/* NON_MATCHING: saved job/portrait/mode registers, position snapshot load scheduling, and final mode branch polarity differ. */
#include "ui/SpriteTransition.h"
extern "C" {
s32 gameFlagIsSet(u32 flag);
SpriteTransitionWork *jobGetWork(u32 job);
void aocSlotRelease(SpriteTransitionWork *work);
s32 FUN_003ae9d8(u32 job, u32 portrait);
void FUN_0019d96c(SpriteTransitionWork *work, u32 mode, u32 flags);
void FUN_001ad1ac(Vec3f *target, u32 portrait);
void bustupCutStartSlotTransition(u32 job, u32 first, u32 second, u32 third, u32 flags);

void FUN_0038791c(u32 job, u32 portrait, s32 mode, u32 first, u32 second, u32 third)
{
    if (gameFlagIsSet(0x522) && job == 0)
        return;
    SpriteTransitionWork *work = jobGetWork(job);
    work->initialized = 1;
    aocSlotRelease(work);
    work->unk08 = portrait;
    s32 result = FUN_003ae9d8(job, portrait);
    switch (result) {
    case 0:
        work->mode = 0;
        if (work->state)
            work->state = 1;
        else {
            work->initialized = 0;
            work->progress = 0.0f;
        }
        break;
    case 1:
        FUN_0019d96c(work, 2, 0);
        work->state = 2;
        break;
    case 2:
        switch (mode) {
        case 0:
            FUN_0019d96c(work, 7, 0);
            break;
        case 1:
            FUN_0019d96c(work, 6, 0);
            break;
        case 2:
            bustupCutStartSlotTransition(work->job, first, second, third, 0xFFFFFFFF);
            FUN_0019d96c(work, 7, 0);
            break;
        case 3:
            bustupCutStartSlotTransition(work->job, first, second, third, 0xFFFFFFFF);
            FUN_0019d96c(work, 6, 0);
            break;
        }
        work->state = 2;
        break;
    case 3:
        FUN_0019d96c(work, 5, 0);
        {
            SpriteTransitionWork *current = jobGetWork(job);
            // A naturally aligned local view avoids enlarging the byte-aligned padding union.
            struct PositionView { u8 prefix[0x34]; Vec3f position; };
            current->state = 1;
            current->start = ((const PositionView *)current)->position;
        }
        FUN_001ad1ac(&work->target, work->unk08);
        break;
    }
}
}
