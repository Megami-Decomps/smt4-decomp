/* NON_MATCHING: saved job/portrait/mode registers, position snapshot load scheduling, and final mode branch polarity differ. */
#include "ui/SpriteTransition.h"
extern "C" {
s32 gameFlagIsSet(u32 flag);
SpriteTransitionWork *jobGetWork(u32 job);
void aocSlotRelease(SpriteTransitionWork *work);
s32 FUN_0024ecc0(u32 job, u32 portrait);
void FUN_002a880c(SpriteTransitionWork *work, u32 mode, u32 flags);
void FUN_002a4e18(Vec3f *target, u32 portrait);
void FUN_002bf6fc(u32 job, u32 first, u32 second, u32 third, u32 flags);

void FUN_002fc5f8(u32 job, u32 portrait, s32 mode, u32 first, u32 second, u32 third)
{
    if (gameFlagIsSet(0x522) && job == 0)
        return;
    SpriteTransitionWork *work = jobGetWork(job);
    work->initialized = 1;
    aocSlotRelease(work);
    work->unk08 = portrait;
    s32 result = FUN_0024ecc0(job, portrait);
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
        FUN_002a880c(work, 2, 0);
        work->state = 2;
        break;
    case 2:
        switch (mode) {
        case 0:
            FUN_002a880c(work, 7, 0);
            break;
        case 1:
            FUN_002a880c(work, 6, 0);
            break;
        case 2:
            FUN_002bf6fc(work->job, first, second, third, 0xFFFFFFFF);
            FUN_002a880c(work, 7, 0);
            break;
        case 3:
            FUN_002bf6fc(work->job, first, second, third, 0xFFFFFFFF);
            FUN_002a880c(work, 6, 0);
            break;
        }
        work->state = 2;
        break;
    case 3:
        FUN_002a880c(work, 5, 0);
        {
            SpriteTransitionWork *current = jobGetWork(job);
            // A naturally aligned local view avoids enlarging the byte-aligned padding union.
            struct PositionView { u8 prefix[0x34]; Vec3f position; };
            current->state = 1;
            current->start = ((const PositionView *)current)->position;
        }
        FUN_002a4e18(&work->target, work->unk08);
        break;
    }
}
}
