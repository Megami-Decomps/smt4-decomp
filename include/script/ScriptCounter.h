#ifndef SMT4_SCRIPT_SCRIPTCOUNTER_H
#define SMT4_SCRIPT_SCRIPTCOUNTER_H

#include "common.h"

struct ScriptCounter {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 counter;
};

#endif
