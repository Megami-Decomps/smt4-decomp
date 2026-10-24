/* NON_MATCHING: retail interleaves each slot's packed read-modify-write with the next slot's stores (no hoisted loads, no stm); built hoists the four loads */
#include "classes/Obj55bccc.h"

/* Starts with every word and slot cleared. */
Obj55bccc::Obj55bccc(u32 second, u32 third, u32 first)
    : first(first), second(second), unk0c(0), unk10(0), unk14(0), third(third)
{
    packed18.value = 0;
    packed18.tag = 0;
    for (s32 i = 0; i < 4; i++) {
        slots[i].unk00 = 0;
        slots[i].unk04 = 0;
        slots[i].unk08 = 0;
        slots[i].packed.value = 0;
        slots[i].packed.tag = 0;
    }
    unk60 = 0;
    unk64 = 0;
}
