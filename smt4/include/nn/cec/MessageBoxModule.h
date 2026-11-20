#ifndef NN_CEC_MESSAGE_BOX_MODULE_H
#define NN_CEC_MESSAGE_BOX_MODULE_H

#include "nn/cec/ModuleState.h"
#include <stddef.h>

/* Message-box module state in IV, including the initialized word pair after the flags. */
struct CecMessageBoxModuleState : CecModuleFlags {
    explicit CecMessageBoxModuleState(s64 initial) : unk08(initial) {}

    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ s64 unk08;
};

typedef char CecMessageBoxModuleStateLayoutCheck[
    offsetof(CecMessageBoxModuleState, unk08) == 0x08 && sizeof(CecMessageBoxModuleState) == 0x10 ? 1 : -1];

struct CecMessageBoxModuleWords {
    CecMessageBoxModuleWords() : unk00(0) {}

    /* 0x00 */ u64 unk00;
};

#endif
