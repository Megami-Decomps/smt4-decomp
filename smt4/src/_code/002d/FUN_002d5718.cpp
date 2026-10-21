#include "common.h"

namespace {
struct ObjectState {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ u32 unk1C;
};
}

/* Reads the object's stored state. */
extern "C" u32 FUN_002d5718(const ObjectState *object)
{
    return object->unk1C;
}
