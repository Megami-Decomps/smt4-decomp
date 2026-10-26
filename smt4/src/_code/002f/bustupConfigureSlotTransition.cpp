#include "ui/SpriteTransition.h"
#include "util/CalleeContracts.h"
extern "C" {
s32 gameFlagIsSet(u32 flag);
SpriteTransitionWork *jobGetWork(u32 job);
void aocSlotRelease(SpriteTransitionWork *work);
s32 FUN_0024ecc0(u32 job, u32 portrait);
void FUN_002a880c(SpriteTransitionWork *work, u32 mode, u32 flags);
void FUN_002a4e18(Vec3f *target, u32 portrait);
void FUN_002bf6fc(u32 job, u32 first, u32 second, u32 third, u32 flags);

void bustupConfigureSlotTransition(u32 job, u32 portrait, s32 mode, u32 first, u32 second, u32 third)
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
        if (mode == 0) {
            FUN_002a880c(work, 7, 0);
        } else if (mode == 1) {
            FUN_002a880c(work, 6, 0);
        } else if (mode == 2) {
            FUN_002bf6fc(work->job, first, second, third, 0xFFFFFFFF);
            FUN_002a880c(work, 7, 0);
        } else if (mode == 3) {
            FUN_002bf6fc(work->job, first, second, third, 0xFFFFFFFF);
            FUN_002a880c(work, 6, 0);
        }
        work->state = 2;
        break;
    case 3:
        FUN_002a880c(work, 5, 0);
        {
            SpriteTransitionWork *current = jobGetWork(job);
            // A naturally aligned local view avoids enlarging the byte-aligned padding union.
            struct PositionView { u8 prefix[0x34]; Vec3f position; };
            Vec3f position = ((const PositionView *)current)->position;
            current->state = 1;
            current->start = position;
        }
        FUN_002a4e18(&work->target, work->unk08);
        break;
    }
}
}
