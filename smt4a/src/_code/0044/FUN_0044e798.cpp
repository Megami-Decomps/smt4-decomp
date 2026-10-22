#include "common.h"

struct Obj55ba10Value {
    u8 unk00[0x1c];
    s32 value; // 0x1c
};

// Read the object's stored value.
extern "C" s32 FUN_0044e798(const Obj55ba10Value *object) { return object->value; }
