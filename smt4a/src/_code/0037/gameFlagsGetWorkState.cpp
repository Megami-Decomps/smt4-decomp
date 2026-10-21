#include "common.h"

extern "C" {

struct FlagWork {
    /* 0x0000 */ u8 unk0000[0x158c];
    /* 0x158c */ u32 value;
};
FlagWork *gameFlagsGetBlock(void);

u32 gameFlagsGetWorkState(void)
{
    FlagWork *work = gameFlagsGetBlock();
    return work != NULL ? work->value : 0;
}

} /* extern "C" */
