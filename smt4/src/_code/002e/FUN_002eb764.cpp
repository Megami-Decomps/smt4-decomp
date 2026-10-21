#include "common.h"

namespace {
struct ObjectState {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ u8 unk3C;
};
}

/* Updates the object's byte flag. */
extern "C" void FUN_002eb764(ObjectState *object, u8 value)
{
    object->unk3C = value;
}
