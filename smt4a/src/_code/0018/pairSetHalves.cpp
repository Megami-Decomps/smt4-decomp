#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u16 first;
    /* 0x1A */ u16 second;
} Holder;

/* Stores the two halfwords at 0x18 and 0x1A. */
void pairSetHalves(Holder *object, u16 first, u16 second)
{
    object->first = first;
    object->second = second;
}

} /* extern "C" */
