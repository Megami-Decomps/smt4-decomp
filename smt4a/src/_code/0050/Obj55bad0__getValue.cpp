#include "common.h"

struct Obj55bad0Value {
    u8 unk00[0x1c];
    s32 value; // 0x1c
};

// Read the object's stored value.
extern "C" s32 _ZNK9Obj55bad08getValueEv(const Obj55bad0Value *object) { return object->value; }
