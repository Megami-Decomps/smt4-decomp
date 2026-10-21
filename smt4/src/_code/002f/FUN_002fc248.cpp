#include "common.h"

namespace {
struct ObjectState {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 unk14;
};
}

/* Updates the object's stored value. */
extern "C" void FUN_002fc248(ObjectState *object, u32 value)
{
    object->unk14 = value;
}
