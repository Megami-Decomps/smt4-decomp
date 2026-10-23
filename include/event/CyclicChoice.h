#ifndef EVENT_CYCLICCHOICE_H
#define EVENT_CYCLICCHOICE_H
#include "common.h"
#include <stddef.h>

struct CyclicChoiceState {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u16 choice;
    /* 0x12 */ s16 result;
};
struct CyclicChoiceGlobals {
    u8 unk00[8];
    CyclicChoiceState *state;
};
typedef char CyclicChoiceLayoutCheck[
    offsetof(CyclicChoiceState, choice) == 0x10 &&
    offsetof(CyclicChoiceState, result) == 0x12 &&
    offsetof(CyclicChoiceGlobals, state) == 8 ? 1 : -1];
#endif
