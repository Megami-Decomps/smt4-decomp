#include "shard/Shard003E.h"

extern "C" {

typedef struct StepState {
    /* 0x00 */ u32 state;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ u32 job;
} StepState;

extern s32 FUN_0013def0(u32 index);
extern void FUN_0031a400(void);
extern void FUN_00342010(void);
extern void FUN_003b61ec(void);
extern void sysPlaySe(u32 id);
extern void FUN_00275f44(u32 job, s32 value);
extern s32 FUN_00224880(u32 job);
extern void FUN_0035b304(void);
extern void FUN_0037b450(void);
extern BtlStateB *btlGetMainState(void);
extern u32 FUN_003e71a8(StepState *step);

/* Step: once both FUN_0013def0 inputs report 3, plays the sound, starts the job and moves on to state 9/10 when it finishes. */
u32 stepStateBattleStart(StepState *step)
{
    u32 result;

    if (FUN_0013def0(0) == 3 && FUN_0013def0(1) == 3) {
        FUN_0031a400();
        FUN_00342010();
        FUN_003b61ec();
        sysPlaySe(0xAB);
        FUN_00275f44(step->job, 0);
        step->state = 8;
        if (FUN_00224880(step->job) == 2) {
            FUN_0035b304();
            FUN_0037b450();
            if (btlGetMainState()->unk4C80 != 1) {
                step->state = 9;
                result = FUN_003e71a8(step);
                return result;
            }
            result = -1;
            step->state = 10;
            return result;
        }
    }
    return 0;
}

} /* extern "C" */
