#ifndef SMT4_EFFECT_SCALARPARAMETER_H
#define SMT4_EFFECT_SCALARPARAMETER_H

#include "common.h"

struct ScalarParameter {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ f32 value;
};

#endif
