#include "common.h"

struct Obj55bad0Value {
    u8 unk00[0x1c];
    s32 value; // 0x1c
};

// Read the object's stored value.
extern "C" s32 FUN_00506f1c(const Obj55bad0Value *object) { return object->value; }
