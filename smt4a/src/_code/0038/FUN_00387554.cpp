#include "common.h"

namespace {
struct ObjectState {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 unk10;
};
}

/* Reads the object's stored value. */
extern "C" u32 FUN_00387554(const ObjectState *object)
{
    return object->unk10;
}
