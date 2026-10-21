/* NON_MATCHING: retail resource ownership or default-store allocation differs. */
#include "common.h"

struct TargetState {
    /* 0x0000 */ u8 unk00[0x34f8];
    /* 0x34f8 */ u8 work[12];
    /* 0x3504 */ u8 unk3504[0x2254];
    /* 0x5758 */ u32 active;
    /* 0x575c */ u8 unk575c[2];
    /* 0x575e */ s8 value;
};
extern "C" void wordTripleClear(void *work);
/* Clears the target's transient work, active state and value. */
extern "C" void FUN_0030bc34(TargetState *target)
{
    target->active = 0;
    wordTripleClear(target->work);
    target->value = 0;
}
