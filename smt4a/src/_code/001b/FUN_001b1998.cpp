/* NON_MATCHING: retail also registers the set's destructor (FUN_00190784, via the NOPed __aeabi_atexit) and chains the member stores through the array constructor's returned pointer; needs the destructor class and its rename. */
#include "shard/W5_W5Match1_RecordKeys.h"

namespace {
/* Three callback lists followed by the state those lists are driven with; all of it starts cleared. */
struct CallbackListSet {
    CallbackListSet()
    {
        firstFlag = 0;
        firstByte = 0;
        firstWord = 0;
        firstValue = 0;
        firstLimit = -1;
        secondFlag = 0;
        secondHalf = 0;
        secondWord = 0;
        thirdHalf = 0;
        thirdWord = 0;
        secondValue = 0;
        secondLimit = -1;
        tailWord = 0;
        lastWord = 0;
    }
    /* 0x00 */ CallbackList lists[3];
    /* 0x24 */ u32 firstFlag;
    /* 0x28 */ u8 firstByte;
    /* 0x2C */ u32 firstWord;
    /* 0x30 */ u32 firstValue;
    /* 0x34 */ s32 firstLimit;
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u32 secondFlag;
    /* 0x40 */ u16 secondHalf;
    /* 0x44 */ u32 secondWord;
    /* 0x48 */ u16 thirdHalf;
    /* 0x4C */ u32 thirdWord;
    /* 0x50 */ u32 secondValue;
    /* 0x54 */ s32 secondLimit;
    /* 0x58 */ u8 unk58[0xC];
    /* 0x64 */ u32 tailWord;
    /* 0x68 */ u32 lastWord;
};
}

/* The shared callback list set, created on first use. */
extern "C" CallbackListSet *FUN_001b1998(void)
{
    static CallbackListSet instance;
    return &instance;
}
