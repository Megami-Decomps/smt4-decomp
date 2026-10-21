#include "common.h"

namespace {
struct ObjectState {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 unk24;
};
}

/* Reads the object's stored state. */
extern "C" u32 FUN_002d5720(const ObjectState *object)
{
    return object->unk24;
}
